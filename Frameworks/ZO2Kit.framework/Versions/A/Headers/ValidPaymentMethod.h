//
//  ValidPaymentMethod.h
//  delivery
//
//  Created by Anurag Kabra on 11/05/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//

#import <ZMTApiManageriOS/ZMTApiManageriOS.h>
#import "ZomatoWallet.h"

@interface ValidPaymentMethod : ZomatoObject

@property (strong, nonatomic) NSString* type;
@property (strong, nonatomic) NSNumber* status;
@property (strong, nonatomic) NSString* message;
@property (strong, nonatomic) NSNumber* visible;
@property (strong, nonatomic) NSString* displayText;
@property (strong, nonatomic) NSString* paymentCategory;
@property (strong, nonatomic) NSNumber* isRechargeAvailable;
@property (strong, nonatomic) ZomatoWallet *wallet;
@property (strong, nonatomic) NSString* imageURL;

@end
