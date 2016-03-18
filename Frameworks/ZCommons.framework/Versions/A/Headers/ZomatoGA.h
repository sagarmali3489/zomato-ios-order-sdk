//
//  ZomatoGA.h
//  Zomato
//
//  Created by Praagya Joshi on 11/02/14.
//  Copyright (c) 2014 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

//#import "GAI.h"
//#import "GAIDictionaryBuilder.h"
//#import "GAIFields.h"

@interface ZomatoGA : NSObject//GAI

//NOTE: constants are defined in Constants.h

//for tracking events
+ (void) trackEventForCategory: (NSString*)categoryName
                        action:(NSString*)actionName
                         label:(NSString*)labelName
                         value:(NSNumber*)numberValue;

//for tracking user timings
+ (void) trackUserTimingsForCategory: (NSString*)categoryName
                     forTimeInterval:(NSNumber*)timeInterval
                             andName:(NSString*)nameString
                            andLabel:(NSString*)labelName;

@end
