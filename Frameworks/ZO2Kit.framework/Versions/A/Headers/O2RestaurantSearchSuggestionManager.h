//
//  RestaurantSearchSuggestionManager.h
//  Zomato
//
//  Created by Anurag Kabra on 28/05/14.
//  Copyright (c) 2014 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "O2NearbyCompactRestaurants.h"

@protocol O2RestaurantSearchSuggestionsManagerDelegate <NSObject>

@required
- (void)didFetchNewResults:(O2NearbyCompactRestaurants *)searchSuggestions;

@end

@interface O2RestaurantSearchSuggestionManager : NSObject

@property (weak, nonatomic) id<O2RestaurantSearchSuggestionsManagerDelegate> delegate;

@property (nonatomic, strong) NSNumber *showOnlyCashlessRestaurants;
@property (nonatomic, strong) NSNumber *showOnlyOnlineDeliveryRestaurant;
@property (nonatomic, strong) O2NearbyCompactRestaurants *resultsObject;

- (void)makeSuggestionsRequestWithString:(NSString *)searchText withFilterParams:(NSDictionary *)filterParams andParams:(NSDictionary *)params;

@end

