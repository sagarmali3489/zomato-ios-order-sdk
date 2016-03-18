//
//  RestaurantNoDeliverViewController.h
//  Zomato
//
//  Created by Nikunj on 25/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "ZO2Prefix.h"

#import "OnlineOrderingModalBaseViewController.h"

@interface RestaurantNoDeliverViewController : OnlineOrderingModalBaseViewController

- (id) initWithResId:(NSNumber *)resIdLocal withShowPlaceNewOrder:(BOOL) showPlaceNewOrderLocal withCustomText:(NSString *)customTextLocal;

@end
