//
//  FilterFourButtonTableViewCell.h
//  delivery
//
//  Created by Nikunj on 21/05/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//


#import "ZO2Prefix.h"

#define BUTTON_HEIGHT       40

@interface FilterFourButtonTableViewCell : ZUITableViewCell

- (id) initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier withParamsArray:(NSArray *)paramsArrayLocal withHeaderText:(NSString *)headerTextLocal;
+ (CGFloat) getCellHeight;

@end