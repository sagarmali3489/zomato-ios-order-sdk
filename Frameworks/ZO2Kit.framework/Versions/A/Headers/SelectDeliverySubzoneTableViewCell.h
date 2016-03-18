//
//  SelectDeliverySubzoneTableViewCell.h
//  Zomato
//
//  Created by Nikunj on 28/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "ZO2Prefix.h"

@interface SelectDeliverySubzoneTableViewCell : ZUITableViewCell

@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) ZUISeparator *separator;
@property (nonatomic) BOOL shouldShowBookingNotAvailableIcon;
@end
