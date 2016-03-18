//
//  GetDominosLocalities.h
//  delivery
//
//  Created by Nikunj on 18/05/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//


#import "Locality.h"
#import "ZO2Prefix.h"

@protocol GetDominosLocalitiesDelegate <NSObject>

@optional
- (void) dominosLocalitiesFetchedSuccessfully;

@optional
- (void) dominosLocalitiesFetchingFailedWithError:(NSError *)error;

@end

@interface GetDominosLocalities : ZomatoObject

@property (nonatomic, weak) id<GetDominosLocalitiesDelegate> delegateVariable;
@property (nonatomic, strong) NSMutableArray *localitiesArray;
@property (nonatomic, strong) NSString *cityName;

- (void) getDominosLocalitiesWithDelegate:(id<GetDominosLocalitiesDelegate>) delegate;

@end
