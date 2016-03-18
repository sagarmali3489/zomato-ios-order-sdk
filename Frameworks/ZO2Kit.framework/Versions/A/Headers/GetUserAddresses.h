//
//  GetUserAddresses.h
//  Zomato
//
//  Created by Nikunj on 13/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//


#import "DeliveryAddress.h"
#import "O2UserCreditCard.h"
#import "ZomatoWallet.h"
#import "GetPaymentMethods.h"

@protocol GetUserAddressesDelegate <NSObject>

@optional
- (void) userAddressesFetchedSuccessfully;

@optional
- (void) userAddressesFetchingFailedWithError:(NSError *)error;

@end


@interface GetUserAddresses : ZomatoObject

@property (nonatomic, weak) id<GetUserAddressesDelegate> delegateVariable;
@property (nonatomic, strong) NSMutableArray *deliveryAddresses;
@property (nonatomic, strong) NSMutableArray *nonDeliveryAddresses;
@property (nonatomic, strong) NSMutableArray *deliveringSubzonesArray;
@property (nonatomic, strong) NSString *userName;
@property (nonatomic, strong) NSNumber *userPhoneCountryId;
@property (nonatomic, strong) NSString *userPhone;
@property (nonatomic, strong) NSNumber *userPhoneVerified;

//paymentMethodsArray
@property (nonatomic, strong) GetPaymentMethods *paymentMethodsObject;

- (void) fetchUserAddressesWithDelegate:(id<GetUserAddressesDelegate>)delegate withResId:(NSNumber *)resId;

@end
