//
//  GetPaymentMethods.h
//  delivery
//
//  Created by Sudhanshu Shekhar on 5/7/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//


#import <ZMTApiManageriOS/ZMTApiManageriOS.h>
#import <ZCommons/ZCommons.h>
#import "O2UserCreditCard.h"
#import "ZomatoWallet.h"
#import "ValidPaymentMethod.h"
#import "Bank.h"

typedef enum{
    PAYMENT_TYPE_CASH = 0,
    PAYMENT_TYPE_CARD,
    PAYMENT_TYPE_NET_BANKING,
    PAYMENT_TYPE_THIRD_PARTY_WALLET,
}PAYMENT_TYPE;


@protocol GetPaymentMethodsDelegate <NSObject>

@optional
- (void) paymentMethodsFetchedSuccessfully;

@optional
- (void) paymentMethodsFetchingFailedWithError:(NSError *)error;

@end

@interface GetPaymentMethods : ZomatoObject

@property (nonatomic, weak) id<GetPaymentMethodsDelegate> delegateVariable;

@property (nonatomic, strong) NSMutableArray *validPaymentMethodsArray;
@property (nonatomic, strong) NSMutableArray *thirdPartyPaymentMethodsArray;
@property (nonatomic, strong) NSMutableArray *cardsArray;
@property (nonatomic, strong) NSMutableArray *validCardTypesNameArray;
@property (nonatomic, strong) NSMutableArray *walletArray;
@property (nonatomic, strong) NSMutableArray *banksArray;
@property (nonatomic, strong) NSString *lastPaymentMethodType;
@property (nonatomic, strong) NSNumber *lastPaymentMethodID;
@property (nonatomic, strong) NSNumber *lastUsedBankID;
@property (nonatomic, strong) NSNumber *lastUsedWalletID;
@property (nonatomic) PAYMENT_TYPE defaultPaymentMethod;
@property (nonatomic) NSInteger favouriteCardIndex;
@property (nonatomic, strong) NSNumber *shouldSendCVV;
@property (nonatomic, strong) ZomatoWallet *zomatoWallet;

@property (nonatomic, strong) NSNumber *hasLoyalty;

@property (nonatomic, strong) ValidPaymentMethod *thirdPartyWalletMethod;

- (void) fetchPaymentMethodsWithDelegate:(id<GetPaymentMethodsDelegate>)delegate;
- (void) setAllWalletArray:(NSMutableArray *)walletArray;

@end
