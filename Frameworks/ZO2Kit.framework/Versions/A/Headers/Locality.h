//
//  Locality.h
//  delivery
//
//  Created by Nikunj on 18/05/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//


#import "ZO2Prefix.h"

@interface Locality : ZomatoObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSMutableArray *subLocalitiesArray;

@end
