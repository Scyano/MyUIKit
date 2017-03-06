// 完全实现
#import "UITouch.h"

@class UIGestureRecognizer;

@interface UITouch (UIPrivate)
@property (nonatomic, readwrite, assign) NSTimeInterval timestamp;      // defaults to now
@property (nonatomic, readwrite, assign) NSUInteger tapCount;           // defaults to 0
@property (nonatomic, readwrite, assign) UITouchPhase phase;            // defaults to UITouchPhaseBegan, if changed to UITouchPhaseStationary, also sets previous location to current value of locationInWindow
@property (nonatomic, readwrite, assign) UIView *view;                  // defaults to nil
@property (nonatomic, readwrite, assign) CGPoint locationOnScreen;      // if phase is UITouchPhaseBegan or UITouchPhaseStationary, also sets internal previous location to same value

@property (nonatomic, readwrite, assign) BOOL wasDeliveredToView;       // defaults to NO, used to keep things on the up and up with gesture recognizers that can delay and cancel touches (pure evil)
@property (nonatomic, readwrite, assign) BOOL wasCancelledInView;       // defaults to NO, used to keep things on the up and up with gesture recognizers that can delay and cancel touches (pure evil)
@property (nonatomic, readonly) NSTimeInterval beganPhaseTimestamp;     // when phase is UITouchPhaseBegan, changes to timestamp property also copied here
@property (nonatomic, readonly) CGPoint beganPhaseLocationOnScreen;     // when phase is UITouchPhaseBegan, changes to locationOnScreen property also copied here

- (void)_addGestureRecognizer:(UIGestureRecognizer *)recognizer;
- (void)_removeGestureRecognizer:(UIGestureRecognizer *)recognizer;
@end
