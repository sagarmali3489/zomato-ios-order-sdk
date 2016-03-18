//
//  ZMTApiManager.h
//  Zomato
//
//  Created by Udit Gupta on 24/06/14.
//  Copyright (c) 2014 Zomato Media Pvt. Ltd. All rights reserved.
//


#import "ZMTAFNetworking.h"

@protocol ZMTApiManagerInitializerDelegate <NSObject>

@required
- (NSDictionary *) getDefaultGetParamsForEachApiCall;

@required
- (NSString *) getAccessToken;

@required
- (NSString *) getDeviceId;

@optional
- (NSString *) getJumboSessionId;

@end

@protocol ZMTAPIManagerDelegate <NSObject>

@required
- (void)didFetchObjects:(id)objects ForClass:(Class)klass withInitialParams:(NSDictionary *)params;

@required
- (void) didFailForClass:(Class) klass withError:(NSError *) error andInitialParams:(NSDictionary *)dictionary;

@end

@interface ZMTApiManager : NSObject

@property (strong, nonatomic) ZMTAFHTTPSessionManager *apiManager;
@property (nonatomic, weak) id<ZMTApiManagerInitializerDelegate> initializerDelegate;

/**
 *  consumer shared api manager
 *
 *  @return ZMTApiManager
 */
+ (ZMTApiManager *)sharedApiManager;

//initialize
- (void) initialize;

//function to send get request where get parameters are in params
- (void)getRequestForClass:(Class)Klass WithParameters:(NSDictionary *)params andRetryCount:(NSInteger)retryCount withDelegate:(id)callbackDelegate;

//function to send post request with only post parameters, also no need to send access token and client id in post parameters
- (void)postRequestForClass:(Class)Klass WithPostParameters:(NSDictionary *)postParams andRetryCount:(NSInteger)retryCount withDelegate:(id)callbackDelegate;

//function to send post request with both post parameters and get parameters, also no need to send access token and client id in post parameters
- (void)postRequestForClass:(Class)Klass WithPostParameters:(NSDictionary *)postParams withGetParameters:(NSDictionary *)getParams andRetryCount:(NSInteger)retryCount withDelegate:(id)callbackDelegate;

/*function to post images/review*/
- (void)postRequestForClass:(Class)Klass WithPostParameters:(NSDictionary *)postParams withGetParameters:(NSDictionary *)getParams andImageDictionary:(NSDictionary *)imageDictionary andRetryCount:(NSInteger)retryCount withDelegate:(id)callbackDelegate;

/*Cancel upload of photos/reviews*/
- (void) cancelRequestForClass:(Class) klass withParams:(NSMutableDictionary *) params;

/*Checking whether upload of photos/reviews running*/
- (BOOL) isRequestRunning: (NSString *) matchString;

//function to cancel all requests for class
- (void) cancelAllRequestsForClass:(Class)klass;

//to invalidate access token
- (void) invalidateAccessToken;

//get default get params send in each api call
- (NSMutableDictionary *) getDefaultParams;

//get base url for each api call
- (NSURL *) getBaseUrl;

//get default headers
- (NSDictionary *) defaultHeaders;

//set data
+ (void) setClientId:(NSString *)clientId;
+ (void) setApiKey:(NSString *)apiKey;
+ (void) setDebug:(BOOL)debug;
+ (void) setVersionNumber:(NSString *)versionNumber;
+ (void) setApiPath:(NSURL *)apiPath;
+ (void) setUUID:(NSString *)uuid;
+ (void) setSpreedlyEnvKey:(NSString *)spreedlyEnvKey;
+ (void) setWhiteLabelAppId:(NSString *)whiteLabelAppId;
+ (void) setOrderingApiKey:(NSString *)orderingApiKey;
+ (void) setWhiteLabelBrandId:(NSString *)whiteLabelBrandId;
+ (void) setOrderingApiSecret:(NSString *)orderingApiSecret;

- (NSDictionary *) getAccessTokenDict;

@end
