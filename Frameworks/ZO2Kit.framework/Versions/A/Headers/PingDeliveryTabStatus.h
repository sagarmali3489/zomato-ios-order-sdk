//
//  PingDeliveryTabStatus.h
//  Zomato
//
//  Created by Nikunj on 24/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//



#import <ZMTApiManageriOS/ZMTApiManageriOS.h>

@protocol PingDeliveryTabStatusDelegate <NSObject>

@optional
- (void) pingDeliveryTabStatusCallCompleted;

@optional
- (void) pingDeliveryTabStatusCallFailed;

@end

@interface PingDeliveryTabStatus : ZomatoObject

@property (nonatomic, weak) id<PingDeliveryTabStatusDelegate> delegateVariable;
@property (nonatomic) BOOL isRunning;
@property (nonatomic, strong) NSNumber *nextPollingTime;
@property (nonatomic, strong) NSNumber *continuePolling;
@property (nonatomic, strong) NSMutableArray *pingTabsArray;

- (void) pingDeliveryTabStatusWithDelegate:(id<PingDeliveryTabStatusDelegate>)delegate withTabIdsString:(NSString *)tabIdsString;

@end
