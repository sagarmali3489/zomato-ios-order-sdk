//
//  FilterStackButtonTableViewCell.h
//  delivery
//
//  Created by Nikunj on 25/05/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//


#import "ZO2Prefix.h"

@interface FilterSortButtonTableViewCell : ZUITableViewCell

- (id) initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier withParamsArray:(NSArray *)paramsArrayLocal withHeaderText:(NSString *)headerTextLocal;
+ (CGFloat) getCellHeightWithParamsArray:(NSArray *)paramsArray;

@end