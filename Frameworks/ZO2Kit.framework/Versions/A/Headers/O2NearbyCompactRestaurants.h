//
//  NearbyCompactRestaurants.h
//  Zomato
//
//  Created by Praagya Joshi on 31/07/14.
//  Copyright (c) 2014 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZO2Kit/PopupObject.h"

@protocol O2NearbyCompactRestaurantsProtocol <NSObject>

@required
- (void) nearbyCompactRestaurantsReceivedWithParams:(NSDictionary *)params;

@required
- (void) nearbyCompactRestaurantsCallFailedWithError: (NSError *) error;

@end

@interface O2NearbyCompactRestaurants : ZomatoObject <ZMTAPIManagerDelegate>

@property (nonatomic, strong) NSString *emptyMessage;
@property (nonatomic, strong) NSNumber *radius;
//@property (nonatomic, strong) NSMutableArray *nearbyCompactRestaurants;
@property (nonatomic, strong) NSNumber *excludedResId;
@property (nonatomic, weak) id<O2NearbyCompactRestaurantsProtocol> nearbyCompactDelegate;
@property (nonatomic, strong) NSMutableArray *activeRestaurants;
@property (nonatomic, strong) NSMutableArray *inactiveRestaurants;
//@property (nonatomic, strong) NSString *subzoneName;
//@property (nonatomic, strong) NSNumber *subzone_id;
@property (nonatomic, strong) NSString *deliverySubzoneName;
@property (nonatomic, strong) NSNumber *deliverySubzoneId;
@property (nonatomic, strong) NSNumber *cityId;

@property (nonatomic, strong) NSMutableArray *reservedActiveRestaurants;
@property (nonatomic, strong) NSMutableArray *reservedInActiveRestaurants;

@property (nonatomic, strong) NSString *cuisineIDsString;
@property (nonatomic, strong) NSNumber *hasMore;
@property (nonatomic) BOOL isLoading;

@property (nonatomic, strong) NSMutableDictionary *residsDictionary;

@property (nonatomic, strong) NSString * defaultSearchMode;
@property (nonatomic, strong) NSNumber * showMultipleModes;
@property (nonatomic, strong) NSMutableDictionary *storedParams;
@property (nonatomic, strong) PopupObject *objPopup;


- (void)refreshRestaurantArrays;
- (void) fetchNearbyCompactRestaurantsForDelegate:(id <O2NearbyCompactRestaurantsProtocol>)delegate withParams:(NSDictionary *)params withFilterParams:(NSDictionary *)filterParams;
- (void) fetchNearbyCompactRestaurantsWithStoredParamsForDelegate:(id<O2NearbyCompactRestaurantsProtocol>)delegate withFilterParams:(NSDictionary *)filterParams;
- (void) fetchNearbyCompactRestaurantsForDelegate:(id <O2NearbyCompactRestaurantsProtocol>)delegate withFilterParams:(NSDictionary *)filterParams;
-(void) loadMoreNearbyCompactRestaurantsForDelegate:(id <O2NearbyCompactRestaurantsProtocol>)delegate withFilterParams:(NSDictionary *)filterParams andParams:(NSMutableDictionary *)params;


@end
