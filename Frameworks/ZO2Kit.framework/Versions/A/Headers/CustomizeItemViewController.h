//
//  CustomizeItemViewController.h
//  Zomato
//
//  Created by Nikunj on 11/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "OnlineOrderingModalBaseViewController.h"
#import "OnlineOrderingViewController.h"
#import "DeliveryItem.h"
#import "OnlineOrderingDelegates.h"

@class OnlineOrderingViewController;

@interface CustomizeItemViewController : OnlineOrderingModalBaseViewController

@property (nonatomic, weak) OnlineOrderingViewController *mainVC;
@property (nonatomic, weak) id<OnlineOrderingDelegate> delegateVariable;
- (id) initWithDeliveryItem:(DeliveryItem *)deliveryItemLocal withDelegate:(id<OnlineOrderingDelegate>)delegate withMainVC:(OnlineOrderingViewController *)mainVCLocal;

@end
