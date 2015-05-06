package jp.plugincontroller;

import android.content.res.Configuration;
import android.graphics.PixelFormat;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.Window;
import android.view.WindowManager;

import java.io.File;

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

public class PluginConnector extends Activity{
    private static final int SDKVER_KITKAT = 19;
    private static final int REQUEST_GALLERY_KITKAT_ABOVE = 0;
    private static final int REQUEST_GALLERY_JELLYBEAN_BELOW = 1;

    protected UnityPlayer mUnityPlayer; // don't change the name of this variable; referenced from native code

    public static void OpenImageView() {
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
    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        if(resultCode != RESULT_OK)
        {
            return;
        }
        switch (requestCode)
        {
            case REQUEST_GALLERY_JELLYBEAN_BELOW:
                // 選択した画像のパスを取得する.
                String[] strColumns = {MediaStore.Images.Media.DATA };
                Cursor crsCursor = getContentResolver().query(data.getData(), strColumns, null, null, null);
                if(crsCursor.moveToFirst())
                {
                    Log.d("PluginConnector", crsCursor.getString(0));
                    this.sendImagePath(crsCursor.getString(0));
                }
                crsCursor.close();
                break;

            case REQUEST_GALLERY_KITKAT_ABOVE:
                this.GetSelectedItemPath(data);
                break;
        }
    }
    @TargetApi(SDKVER_KITKAT)
    private void GetSelectedItemPath(Intent data)
    {
        // 選択した画像のパスを取得する.
        String strDocId = DocumentsContract.getDocumentId(data.getData());
        String[] strSplittedDocId = strDocId.split(":");
        String strId = strSplittedDocId[strSplittedDocId.length - 1];

        Cursor crsCursor = getContentResolver().query(
                MediaStore.Images.Media.EXTERNAL_CONTENT_URI
                , new String[]{MediaStore.MediaColumns.DATA}
                , "_id=?"
                , new String[]{strId}
                , null);

        if (crsCursor.moveToFirst()) {
            Log.d("PluginConnector", crsCursor.getString(0));
            this.sendImagePath(crsCursor.getString(0));
        }
        crsCursor.close();
    }
    private void sendImagePath(String strSendPath)
    {
        // 取得した画像のパスをUnity側に送信する.
        UnityPlayer.UnitySendMessage("CtrlAndroidPlugin", "OnCallbackAndroid", strSendPath);
    }
    public static String GetDcimPath()
    {
        File filDcimDir =
                Environment.getExternalStoragePublicDirectory(
                        Environment.DIRECTORY_DCIM);
        // DCIMディレクトリのパスを返す.
        return (filDcimDir.getPath());
    }
    public static void ShowToast()
    {
        // 戻るボタン押下時にトーストを表示.
        UnityPlayer.currentActivity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
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
