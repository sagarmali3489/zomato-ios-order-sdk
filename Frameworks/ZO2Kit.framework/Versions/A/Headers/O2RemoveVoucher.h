//
//  RemoveVoucher.h
//  delivery
//
//  Created by Nikunj on 03/06/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//


#import "O2Voucher.h"

@protocol O2RemoveVoucherDelegate <NSObject>

@optional
- (void) voucherRemovedSuccessfully;

@optional
- (void) voucherRemovingFailedWithError:(NSError *)error;

@end

@interface O2RemoveVoucher : ZomatoObject

@property (nonatomic, weak) id<O2RemoveVoucherDelegate> delegateVariable;

@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) NSString *message;
@property (nonatomic, strong) NSString *dominosAuthKey;
@property (nonatomic, strong) O2Voucher *voucher;
@property (nonatomic) BOOL shouldGoBack;

- (void) removeVoucherWithDelegate:(id<O2RemoveVoucherDelegate>)delegate;

@end