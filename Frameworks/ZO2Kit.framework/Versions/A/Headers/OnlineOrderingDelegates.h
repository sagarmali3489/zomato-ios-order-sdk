
//
//  OnlineOrderingDelegates.h
//  Zomato
//
//  Created by Nikunj on 11/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol OnlineOrderingDelegate <NSObject>

@optional
- (void) addItem:(DeliveryItem *)toAddDeliveryItem;

@optional
- (void) groupCustomized:(DeliveryGroup *)deliveryGroup;

@optional
- (void) addItemClicked:(DeliveryItem *)deliveryItem;

@end

@interface OnlineOrderingDelegates : NSObject

@end
