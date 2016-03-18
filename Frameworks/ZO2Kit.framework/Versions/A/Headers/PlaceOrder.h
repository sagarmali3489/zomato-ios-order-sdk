//
//  PlaceOrder.h
//  Zomato
//
//  Created by Nikunj on 13/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//


#import "PlaceOrderTab.h"

@protocol PlaceOrderDelegate <NSObject>

@optional
- (void) orderPlacedNeedPaymentAuth;

@optional
- (void) orderPlacedSuccessfully;

@optional
- (void) orderPlacingFailedWithError:(NSError *)error;

@end

@interface PlaceOrder : ZomatoObject

@property (nonatomic, strong) NSNumber *code;
@property (nonatomic, strong) NSNumber *resId;
@property (nonatomic, strong) NSNumber *addressId;
@property (nonatomic, strong) NSString *addressString;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *phoneNo;
@property (nonatomic, strong) NSNumber *phoneNoCountryId;
@property (nonatomic, strong) NSString *deliveryInstructions;
@property (nonatomic, strong) NSString *specialInstructions;
@property (nonatomic , strong) NSString *message;
@property (nonatomic , strong) NSString *status;
@property (nonatomic , strong) NSString *orderJson;
@property (nonatomic, strong) NSNumber *cityId;
@property (nonatomic, strong) NSNumber *override;
@property (nonatomic, strong) NSString *promoCode;
@property (nonatomic, strong) NSString *rechargeMethodType;
@property (nonatomic, strong) NSNumber *shouldDismissWaitingVC;
@property (nonatomic, strong) NSNumber *dismissAfterTime;
@property (nonatomic, strong) NSNumber *isLoyaltyDiscountApplied;
@property (nonatomic, strong) NSString *dominosAuthKey;

//payments related
@property (nonatomic , strong) NSString *paymentMethodType; // "cash" , "wallet" , "card"
@property (nonatomic , strong) NSNumber *paymentMethodID;  // card/wallet id
@property (nonatomic , strong) NSString *cardToken;  // card-token
@property (nonatomic , strong) NSString *cardName;  // card-name
@property (nonatomic , strong) NSNumber *scanned;  // isCardScanned

//new for paytm
@property (nonatomic, strong) NSString *walletType;
@property (nonatomic, strong) NSString *deliveryMode;

//response variable for payment verification
@property (nonatomic , strong) NSString *checkoutURL;  // isCardScanned
@property (nonatomic , strong) NSString *responseURL; // listen for success or failure on this.
@property (nonatomic , strong) NSString *trackingId;
@property (nonatomic, strong) NSNumber *rechargeAmount;
@property (nonatomic, strong) NSNumber *shouldRecharge;

@property (nonatomic, strong) NSMutableArray *taxesArray;
@property (nonatomic, strong) NSMutableArray *totalArray;
@property (nonatomic, strong) NSMutableArray *chargesArray;
@property (nonatomic, strong) NSMutableArray *subtotalArray;
@property (nonatomic, strong) NSMutableArray *dishesArray;

@property (nonatomic, strong) NSString *dobString;

@property (nonatomic, strong) PlaceOrderTab *placeOrderTab;

@property (nonatomic, weak) id<PlaceOrderDelegate> delegateVariable;
- (void) placeOrderWithDelegate:(id<PlaceOrderDelegate>)delegate;
- (void) constructOrderWithPlaceOrderItemsArray:(NSMutableArray *)placeOrderItemsArray;

@end
