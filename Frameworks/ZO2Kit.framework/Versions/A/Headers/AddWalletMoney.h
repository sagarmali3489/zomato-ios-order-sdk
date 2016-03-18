//
//  AddWalletMoney.h
//  delivery
//
//  Created by Sudhanshu Shekhar on 5/7/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//

#import <ZMTApiManageriOS/ZMTApiManageriOS.h>

@protocol AddWalletMoneyDelegate <NSObject>

@optional
- (void) addWalletNeedPaymentAuth;

@optional
- (void) addWalletSuccessfully;

@optional
- (void) addWalletFailedWithError:(NSError *)error;

@end

@interface AddWalletMoney : ZomatoObject

@property (nonatomic , strong) NSString *message;
@property (nonatomic , strong) NSString *status;

//payments related
@property (nonatomic, strong) NSNumber *paymentMethodID;
@property (nonatomic, strong) NSString *trackingId;
@property (nonatomic, strong) NSString *cardToken;
@property (nonatomic, strong) NSString *cardName;
@property (nonatomic, strong) NSNumber *scanned;
@property (nonatomic, strong) NSNumber *rechargeAmount;
@property (nonatomic, strong) NSString *paymentMethodType;
@property (nonatomic, strong) NSString *walletType;
@property (nonatomic, strong) NSNumber *walletID;
@property (nonatomic, strong) NSNumber *code;

//response variable for payment verification
@property (nonatomic, strong) NSString *rechargeMethodType;

//response variable for payment verification
@property (nonatomic , strong) NSString *checkoutURL;  // isCardScanned
@property (nonatomic, strong) NSString *responseURL;

@property (nonatomic, weak) id<AddWalletMoneyDelegate> delegateVariable;
- (void) addWalletMoneyWithDelegate:(id<AddWalletMoneyDelegate>)delegate;

@end
