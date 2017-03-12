//  完全实现ok
//  UIFont.h
//  MyUIKit
//
//  Created by dengxiang on 2017/3/6.
//  Copyright © 2017年 Jack. All rights reserved.
//

#import "UIFont.h"

@class NSFont;

@interface UIFont (UIPrivate)
+ (UIFont *)fontWithNSFont:(NSFont *)aFont;
- (NSFont *)NSFont;
@end
