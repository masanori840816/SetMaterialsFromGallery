using UnityEngine;
using System.Collections;

public class CtrlPlugins : MonoBehaviour
{
	readonly string PLUGIN_CLASS_PATH = "jp.plugincontroller.PluginConnector";

	public GameObject _gmoSetTexture;
	CtrlSetTexture _ctrSetTexture;

	void Start()
	{
		_ctrSetTexture = _gmoSetTexture.GetComponent<CtrlSetTexture>();
	}

	public string GetText()
	{
		string strGotText = "";
		// DCIMディレクトリのパスを取得.
		using(AndroidJavaClass clsPlugin = new AndroidJavaClass(PLUGIN_CLASS_PATH))
		{
			strGotText = clsPlugin.CallStatic<string>("GetDcimPath");
		}
		return strGotText;
	}
	public void ShowToast()
	{
		// トーストを表示する.
		using(AndroidJavaClass clsPlugin = new AndroidJavaClass(PLUGIN_CLASS_PATH))
		{
			clsPlugin.CallStatic("ShowToast");
		}
	}
	public void ShowImageView()
	{
		// 画像Viewを表示する.
		using(AndroidJavaClass clsPlugin = new AndroidJavaClass(PLUGIN_CLASS_PATH))
		{
			clsPlugin.CallStatic("OpenImageView");
		}
	}
	public void OnCallback(string strGotData)
	{
		Debug.Log("OnCallback");

		// 画像が選択されたら、取得したパスを元に画像をロードする.
		_ctrSetTexture.SetNewTexture(strGotData);
	}
}
