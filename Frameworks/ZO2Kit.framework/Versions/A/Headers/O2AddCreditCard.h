//
//  AddCreditCard.h
//  Zomato
//
//  Created by Praagya Joshi on 14/08/14.
//  Copyright (c) 2014 Zomato Media Pvt. Ltd. All rights reserved.
//


#import "O2UserCreditCard.h"

@protocol O2AddCreditCardDelegate <NSObject>

@required
- (void) addCreditCardCallSuccessful;

@required
- (void) addCreditCardCallFailed;

@end

@interface O2AddCreditCard : ZomatoObject

@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) NSString *message;
@property (nonatomic, strong) O2UserCreditCard *creditCard;
@property (nonatomic, weak) id<O2AddCreditCardDelegate> delegate;

- (void) addCreditCardWithDelegate: (id<O2AddCreditCardDelegate>) creditCardDelegate;

@end
