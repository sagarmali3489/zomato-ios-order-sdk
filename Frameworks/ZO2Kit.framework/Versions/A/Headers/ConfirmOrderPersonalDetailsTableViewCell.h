//
//  ConfirmOrderPersonalDetailsTableViewCell.h
//  Zomato
//
//  Created by Nikunj on 13/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "ZO2Prefix.h"

#define CONFIRM_ORDER_CELL_HEIGHT 100
#define SPECIAL_INSTRUCTIONS_TEXT_VIEW_TAG 103
#define DELIVERY_INSTRUCTIONS_TEXT_VIEW_TAG 102
#define NAME_TEXT_VIEW_TAG 100
#define PHONE_TEXT_VIEW_TAG 101

@interface ConfirmOrderPersonalDetailsTableViewCell : ZUITableViewCell

@property (nonatomic, strong) UITextField *nameTextView;
@property (nonatomic, strong) UITextField *phoneTextView;
@property (nonatomic, strong) UIButton *editPhoneButton;

@end
