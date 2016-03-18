//
//  OrderDetailsStatusTableViewCell.h
//  delivery
//
//  Created by Nikunj on 12/05/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//

#import "ZO2Prefix.h"

@interface OrderDetailsStatusTableViewCell : ZUITableViewCell

- (void) setTab:(PlaceOrderTab *)tabLocal;
+ (CGFloat) calculateHeightWithtab:(PlaceOrderTab *)tabLocal ;
@end
