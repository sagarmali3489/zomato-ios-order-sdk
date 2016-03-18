//
//  CustomizeMainItemTableViewCell.h
//  Zomato
//
//  Created by Nikunj on 11/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "ZO2Prefix.h"
#import "DeliveryItem.h"
#import "OnlineOrderingViewController.h"

@interface CustomizeMainItemTableViewCell : ZUITableViewCell

@property (nonatomic, weak) OnlineOrderingViewController *mainVC;
- (void) setDeliveryItem:(DeliveryItem *)deliveryItemLocal;
+ (CGFloat) calculateHeight:(DeliveryItem *)deliveryItemLocal withWidth:(CGFloat) width;

@end
