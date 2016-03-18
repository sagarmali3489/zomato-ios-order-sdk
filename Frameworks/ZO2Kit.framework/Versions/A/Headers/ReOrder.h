//
//  ReOrder.h
//  Zomato
//
//  Created by Nikunj on 26/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//


#import "PlaceOrderTab.h"
#import "GetPaymentMethods.h"

@protocol ReOrderTabDelegate <NSObject>

@optional
- (void) reOrderTabFetchedSuccessfully;

@optional
- (void) reOrderTabFetchingFailedWithError:(NSError *)error;

@end

@interface ReOrder : ZomatoObject

@property (nonatomic, weak) id<ReOrderTabDelegate> delegateVariable;
@property (nonatomic, strong) PlaceOrderTab *tab;
@property (nonatomic, strong) NSNumber *code;
@property (nonatomic, strong) NSString *message;
@property (nonatomic, strong) GetPaymentMethods *getPaymentMethodsObject;

- (void) reOrderTabWithTabId:(NSString *)tabId withDelegate:(id<ReOrderTabDelegate>)delegate mode:(NSString *)mode;

@end
