//
//  AddNewDeliveryAddressTableViewCell.h
//  Zomato
//
//  Created by Nikunj on 27/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "ZO2Prefix.h"

@interface AddNewDeliveryAddressTableViewCell : ZUITableViewCell
@property (nonatomic) BOOL shouldShowSubtext;

+ (CGFloat) calculateHeightWithSubtext:(BOOL)showSubtext;

@end
