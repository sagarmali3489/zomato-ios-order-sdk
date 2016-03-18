//
//  O2MainHandler.h
//  delivery
//
//  Created by Nikunj on 22/05/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GetO2Config.h"

@interface O2MainHandler : NSObject

+ (O2MainHandler *)sharedInstance;

- (void) doWork;

@end
