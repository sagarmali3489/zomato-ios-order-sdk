//
//  OrderDetailsPriceTableViewCell.h
//  Zomato
//
//  Created by Nikunj on 14/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "ZO2Prefix.h"

#import "PlaceOrderItem.h"

@interface OrderDetailsPriceTableViewCell : ZUITableViewCell

@property (nonatomic, strong) ZUILabel *nameLabel;
@property (nonatomic, strong) ZUILabel *priceLabel;
@property (nonatomic, strong) UILabel *oldPriceLabel;  //Has a strikethrough through it

- (void) setDeliveryItem:(PlaceOrderItem *)deliveryItemLocal withCurrency:(NSString *)currency currecnyAffix:(NSString *)currencyAffix;
+ (CGFloat) calculateHeightWithNameText:(NSString *)text withFont:(UIFont *)nameFont withWidth:(CGFloat)width isOldPrice:(BOOL)isOldPrice;

@end
