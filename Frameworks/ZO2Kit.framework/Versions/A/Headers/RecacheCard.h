//
//  RecacheCard.h
//  delivery
//
//  Created by Praagya Joshi on 07/05/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//


#import <ZMTApiManageriOS/ZMTApiManageriOS.h>
#import "O2UserCreditCard.h"

@protocol RecacheCardDelegate <NSObject>

@required
- (void) recacheCardCallSuccessful;

@required
- (void) recacheCardCallFailed;

@end

@interface RecacheCard : ZomatoObject <NSURLConnectionDelegate, NSXMLParserDelegate>

@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) NSString *message;
@property (nonatomic, strong) NSString *succeeded;

@property (nonatomic, strong) NSString *cardCVV;
@property (nonatomic, strong) NSString *cardToken;

@property (nonatomic, weak) id<RecacheCardDelegate> delegate;

- (void) recacheCardWithDelegate: (id<RecacheCardDelegate>) recacheCardDelegate;

@end
