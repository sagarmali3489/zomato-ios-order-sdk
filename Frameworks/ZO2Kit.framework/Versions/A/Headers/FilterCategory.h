//
//  FilterCategory.h
//  delivery
//
//  Created by Nikunj on 02/06/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//


#import "FilterParam.h"

@interface FilterCategory : ZomatoObject

@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) NSMutableArray *filterParamsArray;

@end
