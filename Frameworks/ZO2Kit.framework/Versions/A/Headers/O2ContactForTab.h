//
//  ContactForTab.h
//  Zomato
//
//  Created by Praagya Joshi on 28/11/14.
//  Copyright (c) 2014 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <ZMTApiManageriOS/ZMTApiManageriOS.h>

@protocol O2ContactForTabDelegate <NSObject>

@required
- (void) contactForTabCallSuccessful;

@required
- (void) contactForTabCallFailed;

@end

@interface O2ContactForTab : ZomatoObject

@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSString *data;
@property (nonatomic, strong) NSString *phoneNumber;
@property (nonatomic, strong) NSString *tabID;
@property (nonatomic, strong) NSString *status;
@property (nonatomic, weak) id<O2ContactForTabDelegate> delegate;

- (void) makeContactForTabCallForDelegate: (id<O2ContactForTabDelegate>) contactTabDelegate;

@end
