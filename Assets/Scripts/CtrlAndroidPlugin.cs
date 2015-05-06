using UnityEngine;
using System.Collections;

public class CtrlAndroidPlugin : MonoBehaviour
{
	readonly string PLUGIN_CLASS_PATH = "jp.setmaterialsfromgallery.PluginConnector";

	public GameObject _gmoSetTexture;
	CtrlSetTexture _ctrSetTexture;

	void Start()
	{
		_ctrSetTexture = _gmoSetTexture.GetComponent<CtrlSetTexture>();
	}

	public string GetText()
	{
		string strGotText = "";

#if UNITY_ANDROID
		// DCIMディレクトリのパスを取得.
		using(AndroidJavaClass clsPlugin = new AndroidJavaClass(PLUGIN_CLASS_PATH))
		{
			strGotText = clsPlugin.CallStatic<string>("GetDcimPath");
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
			clsPlugin.CallStatic("ShowToast");
		}

#endif

	}
	public void ShowImageView()
	{
#if UNITY_ANDROID
		// 画像Viewを表示する.
		using(AndroidJavaClass clsPlugin = new AndroidJavaClass(PLUGIN_CLASS_PATH))
		{
			clsPlugin.CallStatic("OpenImageView");
		}

#endif
	}
	public void ShowFileNotFoundAlert()
	{
#if UNITY_ANDROID
		// アラートを表示する.
		using(AndroidJavaClass clsPlugin = new AndroidJavaClass(PLUGIN_CLASS_PATH))
		{
			clsPlugin.CallStatic("ShowFileNotFoundAlert");
		}

#endif
	}
	public void OnCallbackAndroid(string strGotData)
	{
		// 画像が選択されたら、取得したパスを元に画像をロードする.
		_ctrSetTexture.SetNewTexture(strGotData, 1920, 1080);
	}
}
