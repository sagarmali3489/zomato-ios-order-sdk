//
//  LinkWallet.h
//  ZO2Kit
//
//  Created by Anurag Kabra on 05/08/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <ZMTApiManageriOS/ZMTApiManageriOS.h>
#import "ZomatoWallet.h"

@protocol  LinkWalletDelegate<NSObject>

@optional
- (void) walletLinkedSuccessfully;

@optional
- (void) WalletLinkeingFailedWithError:(NSError *)error;

@end

@interface LinkWallet : ZomatoObject

@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) NSString *message;
@property (nonatomic, strong) ZomatoWallet *wallet;

@property (nonatomic) BOOL isLoading;

@property (nonatomic, strong) id<LinkWalletDelegate> delegateVariable;

- (void) linkWalletWithAuthID:(NSString *)authID authCode:(NSString *)authCode andDelegate:(id<LinkWalletDelegate>)delegate;

@end
