//
//  DeliveryMenuCategory.h
//  Zomato
//
//  Created by Nikunj on 10/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//


#import "DeliveryItem.h"

@interface DeliveryMenuCategory : ZomatoObject

@property (nonatomic) BOOL isExpanded;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSMutableArray *itemsArray;

@end
