//
//  VerifyPhoneAvailable.h
//  Zomato
//
//  Created by Arpit Agarwal on 03/03/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <ZMTApiManageriOS/ZMTApiManageriOS.h>

@protocol VerifyPhoneAvailableDelegate <NSObject>

@optional
- (void) phoneNumberVerifiedIsAvailableSuccessfully;

@optional
- (void) phoneNumberVerifiedIsAvailableFailedWithError:(NSError *)error;

@end

@interface VerifyPhoneAvailable : ZomatoObject

@property (nonatomic, strong) NSNumber *countryId;
@property (nonatomic, strong) NSString *phoneNumber;
@property (nonatomic, strong) NSNumber *verificationRequestId;
@property (nonatomic, strong) NSNumber *smsVerificationCode;
@property (nonatomic, strong) NSNumber *numberStatusCode;
@property (nonatomic, strong) NSNumber *showLogin;

@property (nonatomic , strong) NSString *message;
@property (nonatomic , strong) NSString *status;
@property (nonatomic, weak) id<VerifyPhoneAvailableDelegate> delegate;

- (void) verifyPhoneAvailable:(NSString*)phoneNumberToCheck withCountryId:(NSNumber*)countryIdOfPhone withDelegate: (id<VerifyPhoneAvailableDelegate>) delegateVariable;

@end
