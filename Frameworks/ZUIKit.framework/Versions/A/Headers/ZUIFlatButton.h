//
//  ZUIFlatButton.h
//  ZUIKit
//
//  Created by Anurag Kabra on 16/07/15.
//  Copyright (c) 2015 Zomato. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, ZUIFlatButtonType) {
    ZUIFlatButtonTypeAdd = 0,
    ZUIFlatButtonTypeCancel,
};


@interface ZUIFlatButton : UIButton

+ (instancetype) zuiFlatButtonWithType:(ZUIFlatButtonType)buttonType;

@end
