//
//  OrderDetailsItemTableViewCell.h
//  Zomato
//
//  Created by Nikunj on 14/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "ZO2Prefix.h"

#import "PlaceOrderItem.h"

@interface OrderDetailsItemTableViewCell : ZUITableViewCell

@property (nonatomic, strong) ZUILabel *nameLabel;
@property (nonatomic, strong) ZUILabel *sidePriceLabel;
@property (nonatomic, strong) ZUILabel *priceLabel;
@property (nonatomic, strong) ZUILabel *customizationsLabel;
@property (nonatomic, strong) ZUILabel *errorTextLabel;
@property (nonatomic, strong) UILabel *priceOldLabel;
@property (nonatomic, strong) UILabel *sidePriceOldLabel;
@property (nonatomic, strong) UILabel *quantityLabel;
@property (nonatomic, strong) UILabel *iconLabel;


- (void) setDeliveryItem:(PlaceOrderItem *)deliveryItemLocal withCurrency:(NSString *)currency currecnyAffix:(NSString *)currencyAffix;
+ (CGFloat) calculateHeight:(PlaceOrderItem *)deliveryItemLocal withWidth:(CGFloat)width;

@end
