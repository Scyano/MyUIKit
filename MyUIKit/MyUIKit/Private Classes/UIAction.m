//
//  UIAction.m
//  MyUIKit
//
//  Created by 邓翔 on 17/3/8.
//  Copyright © 2017年 Jack. All rights reserved.
//

#import "UIAction.h"

@implementation UIAction
// 实现了比较方法
- (BOOL)isEqual:(id)object
{
    if (object == self) {
        return YES;
    } else if ([object isKindOfClass:[[self class] class]]) {
        return ([object target] == self.target && [object action] == self.action);
    } else {
        return NO;
    }
}
@end
