using UnityEngine;
using System.Collections;

public class CtrlPlugins : MonoBehaviour
{
	readonly string PLUGIN_CLASS_PATH = "jp.plugincontroller.PluginConnector";
	public string GetText()
	{
		string strGotText = "";
		// DCIMディレクトリのパスを取得.
		using(AndroidJavaClass clsPlugin = new AndroidJavaClass(PLUGIN_CLASS_PATH))
		{
			strGotText = clsPlugin.CallStatic<string>("GetNativeText");
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
}
