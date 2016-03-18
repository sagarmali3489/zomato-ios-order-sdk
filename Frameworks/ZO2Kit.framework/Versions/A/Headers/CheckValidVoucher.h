//
//  CheckValidVoucher.h
//  delivery
//
//  Created by Nikunj on 06/05/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//


#import "O2Voucher.h"

@protocol CheckVoucherValidDelegate <NSObject>

@optional
- (void) voucherValidatedSuccessfully;

@optional
- (void) voucherValidationFailedWithError:(NSError *)error;

@end

@interface CheckValidVoucher : ZomatoObject

@property (nonatomic, weak) id<CheckVoucherValidDelegate> delegateVariable;

@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) NSString *message;
@property (nonatomic, strong) NSString *dominosAuthKey;
@property (nonatomic, strong) O2Voucher *voucher;
@property (nonatomic) BOOL isVoucherApplied;

@property (nonatomic , strong) NSString *orderJson;
@property (nonatomic, strong) NSMutableArray *dishesArray;
@property (nonatomic, strong) NSMutableArray *totalArray;


- (void) checkValidityWithCode:(NSString *)code withResId:(NSNumber *)resId andPaymentMethod:(NSString *)paymentMethod withPlaceOrdersArray:(NSArray *)orderItemsArray isDominos:(NSNumber *)isDominos withDelegate:(id<CheckVoucherValidDelegate>)delegate;

@end
