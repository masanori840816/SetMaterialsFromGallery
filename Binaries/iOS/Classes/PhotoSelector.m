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
@property (nonatomic) BOOL                      isLandscapeMode;
@end
@implementation PhotoSelector

const static CGFloat kFltImgMaxSize = 2048;
- (void)Initialize
{
    _vwcUnityView = UnityGetGLViewController();
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(RotationChanged:)
                                                 name:@"UIDeviceOrientationDidChangeNotification"
                                               object:nil];
    [self CheckIsLandscapeMode];
}
- (void) RotationChanged: (id)sender
{
    [self CheckIsLandscapeMode];
}
- (void) CheckIsLandscapeMode
{
    // Landscape or Portraitでなければ無視.
    if(UIDeviceOrientationIsLandscape([[UIDevice currentDevice] orientation]))
    {
        NSLog(@"Landscape");
        _isLandscapeMode = YES;
    }
    else if(UIDeviceOrientationIsPortrait([[UIDevice currentDevice] orientation]))
    {
        NSLog(@"Portrait");
        _isLandscapeMode = NO;
    }
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
    UIImage *imgResized;
    BOOL isResized = NO;
    NSData *imageData;
    
    // TODO: 画像から回転情報を取得して、デバイスの向きに対して傾いていれば修正.
    NSLog(@"%long", myUIImage.imageOrientation);
    
    CGFloat fltImageWidth = myUIImage.size.width;
    CGFloat fltImageHeight = myUIImage.size.height;
    
    // 画像の長辺が2048より大きければ縮小.
    if(_isLandscapeMode)
    {
        if(fltImageWidth > kFltImgMaxSize)
        {
            CGFloat fltScale = kFltImgMaxSize / fltImageWidth;
            
            UIGraphicsBeginImageContext(CGSizeMake(kFltImgMaxSize, fltImageHeight * fltScale));
            [myUIImage drawInRect:CGRectMake(0, 0, kFltImgMaxSize, fltImageHeight * fltScale)];
            imgResized = UIGraphicsGetImageFromCurrentImageContext();
            UIGraphicsEndImageContext();
            
            isResized = YES;
        }
    }
    else
    {
        if(fltImageHeight > kFltImgMaxSize)
        {
            CGFloat fltScale = kFltImgMaxSize / fltImageHeight;
            
            UIGraphicsBeginImageContext(CGSizeMake(fltImageWidth * fltScale, kFltImgMaxSize));
            [myUIImage drawInRect:CGRectMake(0, 0, fltImageWidth * fltScale, kFltImgMaxSize)];
            imgResized = UIGraphicsGetImageFromCurrentImageContext();
            UIGraphicsEndImageContext();
            
            isResized = YES;
        }
    }
    if(isResized)
    {
        imageData = UIImagePNGRepresentation(imgResized);
        myUIImage = nil;
    }
    else
    {
        imageData = UIImagePNGRepresentation(myUIImage);
    }
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