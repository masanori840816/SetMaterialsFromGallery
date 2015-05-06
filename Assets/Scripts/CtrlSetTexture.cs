using UnityEngine;
using System.Collections;
using System.IO;

public class CtrlSetTexture : MonoBehaviour
{
	public Material _mtrCube;

	public void SetNewTexture(string strPath)
	{
		if (File.Exists(strPath))
		{
			// 取得したパスから画像を読み込んでマテリアルとして設定する.
			_mtrCube.mainTexture = ReadTexture(strPath, 1920, 1080);
		}
	}
	Texture2D ReadTexture(string strPath, int intWidth, int intHeight)
	{
    byte[] bytReadBinary = File.ReadAllBytes(strPath);

    Texture2D txtNewImage = new Texture2D(intWidth, intHeight);
		txtNewImage.LoadImage(bytReadBinary);

    return txtNewImage;
	}
}
