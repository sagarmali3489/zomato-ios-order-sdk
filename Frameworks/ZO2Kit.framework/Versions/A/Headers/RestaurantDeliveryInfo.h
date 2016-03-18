//
//  RestaurantDeliveryInfo.h
//  Zomato
//
//  Created by Nikunj on 10/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "DeliveryMenu.h"
#import "DeliveryTiming.h"
#import "DeliveryCharge.h"
#import "Restaurant.h"
#import "GoogleLocation.h"
#import "AgeObject.h"
#import "UserDetail.h"

@class Restaurant;
@class GetPaymentMethods;
@class DeliveryCharge;
@class AgeObject;

@protocol RestaurantDeliveryInfoDelegate <NSObject>

@optional
- (void) restaurantDeliveryInfoFetchedSuccessfully;

@optional
- (void) restaurantDeliveryInfoFetchingFailedWithError:(NSError *)error;

@end

@interface RestaurantDeliveryInfo : ZomatoObject

@property (nonatomic, strong) NSMutableArray *menusArray;
@property (nonatomic, strong) NSMutableArray *deliveryTimingsArray;
@property (nonatomic, strong) DeliveryCharge *extraChargeBelowMin;
@property (nonatomic, strong) NSNumber *status;
@property (nonatomic, strong) NSNumber *minOrder;
@property (nonatomic, strong) NSNumber *acceptBelowMinOrder;
@property (nonatomic, strong) NSNumber *currentComission;
@property (nonatomic, strong) NSString *acceptanceRate;
@property (nonatomic, strong) NSNumber *averageDeliveryTime;
@property (nonatomic, strong) NSNumber *averagePickUpTime;
@property (nonatomic, strong) NSNumber *deliveryCharge;
@property (nonatomic, strong) NSNumber *deliveryRating;
@property (nonatomic, strong) NSNumber *cityId;
@property (nonatomic, strong) NSString *currency;
@property (nonatomic, strong) NSString *currencyAffix;
@property (nonatomic, strong) NSMutableArray *deliveringSubzonesArray;
@property (nonatomic, strong) Restaurant *restaurantObject;
@property (nonatomic, strong) NSNumber *hasOnlinePayments;
@property (nonatomic, strong) NSNumber *showOnlinePaymentsTitle;
@property (nonatomic, strong) GetPaymentMethods *objPaymentMethods;
@property (nonatomic, strong) UserDetail *user;
@property (nonatomic, strong) AgeObject *ageObject;

@property (nonatomic, strong) NSNumber *hasPickup;
@property (nonatomic, strong) NSNumber *hasDelivery;
@property (nonatomic, strong) NSString *preferredDeliveryMode;
@property (nonatomic, strong) NSNumber *showDeliveryModeScreen;
@property (nonatomic, strong) NSNumber *phoneNumberLength;

@property (nonatomic, weak) id<RestaurantDeliveryInfoDelegate> delegateVariable;
- (void) fetchRestaurantInfoWithResId:(NSNumber *)resId withModeType:(NSString*)modeType withDelegate:(id<RestaurantDeliveryInfoDelegate>)delegate;

@end
