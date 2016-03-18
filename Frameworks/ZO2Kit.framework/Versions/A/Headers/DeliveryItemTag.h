//
//  DeliveryItemTag.h
//  Zomato
//
//  Created by Nikunj on 28/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <ZMTApiManageriOS/ZMTApiManageriOS.h>

@interface DeliveryItemTag : ZomatoObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *groupType;
@property (nonatomic, strong) NSNumber *groupId;

@end
