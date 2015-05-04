using UnityEngine;
using System.Collections;
using System.IO;

public class CtrlSetTexture : MonoBehaviour
{
	public Material _mtrCube;

	public void SetNewTexture(string strPath)
	{
		// 取得したパスから画像を読み込んでマテリアルとして設定する.
		_mtrCube.mainTexture = ReadTexture(strPath, 1920, 1080);
	}
	byte[] ReadImageFile(string strPath){
    FileStream flsStream = new FileStream(strPath, FileMode.Open, FileAccess.Read);
    BinaryReader bnrReader = new BinaryReader(flsStream);
    byte[] bytReadBytes = bnrReader.ReadBytes((int)bnrReader.BaseStream.Length);

		bnrReader.Close();

    return bytReadBytes;
	}
	Texture2D ReadTexture(string strPath, int intWidth, int intHeight){
    byte[] bytReadBinary = ReadImageFile(strPath);

    Texture2D txtNewImage = new Texture2D(intWidth, intHeight);
		txtNewImage.LoadImage(bytReadBinary);

    return txtNewImage;
	}
}
