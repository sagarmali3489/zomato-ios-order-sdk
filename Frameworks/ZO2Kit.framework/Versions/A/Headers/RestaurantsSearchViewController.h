//
//  RestaurantsSearchViewController.h
//  delivery
//
//  Created by Nikunj on 29/04/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//


#import "O2NearbyCompactRestaurants.h"
#import "O2RestaurantSearchSuggestionManager.h"
#import "ZO2Prefix.h"
#import <CoreLocation/CLLocation.h>

#define HEADER_HEIGHT 40


@interface RestaurantsSearchViewController : ZUIBaseViewController <UITableViewDelegate, UITableViewDataSource, O2NearbyCompactRestaurantsProtocol,O2RestaurantSearchSuggestionsManagerDelegate,  UIViewControllerTransitioningDelegate, UIAlertViewDelegate>

@property (nonatomic, strong) O2NearbyCompactRestaurants *nearbyRestaurants;
@property (nonatomic, strong) ZUITableView *nearbyTableView;

@property (nonatomic, strong)UIView *subzoneView;
@property (nonatomic, strong)UIButton *subzoneButton;
@property (nonatomic, strong)UIButton *addressBookButton;
@property (nonatomic, strong)UIView *mainContainerView;
@property (nonatomic, strong)UIView *searchView;
@property (nonatomic, strong)CLLocation *currentLocation;
@property (nonatomic, assign) BOOL wasPresented;

- (id) initForConsumerAndLocation:(CLLocation *) location
             shouldAskForLocation:(BOOL)shouldAsk
                  andFilterParams:(NSDictionary *) searchFilterParams;

- (id) initWithUsername:(NSString *)name
                     location:(CLLocation *)location
                  phoneNumber:(NSString *)number
                      address:(NSString *)address
                  andLocality:(NSString *)locality;

- (void) refreshDataWithExcludingRestaurantId:(NSNumber *)resId;

- (void) didSelectLocation:(GoogleLocation *)selectedLocation
        withFilteredParams:(NSDictionary *)filterParamsLocal;

@end
