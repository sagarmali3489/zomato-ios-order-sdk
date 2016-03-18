//
//  ZomatoWallet.h
//  delivery
//
//  Created by Anurag Kabra on 06/05/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//

#import <ZMTApiManageriOS/ZMTApiManageriOS.h>

@interface ZomatoWallet : ZomatoObject

@property (strong, nonatomic) NSNumber* balance;
@property (strong, nonatomic) NSString* currency;
@property (strong, nonatomic) NSString* currencyAffix;
@property (strong, nonatomic) NSNumber* userID;
@property (strong, nonatomic) NSNumber *countryID;
@property (strong, nonatomic) NSString* lastUpdated;
@property (strong, nonatomic) NSString* balanceDisplay;
@property (strong, nonatomic) NSString* type;
@property (strong, nonatomic) NSString* assosiatedPhoneNumber;
@property (strong, nonatomic) NSNumber* maxRechargeAmount;
@property (strong, nonatomic) NSString *displayText;
@property (strong, nonatomic) NSString *imageURL;

@end
