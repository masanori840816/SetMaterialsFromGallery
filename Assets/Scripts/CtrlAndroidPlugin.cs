using UnityEngine;
using System.Collections;

public class CtrlAndroidPlugin : MonoBehaviour
{
	readonly string PLUGIN_CLASS_PATH = "jp.setmaterialsfromgallery.PluginConnector";

	public string GetText()
	{
		string strGotText = "";

#if UNITY_ANDROID
		// DCIMディレクトリのパスを取得.
		using(AndroidJavaClass clsPlugin = new AndroidJavaClass(PLUGIN_CLASS_PATH))
		{
			strGotText = clsPlugin.CallStatic<string>("getDcimPath");
		}

#endif

		return strGotText;
	}
	public void ShowToast()
	{
#if UNITY_ANDROID
		// トーストを表示する.
		using(AndroidJavaClass clsPlugin = new AndroidJavaClass(PLUGIN_CLASS_PATH))
		{
			clsPlugin.CallStatic("showToast");
		}

#endif

	}
	public void ShowImageView()
	{
#if UNITY_ANDROID
		// 画像Viewを表示する.
		using(AndroidJavaClass clsPlugin = new AndroidJavaClass(PLUGIN_CLASS_PATH))
		{
			clsPlugin.CallStatic("openImageView");
		}

#endif
	}
	public void ShowFileNotFoundAlert()
	{
#if UNITY_ANDROID
		// アラートを表示する.
		using(AndroidJavaClass clsPlugin = new AndroidJavaClass(PLUGIN_CLASS_PATH))
		{
			clsPlugin.CallStatic("showFileNotFoundAlert");
		}

#endif
	}
}
