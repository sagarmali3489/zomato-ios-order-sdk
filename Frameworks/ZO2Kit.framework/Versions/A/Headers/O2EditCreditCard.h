//
//  EditCreditCard.h
//  Zomato
//
//  Created by Praagya Joshi on 04/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//


#import "O2UserCreditCard.h"

@protocol O2EditCreditCardDelegate <NSObject>

@required
- (void) editCreditCardCallSuccessful;

@required
- (void) editCreditCardCallFailed;

@end

@interface O2EditCreditCard : ZomatoObject

@property (nonatomic, strong) O2UserCreditCard *creditCard;
@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) NSString *message;
@property (nonatomic, weak) id<O2EditCreditCardDelegate> delegate;

- (void) editCreditCardWithDelegate: (id<O2EditCreditCardDelegate>) editCardDelegate;

@end
