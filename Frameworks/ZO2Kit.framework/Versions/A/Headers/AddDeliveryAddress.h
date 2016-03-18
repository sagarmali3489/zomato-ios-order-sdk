//
//  AddDeliveryAddress.h
//  Zomato
//
//  Created by Nikunj on 14/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <ZMTApiManageriOS/ZMTApiManageriOS.h>

#import "DeliveryAddress.h"

@protocol AddDeliveryAddressDelegate <NSObject>

@optional
- (void) deliveryAddressAddedSuccessfully;

@optional
- (void) deliveryAddressAddingFailedWithError:(NSError *)error;

@end

@interface AddDeliveryAddress : ZomatoObject

@property (nonatomic, strong) DeliveryAddress *deliveryAddress;
@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) NSString *message;

@property (nonatomic, weak) id<AddDeliveryAddressDelegate> delegateVariable;
- (void) addAddressWithDelegateVariable:(id<AddDeliveryAddressDelegate>) delegate;
- (id) initWithDeliveryAddress:(DeliveryAddress *)deliveryAddressLocal;

@end
