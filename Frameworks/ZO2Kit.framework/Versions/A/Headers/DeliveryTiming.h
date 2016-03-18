//
//  DeliveryTiming.h
//  Zomato
//
//  Created by Nikunj on 10/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <ZMTApiManageriOS/ZMTApiManageriOS.h>


@interface DeliveryTiming : ZomatoObject

@property (nonatomic, strong) NSString *day;
@property (nonatomic, strong) NSString *time;
@property (nonatomic, strong) NSNumber *dayOfTheWeek;

@end
