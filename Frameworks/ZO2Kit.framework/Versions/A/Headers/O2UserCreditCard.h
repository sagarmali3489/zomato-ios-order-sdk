//
//  UserCreditCard.h
//  Zomato
//
//  Created by Praagya Joshi on 14/08/14.
//  Copyright (c) 2014 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <ZMTApiManageriOS/ZMTApiManageriOS.h>

typedef enum O2CreditCardType : NSInteger O2CreditCardType;
enum O2CreditCardType : NSInteger {
    O2_CREDIT_CARD_TYPE_MASTER_CARD,
    O2_CREDIT_CARD_TYPE_VISA,
    O2_CREDIT_CARD_TYPE_AMERICAN_EXPRESS,
    O2_CREDIT_CARD_TYPE_MAESTRO
};

@interface O2UserCreditCard : ZomatoObject

@property (strong, nonatomic) NSString *cardBin;
@property (strong, nonatomic) NSString *cardBrand;
@property (strong, nonatomic) NSString *cardMode;
@property (strong, nonatomic) NSString *cardName;
@property (strong, nonatomic) NSString *lastFourDigits;
@property (strong, nonatomic) NSString *firstSixDigits;
@property (assign, nonatomic) O2CreditCardType cardType;
@property (strong, nonatomic) NSString *cardNumber;
@property (strong, nonatomic) NSNumber *expiryMonth;
@property (strong, nonatomic) NSNumber *expiryYear;
@property (strong, nonatomic) NSString *isDomestic;
@property (strong, nonatomic) NSNumber *isExpired;
@property (strong, nonatomic) NSString *firstName;
@property (strong, nonatomic) NSString *lastName;
@property (strong, nonatomic) NSString *cvv;
@property (strong, nonatomic) NSString *cardToken;
@property (strong, nonatomic) NSString *bankName;
@property (strong, nonatomic) NSString *phoneNumber;
@property (strong, nonatomic) NSNumber *isFavourite;
@property (strong, nonatomic) NSNumber *isValidForPayment;
@property (strong, nonatomic) NSNumber *shouldRecache;

@end
