//
//  ZUIRoundedRectButton.h
//  ZUIKit
//
//  Created by Udit Gupta on 03/07/15.
//  Copyright (c) 2015 Zomato. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, ZUIRoundedRectButtonType) {
    ZUIRoundedRectButtonTypeSubmit = 0,
    ZUIRoundedRectButtonTypeOrder,
    ZUIRoundedRectButtonTypeCashless,
    ZUIRoundedRectButtonTypeIcon
};


@interface ZUIRoundedRectButton : UIButton

+ (instancetype)zuiRoundedRectButtonWithType:(ZUIRoundedRectButtonType)buttonType;
+ (CGFloat)getRoundRectButtonHeight;
- (void) setTitleText:(NSString *)text;
- (void)setTitleFont:(UIFont *)font;
- (void)setTitleIsNotUppercase;

@end
