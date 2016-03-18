//
//  CreditCardTableViewCell.h
//  Zomato
//
//  Created by Praagya Joshi on 14/08/14.
//  Copyright (c) 2014 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "O2UserCreditCard.h"
#import "MGSwipeTableCell.h"
#import "ZO2Prefix.h"

typedef enum O2CreditCardCellType : NSInteger O2CreditCardCellType;
enum O2CreditCardCellType : NSInteger {
    SELECT_CARD,
    ADD_CARD
};

@interface O2CreditCardTableViewCell : MGSwipeTableCell

@property (nonatomic, strong) ZUILabel *cardNumber;
@property (nonatomic, strong) ZUILabel *cardName;

@property (nonatomic, strong) UIImageView *cardTypeImageView;
@property (nonatomic, strong) UILabel *selectedLabel;
@property (nonatomic, strong) UILabel *addCardImageLabel;
@property (nonatomic, strong) UILabel *addCardLabel;
@property (nonatomic) BOOL shouldShowFullSeparator;
@property (nonatomic) BOOL shouldShowTopSeparator;
@property (nonatomic) BOOL shouldShowBottomSeparator;

@property (nonatomic, assign) O2CreditCardCellType type;

- (void) setCreditCard: (O2UserCreditCard *) creditCard;
- (void) setAsAddCardCell;
- (void) setAsSelectedCell;
- (void) setAsDeselectedCell;

+ (CGFloat) calculateHeightForCreditCard:(O2UserCreditCard *)card;

@end
