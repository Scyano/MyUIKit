//  完全实现   UIScroller其实是实现UIScrollView的真正类
//  UIScroller.h
//  MyUIKit
//
//  Created by 邓翔 on 17/3/8.
//  Copyright © 2017年 Jack. All rights reserved.
//

#import "UIView.h"
#import "UIScrollView.h"

@class UIScroller;

@protocol _UIScrollerDelegate
- (void)_UIScrollerDidBeginDragging:(UIScroller *)scroller withEvent:(UIEvent *)event;
- (void)_UIScroller:(UIScroller *)scroller contentOffsetDidChange:(CGFloat)newOffset;
- (void)_UIScrollerDidEndDragging:(UIScroller *)scroller withEvent:(UIEvent *)event;
@end

@interface UIScroller : UIView

- (void)flash;
- (void)quickFlash;

@property (nonatomic, assign) BOOL alwaysVisible;
@property (nonatomic, assign) id<_UIScrollerDelegate> delegate;
@property (nonatomic, assign) CGFloat contentSize;
@property (nonatomic, assign) CGFloat contentOffset;
@property (nonatomic) UIScrollViewIndicatorStyle indicatorStyle;

@end
