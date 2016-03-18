//
//  ConfirmOrderAddressTableViewCell.h
//  Zomato
//
//  Created by Nikunj on 13/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "ZO2Prefix.h"
#import "DeliveryAddress.h"
#import "MGSwipeTableCell.h"

typedef NS_ENUM(NSInteger, ConfirmOrderAddressTableViewCellType) {
    ConfirmOrderAddressTableViewCellTypeDefault,
    ConfirmOrderAddressTableViewCellTypeSingleLine,
    ConfirmOrderAddressTableViewCellTypeRadio,
};

@protocol ConfirmOrderAddressTableViewCellDelegate <NSObject>

@optional
- (void)didTapEditButtonWithDeliveryAddress:(DeliveryAddress *)deliveryAddress;

@end

@interface ConfirmOrderAddressTableViewCell : MGSwipeTableCell

@property (nonatomic, strong) ZUILabel *aliasLabel;
@property (nonatomic, strong) ZUILabel *addressLabel;
@property (nonatomic, strong) UILabel *radioButtonLabel;
@property (nonatomic) BOOL shouldShowEditButton;
@property (nonatomic) BOOL shouldNotHighlight;
@property (nonatomic, weak) id delegate;

- (void) setDeliveryAddress:(DeliveryAddress *)deliveryAddress;
+ (CGFloat) calculateHeight:(DeliveryAddress *)deliveryAddressLocal;
+ (CGFloat) calculateHeightWithEditButton:(DeliveryAddress *)deliveryAddressLocal showChange:(BOOL)showChange;

- (id) initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier showChange:(BOOL) showChangeLocal;

- (id) initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier showChange:(BOOL) showChangeLocal andCellType:(ConfirmOrderAddressTableViewCellType)initCellType;

- (void)setradioButtonSelected:(BOOL)isSelected;

@end
