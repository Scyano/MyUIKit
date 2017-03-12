//
//  UIBarItem.m
//  MyUIKit
//
//  Created by 邓翔 on 17/3/5.
//  Copyright © 2017年 Jack. All rights reserved.
//

#import "UIBarItem.h"

@implementation UIBarItem

- (id)init
{
    if ((self = [super init])) {
        self.enabled = YES;
        self.imageInsets = UIEdgeInsetsZero;
    }
    return self;
}


- (void)setTitleTextAttributes:(NSDictionary *)attributes forState:(UIControlState)state
{
    
}

- (NSDictionary *)titleTextAttributesForState:(UIControlState)state
{
    return nil;
}

@end
