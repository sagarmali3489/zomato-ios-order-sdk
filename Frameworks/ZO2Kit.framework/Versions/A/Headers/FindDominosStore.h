//
//  FindDominosStore.h
//  delivery
//
//  Created by Nikunj on 18/05/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//


#import "DeliveryAddress.h"

@protocol FindDominosStoreDelegate <NSObject>

@optional
- (void) dominosStoreFoundSuccessfully;

@optional
- (void) dominosStoreCallFailedWithError:(NSError *)error;

@end

@interface FindDominosStore : ZomatoObject

@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) NSString *message;
@property (nonatomic, strong) NSNumber *resId;
@property (nonatomic, strong) NSNumber *localityId;
@property (nonatomic, strong) NSNumber *subLocalityId;
@property (nonatomic, strong) NSString *cityName;
@property (nonatomic, strong) NSString *street;
@property (nonatomic, strong) NSString *flatNo;
@property (nonatomic, strong) NSString *address;
@property (nonatomic, strong) NSString *addressTwo;

@property (nonatomic, strong) NSString *userName;
@property (nonatomic, strong) NSNumber *userPhoneCountryId;
@property (nonatomic, strong) NSString *userPhone;
@property (nonatomic, strong) NSNumber *userPhoneVerified;
@property (nonatomic, strong) NSString *authKey;

@property (nonatomic, strong) DeliveryAddress *deliveryAddressObj;

@property (nonatomic, weak) id<FindDominosStoreDelegate> delegateVariable;

- (void) findDominosStoreWithDelegate:(id<FindDominosStoreDelegate>)delegate;

@end
