//
//  OnlineOrderingCartItemTableViewCell.h
//  Zomato
//
//  Created by Nikunj on 12/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "ZO2Prefix.h"
#import "AddSubtractItemView.h"
#import "DeliveryItem.h"
#import "OnlineOrderingViewController.h"

@interface OnlineOrderingCartItemTableViewCell : ZUITableViewCell

@property (nonatomic, strong) ZUILabel *nameLabel;
@property (nonatomic, strong) ZUILabel *sidePriceLabel;
@property (nonatomic, strong) ZUILabel *priceLabel;
@property (nonatomic, strong) ZUILabel *customizationsLabel;
@property (nonatomic, strong) AddSubtractItemView *addSubtractItemView;
@property (nonatomic, strong) UIStepper *stepper;
@property (nonatomic, weak) OnlineOrderingViewController *mainVC;

- (void) setDeliveryItem:(DeliveryItem *)deliveryItemLocal;
+ (CGFloat) calculateHeight:(DeliveryItem *)deliveryItemLocal;

@end
