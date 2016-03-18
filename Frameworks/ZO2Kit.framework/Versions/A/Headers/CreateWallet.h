//
//  CreatePaytmWallet.h
//  ZO2Kit
//
//  Created by Anurag Kabra on 05/08/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <ZMTApiManageriOS/ZMTApiManageriOS.h>


@protocol CreateWalletDelegate <NSObject>

@optional
- (void) walletCreatedSuccessfully;

@optional
- (void) walletCreattionFailedWithError:(NSError *)error;

@end

@interface CreateWallet : ZomatoObject

@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) NSString *message;
@property (nonatomic, strong) NSString *authReferencID;
@property (nonatomic, strong) NSString *phone;
@property (nonatomic, strong) NSString *email;
@property (nonatomic, strong) NSNumber *walletID;
@property (nonatomic) BOOL isLoading;

@property (nonatomic, strong) id<CreateWalletDelegate> delegateVariable;

- (void) createWalletForWalletType:(NSString *)walletType withDelegate:(id<CreateWalletDelegate>)delegate;

@end
