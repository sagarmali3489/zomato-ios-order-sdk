//
//  Bank.h
//  delivery
//
//  Created by Sudhanshu Shekhar on 5/9/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//

#import <ZMTApiManageriOS/ZMTApiManageriOS.h>

@interface Bank : ZomatoObject

@property (nonatomic, strong) NSNumber *bankId;
@property (nonatomic, strong) NSString *bankCode;
@property (nonatomic, strong) NSString *bankName;
@property (nonatomic, strong) NSNumber *status;
@property (nonatomic, strong) NSNumber *featured;
@property (nonatomic, strong) NSString *createdAt;
@property (nonatomic, strong) NSString *lastUpdated;
@property (nonatomic, strong) NSString *imgName;
//@property (nonatomic, strong) NSString *greyedImgName;

@end
