//  UIScrollViewAnimation UIScrollView所有动画类的父类
//  UIScrollViewAnimation.h
//  MyUIKit
//
//  Created by dengxiang on 2017/3/10.
//  Copyright © 2017年 Jack. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIScrollView+UIPrivate.h"

@interface UIScrollViewAnimation : NSObject
- (id)initWithScrollView:(UIScrollView *)sv;
- (BOOL)animate;
- (void)momentumScrollBy:(CGPoint)delta;

@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, assign) NSTimeInterval beginTime;
@end

extern CGFloat UILinearInterpolation(CGFloat t, CGFloat start, CGFloat end);
extern CGFloat UIQuadraticEaseOut(CGFloat t, CGFloat start, CGFloat end);

