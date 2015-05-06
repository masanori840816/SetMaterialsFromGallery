using UnityEngine;
using System.Collections;
using System.IO;

public class CtrlSetTexture : MonoBehaviour
{
	public Material _mtrCube;

	public void SetNewTexture(string strPath, int intWidth, int intHeight)
	{
		if (File.Exists(strPath))
		{
			// 取得したパスから画像を読み込んでマテリアルとして設定する.
			_mtrCube.mainTexture = ReadTexture(strPath, intWidth, intHeight);
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
		Debug.Log("OnCallbackiOS " + strGotData);

		this.SetNewTexture(strGotData, 2048, 1536);
	}
}
