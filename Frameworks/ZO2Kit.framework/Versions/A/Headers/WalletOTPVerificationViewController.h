//
//  PayTMOTPVerificationViewController.h
//  ZO2Kit
//
//  Created by Anurag Kabra on 05/08/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <ZUIKit/ZUIKit.h>
#import "ZomatoWallet.h"
#import "OnlineOrderingViewController.h"

@protocol WalletOTPVerificationViewControllerDelegate <NSObject>
@optional
- (void) walletLinkedSuccessfullyWithWallet:(ZomatoWallet *)wallet;

@end

@interface WalletOTPVerificationViewController : ZUIBaseViewController

@property (nonatomic, weak) id<WalletOTPVerificationViewControllerDelegate> delegate;
@property (nonatomic, weak) OnlineOrderingViewController *mainVC;

- (id)initWithMainVC:(OnlineOrderingViewController *)mainVCLocal walletDisplayText:(NSString *)walletDisplayTextLocal andWalletType:(NSString *)walletTypeLocal;

@end
