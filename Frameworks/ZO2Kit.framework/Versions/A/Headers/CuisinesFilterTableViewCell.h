//
//  CuisinesFilterTableViewCell.h
//  delivery
//
//  Created by Nikunj on 25/05/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//



#import "ZO2Prefix.h"

#define CUISINE_CELL_HEIGHT

@interface CuisinesFilterTableViewCell : ZUITableViewCell

+ (CGFloat) getCellHeight;
- (void) setSelectedCuisineName:(NSString *)name;

@end