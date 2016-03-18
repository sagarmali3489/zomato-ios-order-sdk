//
//  AgeObject.h
//  ZO2Kit
//
//  Created by Anurag Kabra on 05/11/15.
//  Copyright © 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <ZMTApiManageriOS/ZMTApiManageriOS.h>

@interface AgeObject : ZomatoObject

@property (nonatomic, strong) NSNumber *ageLimit;
@property (nonatomic, strong) NSString *instructionText;
@property (nonatomic, strong) NSString *invalidText;
@property (nonatomic, strong) NSString *validText;

@end
