//
//  SetPhoneVerified.h
//  Zomato
//
//  Created by Arpit Agarwal on 14/03/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <ZMTApiManageriOS/ZMTApiManageriOS.h>

@protocol SetPhoneVerifiedDelegate <NSObject>

@optional
- (void) phoneVerifiedSetSuccessfully;

@optional
- (void) phoneVerifiedSetFailedWithError:(NSError *)error;

@end

@interface SetPhoneVerified : ZomatoObject
@property (nonatomic, strong) NSNumber *verificationRequestId;
@property (nonatomic, strong) NSString *smsVerificationCode;

@property (nonatomic , strong) NSString *status;
@property (nonatomic , strong) NSString *message;

@property (nonatomic, weak) id<SetPhoneVerifiedDelegate> delegate;

- (void) setPhoneVerified:(NSNumber *)requestId withSmsVerification:(NSString *)smsCode withDelegate:(id<SetPhoneVerifiedDelegate>)delegateVariable;

@end
