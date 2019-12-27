//
//  AppDelegate.h
//  TabBar
//
//  Created by techfun on 2019/12/27.
//  Copyright © 2019 Naw Su Su Nyein. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;
@interface AppDelegate : UIResponder <UIApplicationDelegate>

// Property window
 @property (strong, nonatomic) UIWindow *window;

 // Property Viewcontroller

 @property (strong, nonatomic) RootViewController *viewController;
@end

