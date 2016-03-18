//
//  PhoneNumberCell.h
//  Zomato
//
//  Created by Udit Gupta on 23/03/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "ZO2Prefix.h"

@protocol PhoneNumberCellDelegate <NSObject>

@required
- (void)didTapContactZomatoButton;

@end

@interface PhoneNumberCell : ZUITableViewCell
@property (nonatomic) BOOL isLastCell;
@property (nonatomic, weak) id delegate;

- (void)setRestaurantPhoneNumber:(NSString *)phoneNumber;
@end
