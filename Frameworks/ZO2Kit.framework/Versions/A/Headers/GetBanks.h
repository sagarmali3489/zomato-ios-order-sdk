//
//  GetBanks.h
//  delivery
//
//  Created by Sudhanshu Shekhar on 5/9/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//


#import "Bank.h"

@protocol GetBanksWithDelegate <NSObject>

@optional
- (void) banksLoadedSuccessfully;

@optional
- (void) banksLoadingFailedWithError:(NSError *)error;

@end

@interface GetBanks : ZomatoObject

@property (nonatomic, weak) id<GetBanksWithDelegate> delegateVariable;
@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) NSNumber *hasMore;
@property (nonatomic, strong) NSMutableArray *featuredBanksArray;
@property (nonatomic, strong) NSMutableArray *moreBanksArray;
@property (nonatomic, strong) NSMutableArray *remainingBanksArray;
@property (nonatomic) BOOL isLoading;

- (void) getBanksWithDelegate:(id<GetBanksWithDelegate>)delegate;

@end
