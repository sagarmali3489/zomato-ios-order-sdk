//
//  PaymentTypeObject.h
//  ZO2Kit
//
//  Created by Anurag Kabra on 09/08/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <ZMTApiManageriOS/ZMTApiManageriOS.h>
#import "ZO2Prefix.h"

@interface PaymentTypeObject : ZomatoObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *rightLabelText;
@property (nonatomic, strong) NSNumber *isEnabled;
@property (nonatomic) PAYMENT_TYPE paymentTypeEnum;
@property (nonatomic) NSString * paymentTypeString;

@end
