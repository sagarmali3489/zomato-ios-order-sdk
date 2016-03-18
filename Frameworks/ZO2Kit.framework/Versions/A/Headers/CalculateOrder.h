//
//  PlaceOrder.h
//  Zomato
//
//  Created by Nikunj on 13/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//


#import "PlaceOrderTab.h"

@protocol CalculateOrderDelegate <NSObject>

@optional
- (void) orderCalculatedSuccessfully;

@optional
- (void) orderCalculatingFailedWithError:(NSError *)error;

@end

@interface CalculateOrder : ZomatoObject

@property (nonatomic) BOOL isLoading;
@property (nonatomic, strong) PlaceOrderTabOrder *order;
@property (nonatomic, strong) NSMutableArray *toShowItemsArray;
@property (nonatomic, strong) NSNumber *resId;
@property (nonatomic, strong) NSString *deliveryMode;
@property (nonatomic , strong) NSString *orderJson;
@property (nonatomic, strong) NSMutableArray *dishesArray;
@property (nonatomic) BOOL isSuccessful;
@property (nonatomic , strong) NSString *message;
@property (nonatomic , strong) NSString *status;
@property (nonatomic , strong) NSNumber *code;
@property (nonatomic , strong) NSNumber *addressID;
@property (nonatomic , strong) NSString *dominosAuthKey;

@property (nonatomic, weak) id<CalculateOrderDelegate> delegateVariable;
- (void) calculateOrderWithDelegate:(id<CalculateOrderDelegate>)delegate withPlaceOrdersArray:(NSArray *)orderItemsArray withResId:(NSNumber *)resId andDeliveryMode:(NSString *)delvieryMode addressID:(NSNumber *)addressID  dominosAuthKey:(NSString *)dominosAuthKey;

@end
