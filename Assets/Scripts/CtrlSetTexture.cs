using UnityEngine;
using System.Collections;
using System.IO;

public class CtrlSetTexture : MonoBehaviour
{
	public GameObject _gmoMain;
	CtrlMain _ctrMain;

	public Material _mtrCube;

	void Start()
	{
		_ctrMain = _gmoMain.GetComponent<CtrlMain>();
	}
	public void SetNewTexture(string strPath, int intWidth, int intHeight)
	{
		if (File.Exists(strPath))
		{
			// 取得したパスから画像を読み込んでマテリアルとして設定する.
			_mtrCube.mainTexture = ReadTexture(strPath, intWidth, intHeight);
		}
		else
		{
			// 取得したパスにアクセス出来ない場合はアラート表示.
			_ctrMain.ShowFileNotFoundAlert();
		}
	}
	Texture2D ReadTexture(string strPath, int intWidth, int intHeight)
	{
    byte[] bytReadBinary = File.ReadAllBytes(strPath);

    Texture2D txtNewImage = new Texture2D(intWidth, intHeight);
		txtNewImage.LoadImage(bytReadBinary);

    return txtNewImage;
	}
	public void OnCallbackIos(string strGotData)
	{
		// called from iOS plugin.
		this.SetNewTexture(strGotData, 2048, 1536);
	}
}
