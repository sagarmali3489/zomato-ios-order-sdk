//
//  OnlineOrderingItemTableViewCell.h
//  Zomato
//
//  Created by Nikunj on 10/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//


#import "DeliveryItem.h"
#import "OnlineOrderingViewController.h"
#import "OnlineOrderingDelegates.h"
#import "OnlineOrderingAddButton.h"

@interface OnlineOrderingItemTableViewCell : ZUITableViewCell

@property (nonatomic, weak) OnlineOrderingViewController *mainVC;
@property (nonatomic, weak) id<OnlineOrderingDelegate> delegate;
@property (nonatomic) BOOL fromSearch;
@property (nonatomic, strong) OnlineOrderingAddButton *addButton;


- (void) setDeliveryItem:(DeliveryItem *)deliveryItemLocal;
+ (CGFloat) calculateHeight:(DeliveryItem *)deliveryItemLocal;
- (void) addItemClicked;

+ (CGFloat) calculateHeight:(DeliveryItem *)deliveryItemLocal andWidth:(CGFloat)width;

@end
