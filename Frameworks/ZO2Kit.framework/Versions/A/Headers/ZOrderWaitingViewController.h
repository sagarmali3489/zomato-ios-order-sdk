//
//  ZOrderWaitingViewController.h
//  Zomato
//
//  Created by Arpit Agarwal on 02/03/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "ZO2Prefix.h"

@protocol ZOrderWaitingDelegate <NSObject>

@optional
- (void)didTapWaitingCloseButton;

@end

@interface ZOrderWaitingViewController : ZUIBaseViewController<UIGestureRecognizerDelegate>

@property (nonatomic, strong) UIImageView *screenshotView;
@property (nonatomic, strong) UIView *backgroundView;
@property (nonatomic, strong) UILabel *bottomTextLabel;

@property (nonatomic, weak) id<ZOrderWaitingDelegate> delegate;

- (void)hideCloseButton;
- (void)showCloseButton;
- (void) setHeadingTitle:(NSString *)title;

@end
