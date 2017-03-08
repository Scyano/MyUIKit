// 完全实现
#import "UIColor.h"

@class UIColorRep;

@interface UIColor (UIPrivate)
- (id)_initWithRepresentations:(NSArray *)reps;
- (UIColorRep *)_bestRepresentationForProposedScale:(CGFloat)scale;
- (BOOL)_isOpaque;
@end