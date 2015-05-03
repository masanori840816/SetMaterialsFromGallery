using UnityEngine;
using System.Collections;
using System.IO;

public class SetTexture : MonoBehaviour
{
	Texture2D _txtImg;
	void Start ()
	{
		_txtImg = ReadTexture("/storage/emulated/0/DCIM/Camera/IMG_20150327_174416.jpg", 300, 300);
	}

	// Update is called once per frame
	void Update () {

	}
	byte[] ReadPngFile(string path){
    FileStream fileStream = new FileStream(path, FileMode.Open, FileAccess.Read);
    BinaryReader bin = new BinaryReader(fileStream);
    byte[] values = bin.ReadBytes((int)bin.BaseStream.Length);

    bin.Close();

    return values;
	}

	Texture2D ReadTexture(string path, int width, int height){
    byte[] readBinary = ReadPngFile(path);

    Texture2D texture = new Texture2D(width, height);
    texture.LoadImage(readBinary);

    return texture;
	}
	void OnGUI()
	{
		GUI.DrawTexture(new Rect(20f, 20f, 300f, 300f), _txtImg);
	}
}
