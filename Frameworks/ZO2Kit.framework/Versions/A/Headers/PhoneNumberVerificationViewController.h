//
//  PhoneNumberVerificationViewController.h
//  Zomato
//
//  Created by Arpit Agarwal on 03/03/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "OnlineOrderingViewController.h"
#import "VerifyPhoneAvailable.h"
#import "SetPhoneVerified.h"

@protocol PhoneNumberVerificationDelegate <NSObject>

@optional
- (void)phoneNumberVerifiedSuccessfully:(NSString *)phoneNumber withCountryId:(NSNumber *)phoneNumberCountryId countryCode:(NSNumber *)countryCode;

@end

@interface PhoneNumberVerificationViewController : ZUIBaseViewController<VerifyPhoneAvailableDelegate, SetPhoneVerifiedDelegate, UITextFieldDelegate>

@property (nonatomic) BOOL isEditingNumber;
@property (nonatomic) BOOL fromConfirmOOVC;
@property (nonatomic, weak) OnlineOrderingViewController *mainVC;
@property (nonatomic, strong) NSString *phoneNumber;
@property (nonatomic, strong) NSString *phoneNumberName;
@property (nonatomic, weak) id<PhoneNumberVerificationDelegate> delegate;

/**
 *  Initializes PhoneNumberVerification with a phone number and a phone number state.
 *
 *  @param initialPhoneNumber      Phone number to display when this state is initialized
 *  @param initialPhoneNumberState The initial state to set. nil if not known.
 *
 *  @return returns and instance of PhoneNumberVerificationViewController
 */
- (id)initWithPhoneNumber:(NSString *)initialPhoneNumber phoneCountryId:(NSNumber*)initialCountryId phoneCountryCode:(NSNumber*)initialCountryCode andPhoneNumberState:(PhoneNumberState)initialPhoneNumberState withName:(NSString *)name;

@end
