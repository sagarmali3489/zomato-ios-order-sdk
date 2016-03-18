//
//  OnlineOrderingSearchTableView.h
//  Zomato
//
//  Created by Arpit Agarwal on 10/03/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OnlineOrderingViewController.h"

@interface OnlineOrderingSearchTableView : ZUITableView<UITableViewDataSource, UITableViewDelegate, OnlineOrderingDelegate>

@property (nonatomic, weak) OnlineOrderingViewController *mainVC;
@property (nonatomic, strong)NSMutableArray *deliveryItemsArray;

- (void) setDeliveryItemsArray:(NSMutableArray *)itemsArrayToSet withSearchText:(NSString *)text;

@end
