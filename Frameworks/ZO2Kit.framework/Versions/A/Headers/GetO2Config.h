//
//  GetO2Config.h
//  Zomato
//
//  Created by Nikunj on 27/05/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "ZO2Prefix.h"

@interface GetO2Config : ZomatoObject

@property (nonatomic, strong) NSNumber *isUserBlocked;
@property (nonatomic, strong) NSNumber *isLoyaltyEnabled;
@property (nonatomic, strong) NSNumber *isReferralsEnabled;
@property (nonatomic, strong) NSNumber *shouldShowO2Banner;
@property (nonatomic, strong) NSNumber *unreadNotifications;
@property (nonatomic, strong) NSString *chatHeader;

- (void) sendApiCall;

@end
