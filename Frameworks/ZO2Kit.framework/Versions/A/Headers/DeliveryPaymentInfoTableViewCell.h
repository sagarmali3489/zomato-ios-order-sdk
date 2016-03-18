//
//  DeliveryPaymentInfoTableViewCell.h
//  Zomato
//
//  Created by Nikunj on 18/03/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "ZO2Prefix.h"

#define DELIVERY_PAYEMENT_CELL_HEIGHT   44

@interface DeliveryPaymentInfoTableViewCell : ZUITableViewCell

@property (nonatomic) BOOL isLastCell;
@property (nonatomic, strong) UILabel *radioButtonLabel;
@property (nonatomic, strong) UIButton *rightButton;
@property (nonatomic, strong) ZUITagLabel *comingSoonLabel;
@property (nonatomic, strong) ZUILabel *titleLabel;
@property (nonatomic, strong) ZUILabel *subtitleLabel;

@property (nonatomic, strong) UIActivityIndicatorView *indicatorView;

-(void) setTitle:(NSString *)title subtitle:(NSString *)subtitle isEnabled:(BOOL)enabledLocal walletZero:(BOOL)isWalletZero;
-(void) selectPaymentMehtod:(BOOL)selected ;

@end
