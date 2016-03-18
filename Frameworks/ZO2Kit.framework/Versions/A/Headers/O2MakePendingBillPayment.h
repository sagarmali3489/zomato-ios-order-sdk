//
//  MakePendingBillPayment.h
//  Zomato
//
//  Created by Praagya Joshi on 13/10/14.
//  Copyright (c) 2014 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <ZMTApiManageriOS/ZMTApiManageriOS.h>

@protocol O2MakePendingBillPaymentDelegate <NSObject>

@required
- (void) pendingBillPaymentCallSuccess;

@required
- (void) pendingBillPaymentCallFailedWithError: (NSError *) error;

@end

@interface O2MakePendingBillPayment : ZomatoObject

@property (nonatomic, weak) id<O2MakePendingBillPaymentDelegate> delegate;
@property (nonatomic, strong) NSString *message;
@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) NSNumber *tabID;
@property (nonatomic, strong) NSNumber *creditCardID;

- (void) makePendingBillPaymentWithDelegate: (id<O2MakePendingBillPaymentDelegate>) paymentDelegate;

@end
