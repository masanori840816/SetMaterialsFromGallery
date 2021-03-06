package jp.setmaterialsfromgallery;

import android.app.AlertDialog;
import android.content.DialogInterface;
import android.content.res.Configuration;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Matrix;
import android.graphics.PixelFormat;
import android.media.MediaScannerConnection;
import android.net.Uri;
import android.os.Handler;
import android.os.HandlerThread;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.Window;
import android.view.WindowManager;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;

import android.annotation.TargetApi;
import android.app.Activity;
import android.content.Intent;
import android.database.Cursor;
import android.os.Build;
import android.os.Bundle;
import android.os.Environment;
import android.provider.DocumentsContract;
import android.provider.MediaStore;
import android.util.Log;
import android.widget.Toast;

import com.unity3d.player.UnityPlayer;

public class PluginConnector extends Activity {
  private static final int SDKVER_KITKAT = 19;
  private static final int REQUEST_GALLERY_KITKAT_ABOVE = 0;
  private static final int REQUEST_GALLERY_JELLYBEAN_BELOW = 1;
  // ロードできる画像の制限.とりあえず5MBとする.
  private static final int LIMIT_FILE_SIZE_BYTE = 5242880;
  // 画像の最大サイズ(長辺)
  private static final int MAX_IMAGE_SIZE = 1920;

  protected UnityPlayer mUnityPlayer; // don't change the name of this variable; referenced from native code

  public static void openImageView() {
    UnityPlayer.currentActivity.runOnUiThread(new Runnable() {
      public void run() {
        Intent ntnImage = new Intent();
        ntnImage.setType("image/*");

        if (Build.VERSION.SDK_INT < SDKVER_KITKAT) {
          ntnImage.setAction(Intent.ACTION_GET_CONTENT);
          UnityPlayer.currentActivity.startActivityForResult(ntnImage, REQUEST_GALLERY_JELLYBEAN_BELOW);
        } else {
          ntnImage.setAction(Intent.ACTION_OPEN_DOCUMENT);
          ntnImage.addCategory(Intent.CATEGORY_OPENABLE);
          UnityPlayer.currentActivity.startActivityForResult(ntnImage, REQUEST_GALLERY_KITKAT_ABOVE);
        }
      }
    });
  }

  public static void showAlertFileNotFound() {
    UnityPlayer.currentActivity.runOnUiThread(new Runnable() {
      @Override
      public void run() {
        AlertDialog.Builder aldAlertDialog = new AlertDialog.Builder(UnityPlayer.currentActivity);
        // アラートダイアログのタイトルを設定します
        aldAlertDialog.setTitle("画像が見つかりません");
        // アラートダイアログのメッセージを設定します
        aldAlertDialog.setMessage("画像の表示に失敗しました");
        aldAlertDialog.setPositiveButton("無念", new DialogInterface.OnClickListener() {
          @Override
          public void onClick(DialogInterface dialog, int which) {
            Log.d("PluginConnector", "ShowFileNotFoundAlert");
          }
        });
        aldAlertDialog.show();
      }
    });
  }
  private void showAlertFailedLoadFile()
  {
    showNoReactionAlert("ファイルの読み込みに失敗しました", "ファイルの読み込みに失敗しました");
  }
  private void showAlertFileTooLarge()
  {
    showNoReactionAlert("ファイルのサイズが大きすぎます", "使用できるファイルの最大サイズは5MBです");
  }
  private void showNoReactionAlert(final String strTitle, final String strMessage)
  {
    // ボタン押下後何もアクションがないアラートを表示.
    UnityPlayer.currentActivity.runOnUiThread(new Runnable() {
      @Override
      public void run() {
        AlertDialog.Builder aldAlertDialog = new AlertDialog.Builder(UnityPlayer.currentActivity);
        aldAlertDialog.setTitle(strTitle);
        aldAlertDialog.setMessage(strMessage);
        aldAlertDialog.setPositiveButton("無念", null);
        aldAlertDialog.show();
      }
    });
  }
  @Override
  protected void onActivityResult(int requestCode, int resultCode, Intent data) {
    if (resultCode != RESULT_OK) {
      return;
    }
    Cursor crsOrientation = getContentResolver().query(data.getData(),
            new String[]{MediaStore.Images.ImageColumns.ORIENTATION}, null, null, null);
    if (crsOrientation.getCount() != 1) {
      showAlertFailedLoadFile();
      return;
    }
    crsOrientation.moveToFirst();
    int intOrientationDegree = crsOrientation.getInt(0);
    crsOrientation.close();

    switch (requestCode) {
      case REQUEST_GALLERY_JELLYBEAN_BELOW:
        // 選択した画像のパスを取得する.
        Cursor crsPath = getContentResolver().query(data.getData(), new String[]{MediaStore.Images.Media.DATA}, null, null, null);
        if (crsPath.moveToFirst()) {
          this.editImage(crsPath.getString(0), intOrientationDegree);
        }
        crsPath.close();
        break;

      case REQUEST_GALLERY_KITKAT_ABOVE:
        // 選択した画像のパスを取得する.
        this.getSelectedItemPath(data, intOrientationDegree);
        break;
    }
  }
  @TargetApi(SDKVER_KITKAT)
  private void getSelectedItemPath(Intent data, int intOrientationDegree)
  {
    // 選択した画像のパスを取得する.
    String strDocId = DocumentsContract.getDocumentId(data.getData());
    String[] strSplittedDocId = strDocId.split(":");
    String strId = strSplittedDocId[strSplittedDocId.length - 1];

    Cursor crsPath = getContentResolver().query(
            MediaStore.Images.Media.EXTERNAL_CONTENT_URI
            , new String[]{MediaStore.MediaColumns.DATA}
            , "_id=?"
            , new String[]{strId}
            , null);

    if (crsPath.moveToFirst()) {
      this.editImage(crsPath.getString(0), intOrientationDegree);
    }
    crsPath.close();
  }
  private void editImage(final String strSendPath, final int intOrientationDegree)
  {
    File filNewImg = new File(strSendPath);

    if(! filNewImg.exists())
    {
      showAlertFailedLoadFile();
    }
    else if(filNewImg.length() > LIMIT_FILE_SIZE_BYTE)
    {
      showAlertFileTooLarge();
      filNewImg = null;
    }
    else
    {
      // 別スレッドで実行.
      HandlerThread thread = new HandlerThread("SelectImage");
      thread.start();
      Handler saveImageHandler = new Handler(thread.getLooper());
      saveImageHandler.post(
        new Runnable() {
          @Override
          public void run() {
            BitmapFactory.Options btfOptions = new BitmapFactory.Options();
            // 画像自体は読み込まず、データだけ取得する.
            btfOptions.inJustDecodeBounds = true ;
            BitmapFactory.decodeFile(strSendPath, btfOptions);

            int intScaleWidth = btfOptions.outWidth / MAX_IMAGE_SIZE;
            int intScaleHeight = btfOptions.outHeight / MAX_IMAGE_SIZE;
            int intScale;
            // 画像が横長かを確認する.
            if(intScaleWidth >= intScaleHeight)
            {
              intScale = intScaleWidth;
            }
            else
            {
              intScale = intScaleHeight;
            }
            if(intScale < 1)
            {
              intScale = 1;
            }
            btfOptions.inJustDecodeBounds = false ;
            // 縮小率の指定.
            btfOptions.inSampleSize = intScale;

            // 画像データをBitmapとして読み込む.
            Bitmap bmpLoadedImg = BitmapFactory.decodeFile(strSendPath, btfOptions);

            Matrix mtxRotate = new Matrix();
            // 元の画像データの回転を元に戻す.
            mtxRotate.postRotate(intOrientationDegree);
            Bitmap bmpRotatedImg = Bitmap.createBitmap(bmpLoadedImg, 0, 0, btfOptions.outWidth, btfOptions.outHeight, mtxRotate, true);

            String strSaveDir = UnityPlayer.currentActivity.getFilesDir().toString();
            String strSaveFileName = "tmp.jpg";

            try {
              File file = new File(strSaveDir, strSaveFileName);
              FileOutputStream outStream = new FileOutputStream(file);
              bmpRotatedImg.compress(Bitmap.CompressFormat.JPEG, 100, outStream);
              outStream.close();

            } catch (FileNotFoundException e) {
              e.printStackTrace();
            } catch (IOException e) {
              e.printStackTrace();
            }
            // 使い終わったbitmapはカラにしておく.
            bmpLoadedImg = null;
            bmpRotatedImg = null;

            // このアプリ内だけで使用するため、画像を保存してもMediaScannerConnectionは使用しない(他のアプリでも使用する場合は保存するディレクトリを変更すること).
            // 取得した画像のパスをUnity側に送信する.
            UnityPlayer.UnitySendMessage("CtrlSetTexture", "SetNewTexture", strSaveDir + "/" + strSaveFileName);
          }
        }
      );
    }
  }
  public static String getDcimPath()
  {
    File filDcimDir =
            Environment.getExternalStoragePublicDirectory(Environment.DIRECTORY_DCIM);
    // DCIMディレクトリのパスを返す.
    return (filDcimDir.getPath());
  }
  public static void showToast()
  {
    // 戻るボタン押下時にトーストを表示.
    UnityPlayer.currentActivity.runOnUiThread(new Runnable()
    {
      @Override
      public void run()
      {
        Toast.makeText(UnityPlayer.currentActivity, "もう一度押すとアプリを終了します", Toast.LENGTH_SHORT).show();
      }
    });
  }
  // --- Copied from UnityPlayerActivity.java ---
  // Setup activity layout
  @Override protected void onCreate (Bundle savedInstanceState)
  {
    requestWindowFeature(Window.FEATURE_NO_TITLE);
    super.onCreate(savedInstanceState);

    getWindow().setFormat(PixelFormat.RGBX_8888); // <--- This makes xperia play happy

    mUnityPlayer = new UnityPlayer(this);
    if (mUnityPlayer.getSettings ().getBoolean ("hide_status_bar", true))
    {
      setTheme(android.R.style.Theme_NoTitleBar_Fullscreen);
      getWindow ().setFlags (WindowManager.LayoutParams.FLAG_FULLSCREEN,
              WindowManager.LayoutParams.FLAG_FULLSCREEN);
    }

    setContentView(mUnityPlayer);
    mUnityPlayer.requestFocus();

    UnityPlayer.currentActivity.runOnUiThread(new Runnable() {
      public void run() {
        // アプリケーションのフォルダ内にFilesのディレクトリがなければ作成.
        File filAppFileDir = new File(UnityPlayer.currentActivity.getFilesDir().toString());
        if (!filAppFileDir.exists()) {
          filAppFileDir.mkdir();
        }
      }
    });
  }
  // Quit Unity
  @Override protected void onDestroy ()
  {
    mUnityPlayer.quit();
    super.onDestroy();
  }

  // Pause Unity
  @Override protected void onPause()
  {
    super.onPause();
    mUnityPlayer.pause();
  }

  // Resume Unity
  @Override protected void onResume()
  {
    super.onResume();
    mUnityPlayer.resume();
  }

  // This ensures the layout will be correct.
  @Override public void onConfigurationChanged(Configuration newConfig)
  {
    super.onConfigurationChanged(newConfig);
    mUnityPlayer.configurationChanged(newConfig);
  }

  // Notify Unity of the focus change.
  @Override public void onWindowFocusChanged(boolean hasFocus)
  {
    super.onWindowFocusChanged(hasFocus);
    mUnityPlayer.windowFocusChanged(hasFocus);
  }

  // For some reason the multiple keyevent type is not supported by the ndk.
  // Force event injection by overriding dispatchKeyEvent().
  @Override public boolean dispatchKeyEvent(KeyEvent event)
  {
    if (event.getAction() == KeyEvent.ACTION_MULTIPLE)
      return mUnityPlayer.injectEvent(event);
    return super.dispatchKeyEvent(event);
  }

  // Pass any events not handled by (unfocused) views straight to UnityPlayer
  @Override public boolean onKeyUp(int keyCode, KeyEvent event)     { return mUnityPlayer.injectEvent(event); }
  @Override public boolean onKeyDown(int keyCode, KeyEvent event)   { return mUnityPlayer.injectEvent(event); }
  @Override public boolean onTouchEvent(MotionEvent event)          { return mUnityPlayer.injectEvent(event); }
  /*API12*/ public boolean onGenericMotionEvent(MotionEvent event)  { return mUnityPlayer.injectEvent(event); }

  // ------
}
