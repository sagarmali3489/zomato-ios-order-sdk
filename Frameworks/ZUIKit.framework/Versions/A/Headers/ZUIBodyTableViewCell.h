//
//  ZUIBodyTableViewCell.h
//  ZUIKit
//
//  Created by Kunal on 01/08/15.
//  Copyright (c) 2015 Zomato. All rights reserved.
//

#import <ZUIKit/ZUIKit.h>
#import "ZUILabel.h"

@interface ZUIBodyTableViewCell : ZUITableViewCell

@property (nonatomic,strong)ZUILabel *bodyLabel;

@property (nonatomic,assign) BOOL showIconLabel;
@property (nonatomic,strong) UILabel *iconLabel;

- (void)setBodyLabelText:(NSString *)text;
- (void)setBodyTextColor:(UIColor *)bodyTextColor;
-(void)setIconColor:(UIColor *)iconColor;
-(void) setIconText:(NSString *) text;

+ (CGFloat)getCellHeight;
+ (CGFloat)getCellHeightForTitle:(NSString *)title showIcon:(BOOL)showIcon;

@end
