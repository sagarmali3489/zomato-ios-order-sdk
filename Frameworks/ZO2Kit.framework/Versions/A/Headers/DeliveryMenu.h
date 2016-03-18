//
//  DeliveryMenu.h
//  Zomato
//
//  Created by Nikunj on 10/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//


#import "DeliveryMenuCategory.h"

@interface DeliveryMenu : ZomatoObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic) BOOL isAnyDishVegOrNonVeg;
@property (nonatomic, strong) NSMutableArray *categoriesArray;

@end
