//
//  OnlineOrderingCartPriceTableViewCell.h
//  Zomato
//
//  Created by Nikunj on 12/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//


#import "ZO2Prefix.h"

@interface OnlineOrderingCartPriceTableViewCell : ZUITableViewCell

@property (nonatomic, strong) ZUILabel *nameLabel;
@property (nonatomic, strong) ZUILabel *priceLabel;

+ (CGFloat) calculateHeightWithNameText:(NSString *)text withFont:(UIFont *)nameFont;

@end
