//
//  cancelTransaction.h
//  ZO2Kit
//
//  Created by Zeno Saviour Marsalin on 15/10/15.
//  Copyright © 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <ZMTApiManageriOS/ZMTApiManageriOS.h>
#import "OnlineOrderingFunctions.h"

@protocol CancelTransactionForTrackIdDelegate <NSObject>

@optional
- (void) cancelTransactionSuccessfull;

@optional
- (void) cancelTransactionFailedWithError:(NSError *)error;

@end

@interface CancelTransaction : ZomatoObject

@property (nonatomic, weak)  id<CancelTransactionForTrackIdDelegate> delegateVariable;
@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) NSString *trackId;
- (void) cancelTransactionWithDelegate:(id<CancelTransactionForTrackIdDelegate>)delegate withTrackId:(NSString *)trackId;

@end
