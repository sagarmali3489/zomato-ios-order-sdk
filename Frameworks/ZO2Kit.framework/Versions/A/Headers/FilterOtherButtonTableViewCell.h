//
//  FilterOtherButtonTableViewCell.h
//  delivery
//
//  Created by Nikunj on 21/05/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//


#import "ZO2Prefix.h"

#import <ZO2Kit/FilterParam.h>

@interface FilterOtherButtonTableViewCell : ZUITableViewCell

- (id) initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier;
+ (CGFloat) getCellHeight;
- (void) setFilterParam:(FilterParam *)filterParamLocal;

@end