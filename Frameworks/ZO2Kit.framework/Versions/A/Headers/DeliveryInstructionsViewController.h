//
//  ConfirmOnlineOrderViewController.h
//  Zomato
//
//  Created by Nikunj on 13/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "OnlineOrderingViewController.h"
#import "SelectDeliveryAddressViewController.h"

@interface DeliveryInstructionsViewController : ZUIBaseViewController <UITextFieldDelegate, SelectDeliveryAddressDelegate>

@property (nonatomic, weak) OnlineOrderingViewController *mainVC;

- (id) initWithMainVC:(OnlineOrderingViewController *)mainVCLocal;

@end
