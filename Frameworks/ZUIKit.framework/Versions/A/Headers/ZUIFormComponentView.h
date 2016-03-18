//
//  ZUIFormComponentView.h
//  ZUIKit
//
//  Created by Kunal on 18/07/15.
//  Copyright (c) 2015 Zomato. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZUILabel.h"
#import "ZUISeparator.h"

#define FORM_COMPONENT_HEIGHT 65

typedef NS_ENUM(NSInteger, ZUIFormComponentViewType)
{
    ZUIFormComponentViewTypeDefault =0,
    ZUIFormComponentViewTypeEmail,
    ZUIFormComponentViewTypePassowrd
};

@interface ZUIFormComponentView : UIView<UITextFieldDelegate>

@property(nonatomic,strong) UITextField *textField;


-(id)initWithPlaceholderText:(NSString *)placeholder andType:(ZUIFormComponentViewType)componentType;
- (void)setTitleText:(NSString *)titleString;
- (void)setTitleTextWithRequiredLabelShown:(NSString *)titleString;
- (void)shouldHideSeparator:(BOOL)separatorFlag;

// default is None
- (void)setBottomSeparatorType:(ZUISeparatorType)bottomSeparatorType;

+ (CGFloat) getFormComponentHeight;


@end
