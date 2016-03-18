//
//  GetUUIDForNewUser.h
//  ZModelsKit
//
//  Created by Zeno Saviour Marsalin on 09/10/15.
//  Copyright © 2015 Zomato. All rights reserved.
//

#import "ZO2Prefix.h"

@protocol  GetUUIDForNewUserDelegate <NSObject>

@optional
-(void) fetchingUUIDSuccessfull;

@optional
-(void) fetchingUUIDFailedWithError:(NSError *)error;

@end

@interface GetUUIDForNewUser : ZomatoObject

@property (nonatomic,weak) id<GetUUIDForNewUserDelegate> delegateVariable;
@property (nonatomic,strong) NSString *status;
@property (nonatomic,strong) NSString *uuid;
@property (nonatomic,strong) NSString *message;
@property (nonatomic) BOOL isLoading;
-(void) getUUIDWithDelegate:(id<GetUUIDForNewUserDelegate>)delegate;
@end
