//
//  ZMTApiManagerCommonFunctions.h
//  ZMTApiManageriOS
//
//  Created by Nikunj on 30/06/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//

#import "ZomatoObject.h"

#define SHOULD_USE_SSL_CERTIFICATE   @"zmtapimanagerios_should_use_ssl_certificate"
#define NOTIFICATION_TO_INVALIDATE_SSL_CERTIFICATE  @"zmtapimanagerios_notification_to_invalidate_ssl_certificate"

@interface ZMTApiManagerCommonFunctions : ZomatoObject

+ (BOOL) isPushPermissionGiven;
+ (NSDictionary *) getDefaultRequestParams;
+ (NSString *) getUserAgent;
+ (NSString *) getQueryStringFromDictionary:(NSDictionary *)dictionary;
+ (NSString *) getNetworkType;

@end
