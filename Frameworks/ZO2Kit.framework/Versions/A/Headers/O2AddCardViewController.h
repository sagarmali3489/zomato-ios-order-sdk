//
//  AddCardViewController.h
//  Zomato
//
//  Created by Praagya Joshi on 28/10/14.
//  Copyright (c) 2014 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "ZO2Prefix.h"
#import "O2AddCreditCard.h"
#import "O2EditCreditCard.h"
#import "O2StoreCreditCard.h"

@protocol O2AddCardViewControllerDelegate <NSObject>

@optional
- (void) didAddCreditCard: (O2UserCreditCard *) addedCard isCardScanned:(NSNumber *)isCardScanned;

@optional
- (void) didEditCreditCard;

@optional
- (void) addCardViewWasDismissed;

@end

@interface O2AddCardViewController : ZUIBaseViewController <PTKViewDelegate, O2AddCreditCardDelegate, UINavigationControllerDelegate, UITextFieldDelegate, O2EditCreditCardDelegate, O2StoreCreditCardDelegate>

@property (nonatomic, assign) BOOL isDefaultTipSet;
@property (nonatomic, assign) BOOL forChangingCard;
@property (nonatomic, assign) BOOL shouldStoreCard;
@property (nonatomic, weak) id<O2AddCardViewControllerDelegate> delegate;

- (id) initForEditingCard: (O2UserCreditCard *) card;
- (id) initWithRestaurantID: (NSNumber *) restaurantID andSupportedCardsArray:(NSArray *)supportedCardsArray shouldSendCVV:(NSNumber *)shouldSendCVV;
- (id) initWithRestaurantID: (NSNumber *) restaurantID;

@end
