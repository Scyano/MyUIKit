//
//  UIView.h
//  MyUIKit
//
//  Created by 邓翔 on 17/3/5.
//  Copyright © 2017年 Jack. All rights reserved.
//

#import "UIResponder.h"
#import "UIAppearance.h"

typedef NS_OPTIONS(NSUInteger, UIViewAutoresizing) {
    UIViewAutoresizingNone                 = 0,
    UIViewAutoresizingFlexibleLeftMargin   = 1 << 0,
    UIViewAutoresizingFlexibleWidth        = 1 << 1,
    UIViewAutoresizingFlexibleRightMargin  = 1 << 2,
    UIViewAutoresizingFlexibleTopMargin    = 1 << 3,
    UIViewAutoresizingFlexibleHeight       = 1 << 4,
    UIViewAutoresizingFlexibleBottomMargin = 1 << 5
};

typedef NS_ENUM(NSInteger, UIViewContentMode) {
    UIViewContentModeScaleToFill,
    UIViewContentModeScaleAspectFit,
    UIViewContentModeScaleAspectFill,
    UIViewContentModeRedraw,
    UIViewContentModeCenter,
    UIViewContentModeTop,
    UIViewContentModeBottom,
    UIViewContentModeLeft,
    UIViewContentModeRight,
    UIViewContentModeTopLeft,
    UIViewContentModeTopRight,
    UIViewContentModeBottomLeft,
    UIViewContentModeBottomRight,
};

typedef NS_ENUM(NSInteger, UIViewAnimationCurve) {
    UIViewAnimationCurveEaseInOut,
    UIViewAnimationCurveEaseIn,
    UIViewAnimationCurveEaseOut,
    UIViewAnimationCurveLinear
};

typedef NS_ENUM(NSInteger, UIViewAnimationTransition) {
    UIViewAnimationTransitionNone,
    UIViewAnimationTransitionFlipFromLeft,
    UIViewAnimationTransitionFlipFromRight,
    UIViewAnimationTransitionCurlUp,
    UIViewAnimationTransitionCurlDown,
};

typedef NS_OPTIONS(NSUInteger, UIViewAnimationOptions) {
    UIViewAnimationOptionLayoutSubviews            = 1 <<  0,		// not currently supported
    UIViewAnimationOptionAllowUserInteraction      = 1 <<  1,
    UIViewAnimationOptionBeginFromCurrentState     = 1 <<  2,
    UIViewAnimationOptionRepeat                    = 1 <<  3,
    UIViewAnimationOptionAutoreverse               = 1 <<  4,
    UIViewAnimationOptionOverrideInheritedDuration = 1 <<  5,		// not currently supported
    UIViewAnimationOptionOverrideInheritedCurve    = 1 <<  6,		// not currently supported
    UIViewAnimationOptionAllowAnimatedContent      = 1 <<  7,		// not currently supported
    UIViewAnimationOptionShowHideTransitionViews   = 1 <<  8,
    
    UIViewAnimationOptionCurveEaseInOut            = 0 << 16,
    UIViewAnimationOptionCurveEaseIn               = 1 << 16,
    UIViewAnimationOptionCurveEaseOut              = 2 << 16,
    UIViewAnimationOptionCurveLinear               = 3 << 16,
    
    UIViewAnimationOptionTransitionNone            = 0 << 20,
    UIViewAnimationOptionTransitionFlipFromLeft    = 1 << 20,
    UIViewAnimationOptionTransitionFlipFromRight   = 2 << 20,
    UIViewAnimationOptionTransitionCurlUp          = 3 << 20,
    UIViewAnimationOptionTransitionCurlDown        = 4 << 20,
    UIViewAnimationOptionTransitionCrossDissolve   = 5 << 20,
    UIViewAnimationOptionTransitionFlipFromTop     = 6 << 20,
    UIViewAnimationOptionTransitionFlipFromBottom  = 7 << 20,
};

@class UIColor, CALayer, UIViewController, UIGestureRecognizer;

@interface UIView : UIResponder <UIAppearanceContainer, UIAppearance>
+ (Class)layerClass;

- (id)initWithFrame:(CGRect)frame;
- (void)addSubview:(UIView *)subview;
- (void)insertSubview:(UIView *)subview atIndex:(NSInteger)index;
- (void)insertSubview:(UIView *)subview belowSubview:(UIView *)below;
- (void)insertSubview:(UIView *)subview aboveSubview:(UIView *)above;
- (void)removeFromSuperview;
- (void)bringSubviewToFront:(UIView *)subview;
- (void)sendSubviewToBack:(UIView *)subview;
- (CGRect)convertRect:(CGRect)toConvert fromView:(UIView *)fromView;
- (CGRect)convertRect:(CGRect)toConvert toView:(UIView *)toView;
- (CGPoint)convertPoint:(CGPoint)toConvert fromView:(UIView *)fromView;
- (CGPoint)convertPoint:(CGPoint)toConvert toView:(UIView *)toView;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(CGRect)invalidRect;
- (void)drawRect:(CGRect)rect;
- (void)sizeToFit;
- (CGSize)sizeThatFits:(CGSize)size;
- (void)setNeedsLayout;
- (void)layoutIfNeeded;
- (void)layoutSubviews;
- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent *)event;
- (UIView *)hitTest:(CGPoint)point withEvent:(UIEvent *)event;
- (UIView *)viewWithTag:(NSInteger)tag;
- (BOOL)isDescendantOfView:(UIView *)view;

- (void)addGestureRecognizer:(UIGestureRecognizer *)gestureRecognizer;		// not implemented
- (void)removeGestureRecognizer:(UIGestureRecognizer *)gestureRecognizer;	// not implemented

- (void)didAddSubview:(UIView *)subview;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)willMoveToSuperview:(UIView *)newSuperview;
- (void)willMoveToWindow:(UIWindow *)newWindow;
- (void)willRemoveSubview:(UIView *)subview;

+ (void)animateWithDuration:(NSTimeInterval)duration delay:(NSTimeInterval)delay options:(UIViewAnimationOptions)options animations:(void (^)(void))animations completion:(void (^)(BOOL finished))completion;
+ (void)animateWithDuration:(NSTimeInterval)duration animations:(void (^)(void))animations completion:(void (^)(BOOL finished))completion;
+ (void)animateWithDuration:(NSTimeInterval)duration animations:(void (^)(void))animations;

+ (void)transitionWithView:(UIView *)view duration:(NSTimeInterval)duration options:(UIViewAnimationOptions)options animations:(void (^)(void))animations completion:(void (^)(BOOL finished))completion;
+ (void)transitionFromView:(UIView *)fromView toView:(UIView *)toView duration:(NSTimeInterval)duration options:(UIViewAnimationOptions)options completion:(void (^)(BOOL finished))completion;

+ (void)beginAnimations:(NSString *)animationID context:(void *)context;
+ (void)commitAnimations;
+ (void)setAnimationBeginsFromCurrentState:(BOOL)beginFromCurrentState;
+ (void)setAnimationCurve:(UIViewAnimationCurve)curve;
+ (void)setAnimationDelay:(NSTimeInterval)delay;
+ (void)setAnimationDelegate:(id)delegate;
+ (void)setAnimationDidStopSelector:(SEL)selector;
+ (void)setAnimationDuration:(NSTimeInterval)duration;
+ (void)setAnimationRepeatAutoreverses:(BOOL)repeatAutoreverses;
+ (void)setAnimationRepeatCount:(float)repeatCount;
+ (void)setAnimationTransition:(UIViewAnimationTransition)transition forView:(UIView *)view cache:(BOOL)cache;
+ (void)setAnimationWillStartSelector:(SEL)selector;
+ (BOOL)areAnimationsEnabled;
+ (void)setAnimationsEnabled:(BOOL)enabled;

@property (nonatomic) CGRect frame;
@property (nonatomic) CGRect bounds;
@property (nonatomic) CGPoint center;
@property (nonatomic) CGAffineTransform transform;
@property (nonatomic, readonly) UIView *superview;
@property (nonatomic, readonly) UIWindow *window;
@property (nonatomic, readonly) NSArray *subviews; // 这里加了readonly
@property (nonatomic) CGFloat alpha;
@property (nonatomic, getter=isOpaque) BOOL opaque;
@property (nonatomic) BOOL clearsContextBeforeDrawing;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic) BOOL clipsToBounds;
@property (nonatomic) BOOL autoresizesSubviews;
@property (nonatomic) UIViewAutoresizing autoresizingMask;
@property (nonatomic) CGRect contentStretch;
@property (nonatomic) NSInteger tag;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (nonatomic) UIViewContentMode contentMode;
@property (nonatomic) CGFloat contentScaleFactor;
@property (nonatomic, getter=isMultipleTouchEnabled) BOOL multipleTouchEnabled;	// state is maintained, but it has no effect
@property (nonatomic, getter=isExclusiveTouch) BOOL exclusiveTouch; // state is maintained, but it has no effect
@property (nonatomic, copy) NSArray *gestureRecognizers; // 这里没加readonly
@end
