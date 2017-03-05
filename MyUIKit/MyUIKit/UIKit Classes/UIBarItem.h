//
//  UIBarItem.h
//  MyUIKit
//
//  Created by 邓翔 on 17/3/5.
//  Copyright © 2017年 Jack. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIControl.h"
#import "UIAppearance.h"
#import "UIGeometry.h"

@class UIImage;

@interface UIBarItem : NSObject <UIAppearance>
- (void)setTitleTextAttributes:(NSDictionary *)attributes forState:(UIControlState)state;
- (NSDictionary *)titleTextAttributesForState:(UIControlState)state;

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, assign) UIEdgeInsets imageInsets;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) NSInteger tag;
@end
