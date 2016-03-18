//
//  ZUISeparator.h
//  ZUIKit
//
//  Created by Anil Bunkar on 01/07/15.
//  Copyright (c) 2015 Zomato. All rights reserved.
//

#import <UIKit/UIKit.h>

/*
 height and width of the separator is fixed.
 */

#define THICK_SEPARATOR_HEIGHT 8.0

typedef NS_ENUM(NSInteger, ZUISeparatorType) {
    ZUISeparatorTypeNone = 0, //no separator for fallback cases
    ZUISeparatorTypeEndToEnd, //end to end separator
    ZUISeparatorTypeLeftPaddingOnly, // left padding 15, right padding 0
    ZUISeparatorTypeBothSidePadding, // left and right padding 15
    ZUISeparatorTypeThick,
    ZUISeparatorTypeVertical, //To be set X position and Height
};

@interface ZUISeparator : UIView

- (id) initWithType: (ZUISeparatorType)separatorType;

- (void)setType:(ZUISeparatorType)separatorType;

- (void) setFrameY: (CGFloat)y;

+ (CGFloat) getHeight ;

//Only for vertical separators, Setting X and height is required
- (void) setFrameX: (CGFloat)x andHeight: (CGFloat)height;

+ (CGFloat)getThickSeparatorHeight;
@end
