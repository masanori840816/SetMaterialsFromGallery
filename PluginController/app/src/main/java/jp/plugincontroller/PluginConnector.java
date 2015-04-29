package jp.plugincontroller;

import java.io.File;
import android.os.Environment;

import android.app.Activity;
import android.widget.Toast;

import com.unity3d.player.UnityPlayer;

public class PluginConnector {
    public static String GetNativeText()
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
        final Activity activity = UnityPlayer.currentActivity;
        activity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                Toast.makeText(activity, "もう一度押すとアプリを終了します", Toast.LENGTH_SHORT).show();
            }
        });
    }
}
