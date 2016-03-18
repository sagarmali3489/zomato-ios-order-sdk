//
//  ZO2KitHelpers.h
//  delivery
//
//  Created by Nikunj on 21/05/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MessageUI/MessageUI.h>
#import "ZO2Prefix.h"
#import "Restaurant.h"

#define SHOULD_USE_SSL_CERTIFICATE   @"should_use_ssl_certificate"
#define NOTIFICATION_TO_INVALIDATE_SSL_CERTIFICATE  @"notification_to_invalidate_ssl_certificate"


@class Restaurant;

@interface ZO2KitHelpers : NSObject

+ (void) shareViaMailWithViewController : (UIViewController<MFMailComposeViewControllerDelegate> *)presentingViewController message:(NSString *)body;
+ (void) shareViaWhatsAppWithMessage:(NSString *)message;
+ (void) shareViaTwitterWithViewController:(UIViewController *)presentingViewController message:(NSString *)message;
+ (void) shareViaFacebookWithViewController:(UIViewController *)presentingViewController message:(NSString *)message;
+ (void) shareViaSMSWithViewController : (UIViewController<MFMessageComposeViewControllerDelegate> *)presentingViewController message:(NSString *)body;
+ (BOOL)canOpenWhatsapp:(NSString *)message;

+ (void)callRestaurant:(Restaurant *)restaurant;
+ (void)callRestaurant:(Restaurant *)restaurant atPhoneIndex:(NSInteger)index;
+ (void) callRestaurant:(NSNumber*)restaurantID atPhoneNumber:(NSString*)phoneNumber;


+ (void) addLoyaltyHeaderCloseCount;
+ (void) addWalletReferallHeaderCloseCount;
+ (BOOL) shouldShowLoyaltyHeader ;

+(NSString *)getFreindlyCardNameForCardNameType:(NSString *)cardTypeName;

+ (BOOL) shuouldShowNewButtonForLoyalty;
+ (BOOL) shouldShowFirstRunLoyalty;
+ (BOOL) shuouldShowNewButtonForReferalls;
+ (BOOL) shouldShowWalletReferallHeader;

+ (BOOL) canRateDependingOnLastRatedTime;
+ (UIImage *)changeImageToGreyScaleImage:(UIImage *)image;

@end
