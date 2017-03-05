//  完全实现
//  UIAppearance.h
//  MyUIKit
//
//  Created by 邓翔 on 17/3/5.
//  Copyright © 2017年 Jack. All rights reserved.
//

#import <Foundation/Foundation.h>

#define UI_APPEARANCE_SELECTOR

@protocol UIAppearanceContainer <NSObject>
@end

@protocol UIAppearance <NSObject>
+ (id)appearance;
+ (id)appearanceWhenContainedIn:(Class <UIAppearanceContainer>)ContainerClass, ... NS_REQUIRES_NIL_TERMINATION;
@end