//
//  SelectDeliveryAddressViewController.h
//  Zomato
//
//  Created by Nikunj on 13/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "OnlineOrderingModalBaseViewController.h"
#import "DeliveryItem.h"
#import "OnlineOrderingDelegates.h"
#import "OnlineOrderingViewController.h"

@protocol SelectDeliveryAddressDelegate <NSObject>

@optional
- (void) deliveryAddressChanged:(DeliveryAddress *)deliveryAddress;

@optional
- (void) cancelPressedOnDeliveryAddressVC;

@end

@interface SelectDeliveryAddressViewController : ZUIBaseViewController

@property (nonatomic, weak) id<SelectDeliveryAddressDelegate> delegate;
@property (nonatomic, weak) OnlineOrderingViewController *mainVC;
@property (nonatomic, strong) GetUserAddresses *userAddressesApiObject;
@property (nonatomic) BOOL shouldSetDataInMainVC;

-(id) initWithResId:(NSNumber *)resId;
-(id) initWithMainVC:(OnlineOrderingViewController *)mainVCLocal showAlertMessage:(BOOL)showAlert;
-(id) initWithMainVC:(OnlineOrderingViewController *)mainVCLocal shouldSetDataInMainVC:(BOOL)shouldSetDataInMainVC;

@end
