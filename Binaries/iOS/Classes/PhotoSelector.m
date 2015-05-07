//
//  PhotoSelector.m
//  Unity-iPhone
//
//  Created by Masanori on 2015/05/05.
//
//

#import <Foundation/Foundation.h>
#import "PhotoSelector.h"

@interface PhotoSelector()<UINavigationControllerDelegate, UIImagePickerControllerDelegate>
@property (strong, nonatomic)UIViewController *vwcUnityView;
@property (strong, nonatomic)NSMutableString *mstSelectedImage;
@end
@implementation PhotoSelector

- (void)Initialize
{
    _vwcUnityView = UnityGetGLViewController();
}
- (void)OpenPhotoLibrary
{
    UIImagePickerController *imgPic = [[UIImagePickerController alloc]init];
    imgPic.delegate = self;
    // フォトライブラリから画像を取得する.
    [imgPic setSourceType:UIImagePickerControllerSourceTypePhotoLibrary];
    [_vwcUnityView presentViewController: imgPic animated:YES completion:nil];
}

- (void)imagePickerController:(UIImagePickerController *)picker didFinishPickingMediaWithInfo:(NSDictionary *)info
{
    // カメラロールから選んだ写真のURLを取得.
    UIImage *myUIImage = [info objectForKey:UIImagePickerControllerOriginalImage];
    NSData *imageData = UIImagePNGRepresentation(myUIImage);
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES);
    NSString *documentsDirectory = [paths objectAtIndex:0];
    // 適当なファイル名をつける.
    NSString *filePath = [documentsDirectory stringByAppendingPathComponent:@"tmp.jpg"];
    [imageData writeToFile:filePath atomically:YES];
    
    _mstSelectedImage = (NSMutableString *)filePath;
    // 取得したパスをUnity側に送信する.
    UnitySendMessage("CtrlSetTexture", "OnCallbackIos", MakeStringCopy([_mstSelectedImage UTF8String]));
    // カメラロールを閉じる.
    [picker dismissViewControllerAnimated:YES completion:nil];
}
char* MakeStringCopy (const char* string)
{
    if (string == NULL)
        return NULL;
    
    char* res = (char*)malloc(strlen(string) + 1);
    strcpy(res, string);
    return res;
}
@end