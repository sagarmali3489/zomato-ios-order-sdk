//
//  ZMTApiManagerSettings.h
//  ZMTApiManageriOS
//
//  Created by Nikunj on 30/06/15.
//  Copyright (c) 2015 Zomato. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZMTApiManagerSettings : NSObject

//client id
+ (void) setClientId:(NSString *)clientId;
+ (NSString *) getClientId;

//api key
+ (void) setApiKey:(NSString *)apiKey;
+ (NSString *) getApiKey;

//debug
+ (void) setDebug:(BOOL)debug;
+ (BOOL) isDebug;

//version number
+ (void) setVersionNumber:(NSString *)versionNumber;
+ (NSString *) getVersionNumber;

//api path
+ (void) setApiPath:(NSURL *)apiPath;
+ (NSURL *) getApiPath;

//uuid
+ (void) setUUID:(NSString *)uuid;
+ (NSString *) getUUID;

//spreedly env key
+ (void) setSpreedlyEnvKey:(NSString *)spreedlyEnvKey;
+ (NSString *) getSpreedlyEnvKey;

//set white label app id
+ (void) setWhiteLabelAppId:(NSString *)whiteLabelAppId;
+ (NSString *) getWhiteLabelAppId;

//set ordering api key
+ (void) setOrderingApiKey:(NSString *)orderingApiKey;
+ (NSString *) getOrderingApiKey;

//set ordering api secret
+ (void) setOrderingApiSecret:(NSString *)orderingApiSecret;
+ (NSString *) getOrderingApiSecret;

//Set WLA Brand Id
+ (void) setWhiteLabelBrandId:(NSString *)whiteLabelBrandId;
+ (NSString *) getWhiteLabelBrandId;

@end
