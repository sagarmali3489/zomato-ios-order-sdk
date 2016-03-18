//
//  DeliveryOrderInfoCell.h
//  Zomato
//
//  Created by Udit Gupta on 13/03/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlaceOrderTab.h"
#import "ZO2Prefix.h"

@interface DeliveryOrderInfoCell : ZUITableViewCell
- (void)setOrderDetails:(PlaceOrderTab *)placeOrderTab;
@end
