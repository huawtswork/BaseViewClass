
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#if __has_include(<BaseViewClass/BaseViewClass.h>)

FOUNDATION_EXPORT double BaseViewClassVersionNumber;
FOUNDATION_EXPORT const unsigned char BaseViewClassVersionString[];

#import <BaseViewClass/BaseUISize.h>
#import <BaseViewClass/BaseNavigationBar.h>
#import <BaseViewClass/BaseNavigationController.h>
#import <BaseViewClass/BaseViewController.h>
#import <BaseViewClass/BaseTabBarViewController.h>
#import <BaseViewClass/ControllerPopByInteractivePopGestureRecognizer.h>

#else

#import "BaseUISize.h"
#import "BaseNavigationBar.h"
#import "BaseNavigationController.h"
#import "BaseTabBarViewController.h"
#import "BaseViewController.h"
#import "ControllerPopByInteractivePopGestureRecognizer.h"

#endif
