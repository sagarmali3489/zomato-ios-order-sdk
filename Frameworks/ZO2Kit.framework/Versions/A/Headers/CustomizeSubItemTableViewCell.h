//
//  CustomizeSubItemTableViewCell.h
//  Zomato
//
//  Created by Nikunj on 11/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "ZO2Prefix.h"
#import "DeliveryItem.h"
#import "OnlineOrderingViewController.h"

@interface CustomizeSubItemTableViewCell : ZUITableViewCell

@property (nonatomic, weak) OnlineOrderingViewController *mainVC;
- (void) setDeliveryGroup:(DeliveryGroup *)deliveryGroupLocal;
+ (CGFloat) calculateHeight:(DeliveryGroup *)deliveryGroupLocal withCellWidth:(CGFloat)cellWidth;

@end
