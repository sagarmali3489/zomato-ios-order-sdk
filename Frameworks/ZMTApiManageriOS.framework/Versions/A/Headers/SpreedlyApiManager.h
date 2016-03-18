//
//  SpreedlyApiManager.h
//  Zomato
//
//  Created by Praagya Joshi on 07/10/14.
//  Copyright (c) 2014 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZMTAFNetworking.h"

@protocol SpreedlyAPIManagerDelegate <NSObject>

@required
- (void) didFetchObjects: (id) objects ForClass: (Class) klass withInitialParams: (NSDictionary *) params;

@required
- (void) didFailForClass: (Class) klass withError: (NSError *) error andInitialParams: (NSDictionary *) dictionary;

@end

@interface SpreedlyApiManager : NSObject

@property (strong, nonatomic) ZMTAFHTTPSessionManager *apiManager;

+ (SpreedlyApiManager *) sharedApiManager;

//function to send post request with only post parameters, also no need to send access token and client id in post parameters
- (void)postRequestForClass:(Class)Klass WithPostParameters:(NSDictionary *)postParams andRetryCount:(NSInteger)retryCount withDelegate:(id)callbackDelegate;

@end
