
#import <UIKit/UIKit.h>

@protocol BaseTabBarViewControllerDelegate <NSObject>

- (BOOL)baseTabBarController:(UITabBarController *)tabBarController shouldSelectViewController:(UIViewController *)viewController;

@end

@interface BaseTabBarViewController : UITabBarController<UITabBarControllerDelegate>

@property (nonatomic, weak) id<BaseTabBarViewControllerDelegate>baseDelegate;

@end
