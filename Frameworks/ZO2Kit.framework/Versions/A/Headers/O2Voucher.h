//
//  Voucher.h
//  delivery
//
//  Created by Nikunj on 06/05/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//

#import <ZMTApiManageriOS/ZMTApiManageriOS.h>

@interface O2Voucher : ZomatoObject

@property (nonatomic, strong) NSString *code;
@property (nonatomic, strong) NSString *voucherDescription;
@property (nonatomic, strong) NSNumber *discountAmount;
@property (nonatomic, strong) NSNumber *discountPercentage;
@property (nonatomic, strong) NSString *discountType;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *displayText;
@property (nonatomic, strong) NSNumber *couponLineId;

@end
