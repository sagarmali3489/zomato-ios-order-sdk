//
//  ChooseGroupItemViewController.h
//  Zomato
//
//  Created by Nikunj on 11/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "OnlineOrderingModalBaseViewController.h"
#import "DeliveryItem.h"
#import "OnlineOrderingDelegates.h"
#import "OnlineOrderingViewController.h"

@interface ChooseGroupItemViewController : OnlineOrderingModalBaseViewController

@property (nonatomic, weak) id<OnlineOrderingDelegate> delegateVariable;
@property (nonatomic, weak) OnlineOrderingViewController *mainVC;
- (id) initWithDeliveryGroup:(DeliveryGroup *)deliveryGroupLocal withDelegate:(id<OnlineOrderingDelegate>)delegate withMainVC:(OnlineOrderingViewController *)mainVCLocal;

@end
