//
//  DeleteCreditCard.h
//  Zomato
//
//  Created by Praagya Joshi on 09/10/14.
//  Copyright (c) 2014 Zomato Media Pvt. Ltd. All rights reserved.
//


#import "O2DeleteCreditCard.h"
#import "O2UserCreditCard.h"

@protocol O2DeleteCreditCardDelegate <NSObject>

@required
- (void) deleteCreditCardCallSuccessful;

@required
- (void) deleteCreditCardCallFailed;

@required
- (void) deleteCreditCardCallFailedWithMessage:(NSString*) message;

@end

@interface O2DeleteCreditCard : ZomatoObject


@property (nonatomic, strong) O2UserCreditCard *creditCard;
@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) NSString *message;
@property (nonatomic, weak) id<O2DeleteCreditCardDelegate> delegate;

- (void) deleteCreditCardWithDelegate: (id<O2DeleteCreditCardDelegate>) deleteCardDelegate;

@end
