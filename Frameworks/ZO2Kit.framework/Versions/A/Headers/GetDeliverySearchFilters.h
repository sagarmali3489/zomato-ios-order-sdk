//
//  GetDeliverySearchFilters.h
//  delivery
//
//  Created by Nikunj on 02/06/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//


#import "FilterCategory.h"
#import "ZO2Prefix.h"

@protocol GetDeliveryFiltersDelegate <NSObject>

@optional
- (void) deliveryFiltersFetchedSuccessfully;

@optional
- (void) deliveryFiltersFetchingFailedWithError:(NSError *)error;

@end

@interface GetDeliverySearchFilters : ZomatoObject

@property (nonatomic, strong) FilterCategory *deliveryTimeFilterCategory;
@property (nonatomic, strong) FilterCategory *sortByFilterCategory;
@property (nonatomic, strong) FilterCategory *cftFilterCategory;
@property (nonatomic, strong) FilterCategory *minOrderCategory;
@property (nonatomic, strong) FilterCategory *otherFilterCategory;
@property (nonatomic, strong) FilterCategory *cuisinesCategory;
@property (nonatomic, strong) NSDictionary *responseObject;
@property (nonatomic, weak) id<GetDeliveryFiltersDelegate> delegateVariable;

- (void) getFiltersDataWithDelegate:(id<GetDeliveryFiltersDelegate>)delegate;

@end
