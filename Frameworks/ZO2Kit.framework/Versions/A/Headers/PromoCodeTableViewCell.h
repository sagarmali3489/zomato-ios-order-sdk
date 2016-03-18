//
//  PromoCodeTableViewCell.h
//  delivery
//
//  Created by Nikunj on 06/05/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//

#import "ZO2Prefix.h"

#define PROMO_CODE_CELL_HEIGHT      54

typedef enum {
    promoCodeCellTypeNotValid,
    promoCodeCellTypeApply,
    promoCodeCellTypeApplied
} promoCodeCellType;

@protocol PromoCodeTableViewCellDelegate <NSObject>

@required
- (void) promoApplied:(NSString *)promoCode;

@required
- (void) promoRemoved;

@end

@interface PromoCodeTableViewCell : ZUITableViewCell

@property (nonatomic, strong) UITextField *promoCodeTextView;
@property (nonatomic, strong) UILabel *promoCodeAppliedLabel;

@property (nonatomic, weak) id<PromoCodeTableViewCellDelegate> delegate;

- (void) setCellType:(promoCodeCellType)cellType;

@end
