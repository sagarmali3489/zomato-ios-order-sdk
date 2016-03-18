//
//  ZUIMacros.h
//  ZUIKit
//
//  Created by Arpit Agarwal on 30/06/15.
//  Copyright (c) 2015 Zomato. All rights reserved.
//
#import "ZUIMetrics.h"

#ifndef ZUIKit_ZUIMacros_h
#define ZUIKit_ZUIMacros_h

//METRICS macros
#define X(v)                                            v.frame.origin.x
#define Y(v)                                            v.frame.origin.y
#define H(v)                                            v.frame.size.height
#define W(v)                                            v.frame.size.width
#define BOTTOM(v)                                       (v.frame.origin.y + v.frame.size.height)
#define AFTER(v)                                        (v.frame.origin.x + v.frame.size.width)

#define OFFSET(v)                                       (v.frame.origin.y + v.frame.size.height + OFFSET_PADDING_VERTICAL_LABEL_BETWEEN)
#define OFFSET_MEDIUM(v)                                (v.frame.origin.y + v.frame.size.height + OFFSET_MEDIUM_PADDING_LABEL_VERTICAL_TOP)
#define OFFSET_HIGH(v)                                  (v.frame.origin.y + v.frame.size.height + OFFSET_HIGH_PADDING_LABEL_VERTICAL_TOP)
#define OFFSET_SUPER_HIGH(v)                            (v.frame.origin.y + v.frame.size.height + OFFSET_SUPER_HIGH_PADDING_LABEL_VERTICAL_TOP)


//COLOR Macros
#define UIColorFromRGB(rgbValue) \
[UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 \
alpha:1.0]

#define UIColorFromRGBWithAlpha(rgbValue,a) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 alpha:a]


#endif
