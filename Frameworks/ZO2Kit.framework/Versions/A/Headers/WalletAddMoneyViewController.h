//
//  PaytmAddMoneyViewController.h
//  ZO2Kit
//
//  Created by Anurag Kabra on 19/08/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <ZUIKit/ZUIKit.h>
#import "ZomatoWallet.h"
#import "ZO2Prefix.h"
#import "OnlineOrderingViewController.h"

@protocol WalletAddMoneyViewControllerDelegate <NSObject>

@optional
- (void) payWithWalletWithRechargeAmount:(NSNumber *)rechargeAmountLocal andWallet:(ZomatoWallet *)wallet;

@optional
- (void) walletInvalid;

@end

typedef enum {
    RECHARGE_MODE_NEW = 0,
    RECHARGE_MODE_WITH_ORDER = 1,
} RECHARGE_MODE;

@interface WalletAddMoneyViewController : ZUIBaseViewController

- (id) initWithWallet: (ZomatoWallet *)walletLocal;
- (id) initWithMainVC:(OnlineOrderingViewController *)mainVCLocal andAmount:(NSNumber *)amount andWallet:(ZomatoWallet *)walletLocal;

@property (nonatomic) RECHARGE_MODE rechargeMode;
@property (nonatomic, weak) OnlineOrderingViewController *mainVC;

@property (nonatomic, weak) id<WalletAddMoneyViewControllerDelegate> delegate;

@end
