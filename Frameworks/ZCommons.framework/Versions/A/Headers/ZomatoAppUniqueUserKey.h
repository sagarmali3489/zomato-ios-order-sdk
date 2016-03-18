//
//  ZomatoAppUniqueUserKey.h
//  Zomato
//
//  Created by Arup Saha on 16/06/12.
//  Copyright (c) 2012 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#define SERVICE @"ZomatoKeyChainService"
@interface ZomatoAppUniqueUserKey : NSObject
+(NSString *) getUniqueUserKey;
@end
