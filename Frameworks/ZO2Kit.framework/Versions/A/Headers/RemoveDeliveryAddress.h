//
//  RemoveDeliveryAddress.h
//  Zomato
//
//  Created by Nikunj on 18/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <ZMTApiManageriOS/ZMTApiManageriOS.h>


@protocol RemoveDeliveryAddressDelegate <NSObject>

@optional
- (void) deliveryAddressRemovedSuccessfully;

@optional
- (void) deliveryAddressRemovingFailedWithError:(NSError *)error;

@end

@interface RemoveDeliveryAddress : ZomatoObject

@property (nonatomic , strong) NSString *message;
@property (nonatomic , strong) NSString *status;

@property (nonatomic, weak) id<RemoveDeliveryAddressDelegate> delegateVariable;
- (void) removeAddressWithAddressId:(NSNumber *)addressId withDelegate:(id<RemoveDeliveryAddressDelegate>)delegate;

@end
