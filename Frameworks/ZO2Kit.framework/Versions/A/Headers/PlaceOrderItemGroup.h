//
//  PlaceOrderItemGroup.h
//  Zomato
//
//  Created by Nikunj on 13/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//


#import "DeliveryGroup.h"

@interface PlaceOrderItemGroup : ZomatoObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *label;
@property (nonatomic, strong) NSMutableArray *itemsArray;

+ (NSDictionary *)dictionaryWithDeliveryGroup:(DeliveryGroup *)deliveryGroup;
- (NSDictionary *)convertSelfToDictWithItems;
- (id) initWithDeliveryGroup:(DeliveryGroup *)deliveryGroup;

@end
