//
//  OnlineOrderingAddButton.h
//  Zomato
//
//  Created by Nikunj on 10/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OnlineOrderingFunctions.h"
#import "OnlineOrderingViewController.h"

@interface OnlineOrderingAddButton : UIView

@property (nonatomic, strong) UIButton *addButton;
@property (nonatomic, strong) UILabel *countLabel;
@property (nonatomic, strong) UIView *countLabelShadowView;
@property (nonatomic, weak) DeliveryItem *deliveryItem;
@property (nonatomic, weak) OnlineOrderingViewController *mainVC;

+ (CGFloat) calculateWidth;
- (void) refreshCount;

-(void) updateAddButtonToDisabledState;

@end
