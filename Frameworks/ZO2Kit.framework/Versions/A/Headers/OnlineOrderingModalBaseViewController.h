//
//  OnlineOrderingModalBaseViewController.h
//  Zomato
//
//  Created by Nikunj on 11/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "ZO2Prefix.h"

#import <UIKit/UIKit.h>

@interface OnlineOrderingModalBaseViewController : ZUIBaseViewController

@property (nonatomic, strong) UIImageView *screenshotView;
@property (nonatomic, strong) UIView *backgroundView;
@property (nonatomic, strong) UIView *containerView;

-(id) initWithoutCornerRadius;

- (void) dismissView;

@end
