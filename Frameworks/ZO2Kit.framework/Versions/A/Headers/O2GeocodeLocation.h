//
//  Location.h
//  RestKitUtilityAndTest
//
//  Created by Arup Saha on 17/05/12.
//  Copyright (c) 2012 Zomato Media Pvt. Ltd. All rights reserved.
//


#import "ZO2Prefix.h"

@protocol O2GeocodeLocationAPIDelegate <NSObject>

@required
- (void) geoCodeLocationCallCompletedSuccessfully;

@required
- (void) geoCodeLocationCallFailedWithError:(NSError *)error;

@end


@interface O2GeocodeLocation : ZomatoObject {
    
}

@property (nonatomic, strong) NSString* name;
@property (nonatomic, strong) NSString* cityName;
@property (nonatomic, strong) NSNumber* cityId;
@property (nonatomic, strong) NSString* realCity;
@property (nonatomic, weak) id delegate;
@property (nonatomic, strong) NSNumber* hasPickup;
@property (nonatomic, strong) NSNumber* hasDelivery;

- (void) postGeoCodeLocationApiCallWithParams:(NSMutableDictionary *)params withDelegate:(id) delegateVariable;

@end
