//   完全实现
//  UIControlAction.h
//  MyUIKit
//
//  Created by 邓翔 on 17/3/8.
//  Copyright © 2017年 Jack. All rights reserved.
//

#import "UIAction.h"
#import "UIControl.h"

@interface UIControlAction : UIAction
@property (nonatomic, assign) UIControlEvents controlEvents;
@end