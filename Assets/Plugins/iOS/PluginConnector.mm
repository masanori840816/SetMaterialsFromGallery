#import "PhotoSelector.h"

extern "C"{
  PhotoSelector *phsSelector;

  void init_()
  {
    phsSelector = [[PhotoSelector alloc] init];
    [phsSelector Initialize];
  }
  void openPhotoLibrary_()
  {
    [phsSelector OpenPhotoLibrary];
  }
}
