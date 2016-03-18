//
//  GoogleLocation.h
//  delivery
//
//  Created by Anurag Kabra on 23/06/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//

#import <ZMTApiManageriOS/ZMTApiManageriOS.h>

@interface GoogleLocation : ZomatoObject

@property (nonatomic, strong) NSString* type;
@property (nonatomic, strong) NSString* name;
@property (nonatomic, strong) NSString* fullName;
@property (nonatomic, strong) NSNumber* cityId;
@property (nonatomic, strong) NSString* latitude;
@property (nonatomic, strong) NSString* longitude;
@property (nonatomic, strong) NSNumber *isRestaurantDelivers;

@end
