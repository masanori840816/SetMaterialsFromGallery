using UnityEngine;
using System.Collections;

public class CtrlPlugins : MonoBehaviour
{
	readonly string PLUGIN_CLASS_PATH = "jp.plugincontroller.PluginConnector";
	static AndroidJavaClass _clsPlugin;
	bool _isStarted = false;

	void Start()
	{

		_clsPlugin = new AndroidJavaClass(PLUGIN_CLASS_PATH);
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
		/*using(AndroidJavaClass clsPlugin = new AndroidJavaClass(PLUGIN_CLASS_PATH))
		{
			clsPlugin.CallStatic("OpenGridView");
		}*/
		_clsPlugin.CallStatic("OpenGridView");
		_isStarted = true;
	}
	void Update()
	{
		/*if(_isStarted)
		{
			Debug.Log("Path " + _clsPlugin.CallStatic<string>("_strSelectedPath"));
		}*/
	}
}
