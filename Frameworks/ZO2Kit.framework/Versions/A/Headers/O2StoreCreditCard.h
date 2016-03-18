//
//  StoreCreditCard.h
//  Zomato
//
//  Created by Praagya Joshi on 29/08/14.
//  Copyright (c) 2014 Zomato Media Pvt. Ltd. All rights reserved.
//


#import "O2UserCreditCard.h"

@protocol O2StoreCreditCardDelegate <NSObject>

@required
- (void) storeCreditCardCallSuccessful;

@required
- (void) storeCreditCardCallFailed;

@end

@interface O2StoreCreditCard : ZomatoObject


@property (nonatomic, strong) O2UserCreditCard *creditCard;
@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) NSString *message;
@property (nonatomic, weak) id<O2StoreCreditCardDelegate> delegate;
@property (strong, nonatomic) NSNumber *isCardScanned;

- (void) storeCreditCardWithDelegate: (id<O2StoreCreditCardDelegate>) storeCardDelegate;

@end
