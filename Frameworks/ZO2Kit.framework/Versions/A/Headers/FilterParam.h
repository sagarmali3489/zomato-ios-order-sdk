//
//  FilterParam.h
//  delivery
//
//  Created by Nikunj on 21/05/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//


#import <ZMTApiManageriOS/ZMTApiManageriOS.h>

@interface FilterParam : ZomatoObject

@property (nonatomic, strong) NSString *filterKey;
@property (nonatomic, strong) NSString *filterValue;
@property (nonatomic, strong) NSString *text;
@property (nonatomic) BOOL isFontIcon;
@property (nonatomic, strong) NSString *fontIcon;
@property (nonatomic) BOOL isSelected;

@end