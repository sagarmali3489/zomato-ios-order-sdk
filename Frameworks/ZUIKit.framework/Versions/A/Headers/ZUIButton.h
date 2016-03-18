//
//  ZUIButton.h
//  Zomato
//
//  Created by Kunal on 29/06/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ZUIKit/ZUILabel.h>

typedef NS_ENUM(NSInteger, ZUIButtonType) {
    ZUIButtonTypeTitleOnly,
    ZUIButtonTypeIconOnly,
    ZUIButtonTypeTitleAndIcon,
    ZUIButtonTypeTitleIconAndSubtext
};

typedef NS_ENUM(NSInteger, ZUIButtonState) {
    ZUIButtonStateEnabled,
    ZUIButtonStateDisabled,
    ZUIButtonStateSelected
};


@interface ZUIButton : UIButton

+ (instancetype)zuiButtonWithType:(ZUIButtonType)buttonType;
- (void)setButtonState:(ZUIButtonState)buttonState;

- (void)setIconText:(NSString *)iconString;
- (void)setTitleText:(NSString *)titleString;
- (void)setSubtext:(NSString *)subtextString;

- (void)setTitleText:(NSString *)titleString iconText:(NSString *)iconString;
- (void)setTitleText:(NSString *)titleString subTitleText:(NSString *)subtitleString iconText:(NSString *)iconString;

- (void) setIconColor:(UIColor *)color;

@property (nonatomic, strong) ZUILabel *iconLabel;
@property (nonatomic, strong) UILabel *customIconLabel;
@property (nonatomic, strong) ZUILabel *titleTextLabel;
@property (nonatomic, strong) ZUILabel *subtextLabel;

@end