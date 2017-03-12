
#import "UIInterface.h"
#import <AppKit/NSFont.h>


@implementation UIColor (UIColorSystemColors)

+ (UIColor *)groupTableViewBackgroundColor
{
    return [UIColor lightGrayColor];    // this is currently not likely to be correct, please fix!
}

@end


@implementation UIFont (UIFontSystemFonts)

+ (CGFloat)systemFontSize
{
    return [NSFont systemFontSize];
}

+ (CGFloat)smallSystemFontSize
{
    return [NSFont smallSystemFontSize];
}

+ (CGFloat)labelFontSize
{
    return [NSFont labelFontSize];
}

+ (CGFloat)buttonFontSize
{
    return [NSFont systemFontSizeForControlSize:NSRegularControlSize];
}

@end
