//
//  ZCommonsCommonFunctions.h
//  ZCommons
//
//  Created by Nikunj on 21/07/15.
//  Copyright (c) 2015 Zomato. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreGraphics/CoreGraphics.h>


//////////////////to be removed //////////////////////////////////////
//
//  ZMTColors.h
//  delivery
//
//  Created by Nikunj on 28/04/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//

#import <Foundation/Foundation.h>

#define ZHL                 0xfaf8f8
#define ZHL1                0xEDEDED
#define ZHL2                0xE7E7E7
#define ZHL_DARK            0xE4E4E4
#define ZHL_DARKER          0xCBCBC8
#define ZHL_DARKEST         0x9A9A9A

#define ZDHL                0x333645
#define ZDHL2               0x4D4D4D
#define ZDHL3               0x5D5D5D
#define ZDHL4               0x6D6D6D
#define ZDHL5               0x7D7D7D
#define ZDHL6               0x8D8D8D

#define ZDARK               0x333645
#define ZDARK_iOS           0x1a1a19
#define GOOGLE_COLOR        0xdd4b39
#define GOOGLE_COLOR_FEEDBACK        0xcb4231

//app sensitive
//delivery o2
#define O2_NAV_BAR_ITEMS_COLOR  MAIN_COLOR
#define O2_NAV_BAR_TITLE_COLOR ZDARK
#define O2_SEARCH_TEXT_FIELD_BACKGROUND_COLOR ZDARK
#define O2_NAV_BAR_COLOR       0xf8b300
#define O2_NAV_BAR_COLOR_DARK 0xf8b300
#define O2_NAVIGATION_BAR_STYLE UIBarStyleBlackOpaque

// delivery consumer

#define WHITE_COLOR         0xFFFFFF
#define BLACK_COLOR         0x000000
#define ZOMATO_YELLOW       0xFFBA00
#define ZOMATO_RED          0xcb202d
#define ZOMATO_RED_FEEDBACK 0xAB000D
#define ZOMATO_VERIFIED_BLUE_COLOR 0x00aacc
#define ZOMATO_VERIFIED_BLUE_COLOR_FEEDBACK 0x009bba
#define ZOMATO_CELEBRITY_GOLDEN_COLOR 0xffd35d

#define IOS_BLUE            0x007AFF

#define WHATSAPP_COLOR 0x34af23
#define FACEBOOK_COLOR 0x3b5998
#define TWITTER_COLOR 0x4099FF
#define FACEBOOK_COLOR_FEEDBACK 0x2B4988

#define TOP_SEPARATOR_COLOR ZHL_DARK
#define cellHighlightedStateAlpha 0.4


//shared colors
#define GLOBAL_SECTION_HEADER_BACKGROUND_COLOR_O2 ZHL
#define GLOBAL_SECTION_SEPARATOR_COLOR_O2 ZHL1
#define GLOBAL_SECTION_HEADER_BG_COLOR_O2 ZHL
#define GLOBAL_CELL_BG_COLOR_O2 COLOR_WHITE
#define TOP_SEPARATOR_COLOR_O2 ZHL_DARK

#define API_RETRY_COUNT 3

#define PAYMENT_METHOD_CASH             @"cash"
#define PAYMENT_METHOD_WALLET           @"wallet"
#define PAYMENT_METHOD_CARD             @"card"
#define PAYMENT_METHOD_NET_BANKING      @"netbanking"
#define PAYMENT_METHOD_THIRD_PARTY_WALLET            @"third_party_wallet"

#define ZOMATO_O2_EXTERNAL_SDK_LATITUDE @"zomato_o2_external_sdk_latitude"
#define ZOMATO_O2_EXTERNAL_SDK_LONGITUDE @"zomato_o2_external_sdk_longitude"



////////////////////to be removed//////////////////////////////////////////////////////////////

#define X(v)                                            v.frame.origin.x
#define Y(v)                                            v.frame.origin.y
#define H(v)                                            v.frame.size.height
#define W(v)                                            v.frame.size.width
#define BOTTOM(v)                                       (v.frame.origin.y + v.frame.size.height)
#define AFTER(v)                                        (v.frame.origin.x + v.frame.size.width)


#define UIColorFromRGB(rgbValue) \
[UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 \
alpha:1.0]

#define UIColorFromRGBWithAlpha(rgbValue,a) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 alpha:a]

#define ZIMGRestaurantKit(p)                [UIImage imageNamed:[NSString stringWithFormat: @"ZRestaurantKit.bundle/%@", p]]
#define ZIMG(p)                             [UIImage imageNamed:[NSString stringWithFormat: @"%@", p]]
#define ZIMGO2(p)                           [UIImage imageNamed:[NSString stringWithFormat: @"ZO2Kit.bundle/%@", p]]
#define ZIMGTableBookKit(p)                 [UIImage imageNamed:[NSString stringWithFormat: @"ZTableBookingKit.bundle/%@", p]]

#define NSLocalizedString(X, Y) [ZCommonsCommonFunctions getValueForKey:X]
#define NSLocalizedStringU(X, Y) [NSLocalizedString(X, Y) uppercaseString]
#define NSLocalizedStringC(X, Y) [NSLocalizedString(X, Y) capitalizedString]
#define NSLocalizedStringL(X, Y) [NSLocalizedString(X, Y) lowercaseString]

#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)


//constants for notifications
#define NOTIFICATION_FOLLOW_REQUEST_COMPLETED        @"NOTIFICATION_FOLLOW_REQUEST_COMPLETED"
#define NOTIFICATION_WISHLIST_REQUEST_COMPLETED      @"NOTIFICATION_WISHLIST_REQUEST_COMPLETED"
#define NOTIFICATION_BEENTHERE_REQUEST_COMPLETED     @"NOTIFICATION_BEENTHERE_REQUEST_COMPLETED"
#define NOTIFICATION_REVIEW_UPLOADED_SUCCESSFULLY    @"NOTIFICATION_REVIEW_UPLOADED_SUCCESSFULLY"
#define NOTIFICATION_REVIEW_DELETED_SUCCESSFULLY     @"NOTIFICATION_REVIEW_DELETED_SUCCESSFULLY"
#define NOTIFICATION_PHOTO_UPLOADED_SUCCESSFULLY     @"NOTIFICATION_PHOTO_UPLOADED_SUCCESSFULLY"
#define NOTIFICATION_USERINFO_CHANGED                @"NOTIFICATION_USERINFO_CHANGED"
#define NOTIFICATION_USER_PROFILE_IMAGE_CHANGED      @"NOTIFICATION_USER_PROFILE_IMAGE_CHANGED"
#define NOTIFICATION_USER_PROFILE_IMAGE_REMOVED      @"NOTIFICATION_USER_PROFILE_IMAGE_REMOVED"
#define NOTIFICATION_DELETE_PHOTO                    @"NOTIFICATION_DELETE_PHOTO"
#define NOTIFICATION_TABLE_BOOKED                    @"NOTIFICATION_TABLE_BOOKED"
#define NOTIFICATION_REFRESH_FOLLOWING_LIST          @"NOTIFICATION_REFRESH_FOLLOWING_LIST"
#define NOTIFICATION_REFERSH_FOLLOWERS_LIST          @"NOTIFICATION_REFERSH_FOLLOWERS_LIST"
#define NOTIFICATION_REFRESH_WISHLIST_LIST           @"NOTIFICATION_REFRESH_WISHLIST_LIST"
#define NOTIFICATION_REFRESH_BEENTHERE_LIST          @"NOTIFICATION_REFRESH_BEENTHERE_LIST"
#define NOTIFICATION_HIDE_CHAT_HEAD                  @"NOTIFICATION_HIDE_CHAT_HEAD"
#define NOTIFICATION_SHOW_CHAT_HEAD                  @"NOTIFICATION_SHOW_CHAT_HEAD"
#define NOTIFICATION_RESTAURANT_ID_CHNAGED           @"NOTIFICATION_RESTAURANT_ID_CHANGED"
#define NOTIFICATION_RELOAD_USER_REVIEWS_VIEW        @"NOTIFICATION_RELOAD_USER_REVIEWS_VIEW"
#define NOTIFICATION_RELOAD_MENUS_UPLOAD             @"NOTIFICATION_RELOAD_MENUS_UPLOAD"
#define NOTIFICATION_WISHLIST_RESTAURANT_ADDED       @"NOTIFICATION_WISHLIST_RESTAURANT_ADDED"


// User Types
#define USER_TYPE_NORMAL @"NORMAL"
#define USER_TYPE_CELEBRITY @"CELEBRITY"
#define USER_TYPE_VERIFIED @"VERIFIED"


#define MAX_UBER_DISTANCE 50000 //50km

@interface ZCommonsCommonFunctions : NSObject

+ (NSString *) getValueForKey:(NSString *)key;
+ (UIImage*)screenshot;
+ (UIImage *) screenshot : (UIView *) backgroundView;
+ (BOOL) isIOS8;
+ (BOOL) isPushPermissionGiven;
+ (BOOL)isDeviceScree4inches;

//scale and cropping
+ (UIImage *)croppIngimageByImageName:(UIImage *)imageToCrop toRect:(CGRect)rect;
+ (UIImage *) scaleAndCropImage:(UIImage *) image toFrame:(CGRect)frame scale:(BOOL) scale;
+ (UIImage *) scaleAndCropImageV2:(UIImage *)image toFrame:(CGRect)frame scale:(BOOL)scale;
+ (UIImage *) scaleAndCropImageV3:(UIImage *) image toFrame:(CGRect)frame;
+ (UIImage *) scaleAndCropImageV4:(UIImage *) image toFrame:(CGRect)frame;
+ (UIImage *) applyGradientToImage:(UIImage *)image andGradientLayer:(CAGradientLayer *)gradientLayer;

+ (CGFloat) getPhoneWidth;
+ (CGFloat) getPhoneHeight;

+ (UIImage *)imageWithColor:(UIColor *)color;
+ (UIImage *)imageWithColor:(UIColor *)color withWidth:(CGFloat)width andHeight:(CGFloat)height;
+ (UIImage *)imageWithColor:(UIColor *)color andOpacity:(CGFloat)alpha;

+ (NSString*) getQueryStringFromDictionary: (NSDictionary *) dictionary;

+ (NSAttributedString *)addKernToString:(NSString *)string withKern:(CGFloat)kern;
+ (NSMutableAttributedString *)addKernToAttributedString:(NSAttributedString *)attrString withKern:(CGFloat)kern;
+ (NSAttributedString *)addKernToString:(NSString *)string withKern:(CGFloat)kern withFont:(UIFont *)font withColor:(UIColor *)color;

+ (CGFloat) calculateHeightWithString:(NSString *)string withFont:(UIFont *)font withWidth:(CGFloat)width;
+ (CGFloat) calculateHeightWithAttributedString:(NSAttributedString *)string withWidth:(CGFloat)width;

+ (NSAttributedString *) addLineHeightToAttributedString:(NSString *)string;


+ (UILabel *)createLabelWithFrame:(CGRect)frame withFont:(UIFont *)font withText:(NSString *)text withTextColor:(UIColor *)color withBackgroundColor:(UIColor *)bgColor withNumberOfLines:(NSInteger)lines;
+ (UIButton *)createButtonWithFrame:(CGRect)frame withFont:(UIFont *)font withText:(NSString *)text withTextColor:(UIColor *)color withBackgroundColor:(UIColor *)bgColor;

+ (NSString *)getDecodedFontIcon:(NSString *)encodedIcon;

+ (void)addStandardShawdowToView:(UIView *)view;
+ (void)addRoundShadowToView:(UIView *)view;
+ (void)addStandardShawdowToWhiteBackgroundView:(UIView *)view;
+ (void)addCardShadowToLayer:(CALayer *)layer;
+ (void)addCellHeaderShawdowToView:(UIView *)view;

//custom functions to create label and buttons
+ (void)displayDropDownForError:(NSError *)error;
+ (void) displayDropDownMessage:(NSString *)message;

+(void) bounceAnimationWithView:(UIView *)view;
+ (void) bounceAnimationWithLayer:(CALayer *) layer;
+ (void) bounceAnimation:(UIButton*) button;

+ (BOOL) canDevicePlaceAPhoneCall;

+ (BOOL) isLocationPermissionAuthorized;

+ (void) redirectToConsumerAppForRestaurantId: (NSNumber *)resId;
+ (void) redirectToConsumerAppForUserId: (NSNumber *)userId;
+ (void)copyToClipboardWithMessage:(NSString *)message;

+ (CGFloat) isiPhone6;
+ (CGFloat) isiPhone6Plus;

+ (NSString *) getLocalizedNumber : (NSNumber *)number withMaxFractionDigits : (int) maxFractionDigits minFractionDigits : (int) minFractionDigits;
+ (BOOL) isConsumerZomatoPresent;
+ (void)redirectToAppStoreToDownloadConsumerApp;

+ (NSString *) getLanguageCode;
+ (CGFloat) calculateWidthWithString:(NSString *)string withFont:(UIFont *)font;
+ (NSString *) getFormattedRoundDownPrice:(NSNumber *)number;

+ (NSString *)getMessageForError:(NSError *)error;

+ (NSString *) getRoundDownPriceForAPI:(NSNumber *)number;
+ (void)callRestaurantAtNumber:(NSString *)phoneNumber;
+ (NSMutableArray *) getRatingColors;

+ (NSString *) getDecimalSeparator;
+ (NSString *) getPackageIdentifierForPresentLanguage;

+ (UIImage *)blur:(UIImage*)theImage;
+ (NSString *) getEncodedString:(NSString *)string;

//nsjson serilization
+ (NSDictionary *)jsonStringTODict:(NSString *)jsonString;
+ (NSArray *)jsonStringTOArray:(NSString *)jsonString;

+ (NSString *)calculateTimeAgoInFeed:(NSNumber *)unixTimeStamp;

// Friendly Distance
+ (NSString *) friendlyDistanceFromDistance : (double) dist inCity : (NSNumber *) city_id andShouldShowUptoMaxDistance:(BOOL) show;

//collection images
+ (void) storeImageInDisk:(UIImage *)image forUrl:(NSString *)url;
+ (UIImage *) getImageFromDiskForUrl:(NSString *)url;

+ (void) downloadAndCacheImageForURL:(NSString *)url;

+ (void) downloadImageInBackgroundWithURLString:(NSString *)urlString onSuccess:(void (^)(UIImage *image))success onFailure:(void (^)(NSError *error))failure; //uses NSData and background thread

+ (BOOL) isImagePresentInDiskForUrl:(NSString *)url;

+ (BOOL) isIOS9;
+ (BOOL) isUserLoggedIn;

+ (UIColor *) colorFromHexString:(NSString *)hexString;


@end
