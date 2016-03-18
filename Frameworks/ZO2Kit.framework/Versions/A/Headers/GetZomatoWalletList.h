//
//  GetZomatoWalletList.h
//  delivery
//
//  Created by Sudhanshu Shekhar on 5/6/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//


#import "ZomatoWallet.h"

@class GetZomatoWalletList;

@protocol GetZomatoWalletListDelegate <NSObject>

@optional
- (void) zomatoWalletListLoadedSuccessfully:(GetZomatoWalletList *)walletListObject;

@optional
- (void) zomatoWalletListLoadingFailedWithError:(NSError *)error;

@end

@interface GetZomatoWalletList : ZomatoObject

@property (nonatomic, weak) id<GetZomatoWalletListDelegate> delegateVariable;
@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) NSNumber *hasMore;
@property (nonatomic, strong) NSMutableArray *walletArray;
@property (nonatomic, strong) NSMutableArray *transactionHistoryArray;
@property (nonatomic) BOOL isLoading;
@property (nonatomic, strong) NSNumber *isMore;
@property (nonatomic) NSNumber *nextPage;

@property (nonatomic, strong) ZomatoWallet *zomatoWallet;


- (void) getZomatoWalletsAndCityID:(NSNumber *)cityID WithDelegate:(id<GetZomatoWalletListDelegate>)delegate;
- (void) getZomatoWalletsAndCityID:(NSNumber *)cityID WithDelegate:(id<GetZomatoWalletListDelegate>)delegate andWalletID:(NSNumber *)walletID;

- (void) getZomatoWalletsAndPaymentHistoryWithDelegate:(id<GetZomatoWalletListDelegate>)delegate withShouldFetchFromStart:(BOOL)fetchFromStart andCityID:(NSNumber *)cityID ;

@end
