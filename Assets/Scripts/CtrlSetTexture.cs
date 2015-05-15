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
	public void SetNewTexture(string strPath)
	{
		if (File.Exists(strPath))
		{
			// リソースをアンロードする.
			Resources.UnloadUnusedAssets();
			// 取得したパスから画像を読み込んでマテリアルとして設定する.
			_mtrCube.mainTexture = ReadTexture(strPath);
		}
		else
		{
			// 取得したパスにアクセス出来ない場合はアラート表示.
			_ctrMain.ShowFileNotFoundAlert();
		}
	}
	Texture2D ReadTexture(string strPath)
	{
    byte[] bytReadBinary = File.ReadAllBytes(strPath);

    Texture2D txtNewImage = new Texture2D(0, 0);
		txtNewImage.LoadImage(bytReadBinary);
		bytReadBinary = null;
    return txtNewImage;
	}
	public void OnCallbackIos(string strGotData)
	{
		// called from iOS plugin.
		this.SetNewTexture(strGotData);
	}
}
