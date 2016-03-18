//
//  RemoveWallet.h
//  ZO2Kit
//
//  Created by Anurag Kabra on 06/08/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <ZMTApiManageriOS/ZMTApiManageriOS.h>

@protocol  RemoveWalletDelegate<NSObject>

@optional
- (void) walletRemovedSuccessfully;

@optional
- (void) walletRemovingFailedWithError:(NSError *)error;

@end

@interface RemoveWallet : ZomatoObject

@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) NSString *message;

@property (nonatomic) BOOL isLoading;

@property (nonatomic, strong) id<RemoveWalletDelegate> delegateVariable;

- (void) removeWalletWithWalletID:(NSNumber *)walletID andDelegate:(id<RemoveWalletDelegate>)delegate;

@end
