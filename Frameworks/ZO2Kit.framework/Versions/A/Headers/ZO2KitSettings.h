//
//  ZO2KitSettings.h
//  ZO2Kit
//
//  Created by Nikunj on 22/07/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ZUIKit/ZUIKit.h>

typedef NS_ENUM(NSInteger, O2AppType) {
    O2AppTypeConsumer,
    O2AppTypeCake,
    O2AppTypeDelivery,
    O2AppTypeExternalSDK
};

@protocol ZO2KitDelegate <NSObject>

@optional
- (void) addViewToWindow:(UIView *)view;

@optional
- (void) activeOrdersCountChanged:(NSInteger)count;

@optional
- (BOOL) presentViewController:(UIViewController *)viewControllerToPresent;

@optional
- (void) pushNotificationViewControllerToNavigationController:(UINavigationController *)navController;
- (BOOL) dontProceedAndShowLoginIfGuest;

@optional
- (void) postLocationCoordinatesReceivedNotification;

@optional
- (BOOL) shouldOpenKonotorFeedbackScreen;

@optional
- (BOOL) showLoginViewControllerIfLoggedInAsGuest:(NSString*)pageType;

@optional
- (BOOL) isLoggedInAsGuest;

@optional
- (BOOL) isLoggedIn;
@end

@interface ZO2KitSettings : NSObject

+ (void) setZO2KitDelegate:(id<ZO2KitDelegate>)delegate;
+ (id<ZO2KitDelegate>) getZO2KitDelegate;

+ (O2AppType) getAppType;
+ (void) setAppType:(O2AppType)appType;

@end
