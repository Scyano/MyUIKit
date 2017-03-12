//  完全实现ok
//  UIAction.h
//  MyUIKit
//
//  Created by 邓翔 on 17/3/8.
//  Copyright © 2017年 Jack. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIAction : NSObject
@property (nonatomic, weak) id target;
@property (nonatomic, assign) SEL action;
@end
