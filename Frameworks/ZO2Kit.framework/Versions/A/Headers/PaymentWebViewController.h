//
//  PaymentWebViewController.h
//  Zomato-Merchant
//
//  Created by Anurag Kabra on 23/08/14.
//  Copyright (c) 2014 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OnlineOrderingFunctions.h"

@protocol PaymentWebViewControllerDelegate <NSObject>
@optional
-(void)paymentMethodCancelButtonPressed;
-(void)paymentSuccessfullyDone;
-(void)paymentFailedWithMessage:(NSString *)message;

@end
@interface PaymentWebViewController : ZUIBaseViewController

@property (strong, nonatomic) UIActivityIndicatorView *loadingIndicator;
@property (nonatomic, strong) NSMutableURLRequest *urlRequest;
@property (nonatomic, strong) NSString *listenrUrlString;
@property (nonatomic, strong) NSString *headerTitle;
@property (nonatomic, weak) id<PaymentWebViewControllerDelegate> delegate;

- (id) initWithTrackId:(NSString *)trackingIdLocal;

@end
