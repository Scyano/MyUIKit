//
//  UIApplication.m
//  MyUIKit
//
//  Created by dengxiang on 2017/3/6.
//  Copyright © 2017年 Jack. All rights reserved.
//

#import "UIApplication.h"
NSString *const UIApplicationWillChangeStatusBarOrientationNotification = @"UIApplicationWillChangeStatusBarOrientationNotification";
NSString *const UIApplicationDidChangeStatusBarOrientationNotification = @"UIApplicationDidChangeStatusBarOrientationNotification";
NSString *const UIApplicationWillEnterForegroundNotification = @"UIApplicationWillEnterForegroundNotification";
NSString *const UIApplicationWillTerminateNotification = @"UIApplicationWillTerminateNotification";
NSString *const UIApplicationWillResignActiveNotification = @"UIApplicationWillResignActiveNotification";
NSString *const UIApplicationDidEnterBackgroundNotification = @"UIApplicationDidEnterBackgroundNotification";
NSString *const UIApplicationDidBecomeActiveNotification = @"UIApplicationDidBecomeActiveNotification";
NSString *const UIApplicationDidFinishLaunchingNotification = @"UIApplicationDidFinishLaunchingNotification";

NSString *const UIApplicationNetworkActivityIndicatorChangedNotification = @"UIApplicationNetworkActivityIndicatorChangedNotification";

NSString *const UIApplicationLaunchOptionsURLKey = @"UIApplicationLaunchOptionsURLKey";
NSString *const UIApplicationLaunchOptionsSourceApplicationKey = @"UIApplicationLaunchOptionsSourceApplicationKey";
NSString *const UIApplicationLaunchOptionsRemoteNotificationKey = @"UIApplicationLaunchOptionsRemoteNotificationKey";
NSString *const UIApplicationLaunchOptionsAnnotationKey = @"UIApplicationLaunchOptionsAnnotationKey";
NSString *const UIApplicationLaunchOptionsLocalNotificationKey = @"UIApplicationLaunchOptionsLocalNotificationKey";
NSString *const UIApplicationLaunchOptionsLocationKey = @"UIApplicationLaunchOptionsLocationKey";

NSString *const UIApplicationDidReceiveMemoryWarningNotification = @"UIApplicationDidReceiveMemoryWarningNotification";

NSString *const UITrackingRunLoopMode = @"UITrackingRunLoopMode";
@implementation UIApplication

@end

void UIApplicationInterruptTouchesInView(UIView *view)
{
    // the intent here was that there needed to be a way to force-cancel touches to somewhat replicate situations that
    // might arise on OSX that you could kinda/sorta pretend were phonecall-like events where you'd want a touch or
    // gesture or something to cancel. these situations come up when things like popovers and modal menus are presented,
    //
    // If the need arises, my intent here is to send a notification or something on the *next* runloop to all UIKitViews
    // attached to screens to tell them to kill off their current touch sequence (if any). It seems important that this
    // happen on the *next* runloop cycle and not immediately because there were cases where the touch cancelling would
    // happen in response to something like a touch ended event, so we can't just blindly cancel a touch while it's in
    // the process of being evalulated since that could lead to very inconsistent behavior and really weird edge cases.
    // by deferring the cancel, it would then be able to take the right action if the touch phase was something *other*
    // than ended or cancelled by the time it attemped cancellation.
    
//    if (!view) {
//        for (UIScreen *screen in [UIScreen screens]) {
//            [screen.UIKitView performSelector:@selector(cancelTouchesInView:) withObject:nil afterDelay:0];
//        }
//    } else {
//        [view.window.screen.UIKitView performSelector:@selector(cancelTouchesInView:) withObject:view afterDelay:0];
//    }
}
