//
//  OrderDetailsTableView.h
//  Zomato
//
//  Created by Nikunj on 24/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//


#import "PlaceOrderTab.h"
#import <ZO2Prefix.h>

@interface OrderDetailsTableView : ZUITableView <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, strong) PlaceOrderTab *placeOrderTab;
- (id) initWithFrame:(CGRect)frame andPlaceOrderTab:(PlaceOrderTab *)orderTabLocal;

@end
