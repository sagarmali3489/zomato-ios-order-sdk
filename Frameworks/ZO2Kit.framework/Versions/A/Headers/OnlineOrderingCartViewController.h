//
//  OnlineOrderingCartViewController.h
//  Zomato
//
//  Created by Nikunj on 02/04/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "OnlineOrderingViewController.h"

@interface OnlineOrderingCartViewController : ZUIBaseViewController <UITextViewDelegate>

@property (nonatomic, strong) UIView *extraChargeView;
@property (nonatomic, strong) ZUITableView *cartTableView;
@property (nonatomic, weak) OnlineOrderingViewController *mainVC;

- (id) initWithMainVC:(OnlineOrderingViewController *)mainVCLocal;

@end
