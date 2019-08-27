
#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>

extern CGFloat kStatusBarHeight;
extern CGFloat kNavigationBarHeight;
extern CGFloat kTabBarOffset;
extern CGFloat kTabBarHeight;
extern CGFloat kStatusBarOffset;
extern CGFloat kFinalTopHeight;
extern CGFloat kUIWidth;
extern CGFloat kUIHeight;
extern BOOL kIsIPhoneX;

NS_ASSUME_NONNULL_BEGIN

@interface BaseUISize : NSObject

+ (BOOL)judgeIsIPhoneX;

UIImage *RefactorImage(UIImage *image, CGSize size);

@end

NS_ASSUME_NONNULL_END
