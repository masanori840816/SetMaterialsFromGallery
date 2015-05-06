using UnityEngine;
using System.Runtime.InteropServices;

public class CtrlIosPlugin : MonoBehaviour
{
	[DllImport("__Internal")]
	private static extern void init_();
	[DllImport("__Internal")]
	private static extern void openPhotoLibrary_();
	public static void Init()
	{
		// プラグイン初期化.
		init_();
	}
	public static void OpenPhotoLibrary()
	{
		// 画像ライブラリを開く.
		openPhotoLibrary_();
	}
}
