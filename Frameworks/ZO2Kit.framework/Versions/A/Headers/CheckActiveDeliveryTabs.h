//
//  CheckActiveDeliveryTabs.h
//  Zomato
//
//  Created by Nikunj on 18/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//


#import "PlaceOrderTab.h"

typedef void(^CompletionHandler)(NSError *error, NSArray *activeOrdersArray);

@interface CheckActiveDeliveryTabs : ZomatoObject

@property (nonatomic, strong) NSMutableArray *activeTabsArray;
@property (nonatomic, strong) NSMutableArray *unratedTabsArray;
@property (nonatomic, strong) CompletionHandler completionHandler;

+ (CheckActiveDeliveryTabs *)sharedInstance;
- (void) storeDeliveryTab: (PlaceOrderTab *) tabObj;
- (void) refreshActiveTabs;
- (void) sendPingCall;

- (BOOL) isCallRunning;
- (NSArray *) getActiveOrdersArray;

@end
