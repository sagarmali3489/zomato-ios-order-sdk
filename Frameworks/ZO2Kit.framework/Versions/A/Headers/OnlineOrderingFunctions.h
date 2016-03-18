//
//  OnlineOrderingFunctions.h
//  Zomato
//
//  Created by Nikunj on 11/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RestaurantDeliveryInfo.h"
#import "AllDeliveryCharge.h"
#import "PlaceOrderTab.h"
#import "O2Voucher.h"
#import "GetPaymentMethods.h"
#import "ZO2Prefix.h"


@class RestaurantDeliveryInfo;
@class GetPaymentMethods;
@class O2Voucher;
@class PlaceOrderItem;
@class PlaceOrderTabOrder;
@class DeliveryAddress;
@class DeliveryGroup;

#define ORDER_EXTERNAL_NOTIFICATION_ACTIVE_ORDERS_ARRAY_CHANGED @"order_external_notification_active_orders_array_changed"
#define ORDER_EXTERNAL_NOTIFICATION_ORDER_STATUS_CHANGED @"order_external_notification_active_order_status_changed"
#define ORDER_EXTERNAL_NOTIFICATION_ORDER_PLACED @"order_external_notification_order_placed"

#define NOTIFICATION_UNRATED_TAB_PRESENT    @"notification_unrated_tab_present"
#define NOTIFICATION_DELIVERY_TABS_ARRAY_CHANGED    @"notification_delivery_tabs_array_changed"
#define NOTIFICATION_SINGLE_DELIVERY_TAB_CHANGED    @"notification_single_delivery_tab_changed"
#define NOTIFICATION_NO_RESTAURANT_DELIVERY    @"notification_no_restaurant_delivery"
#define ONLINE_ORDERING_NOTIFICATION_VIEW_CONTROLLER_SHOWN    @"online_ordering_notification_view_controller_shown"
#define CHAT_VIEW_CONTROLLER_SHOWN    @"chat_view_controller_shown"
#define NOTIFICATION_ONLINE_ORDERING_WILL_SHOW_RESTAURANT_SEARCH_VC    @"online_ordering_will_show_restaurant_search_vc"
#define NOTIFICATION_ONLINE_ORDERING_DID_SHOW_RESTAURANT_SEARCH_VC    @"online_ordering_did_show_restaurant_search_vc"
#define NOTIFICATION_SHOW_FILTER_APPLY_BUTTON  @"show_filter_apply_button"
#define NOTIFICATION_NOT_ZOMATO_CITY_DETECTED  @"not_zomato_city_detected"
#define NOTIFICATION_O2_CONFIG_VALUE_CHANGED  @"o2_config_value_changed"
#define NOTIFICATION_O2_REMOVE_FIRST_RUNS  @"o2_remove_first_runs"
#define NOTIFICATION_UNREAD_NOTIFICATIONS_COUNT  @"o2_unread_notifications_count"

#define SHOULD_SHOW_REFERRALS   @"should_show_referrals"
#define SHOULD_SHOW_LOYALTY   @"should_show_loyalty"
#define SHOULD_SHOW_O2_BANNER   @"should_show_o2_banner"
#define LAST_SHOWN_POPUP_IDS @"last_shown_popup_ids"

#define NOTIFICATION_STOP_LOADER @"notification_stop_loader"
#define NOTIFICATION_START_LOADER @"notification_start_loader"

#define MAIN_SEPARATOR_COLOR UIColorFromRGB(ZHL_DARK)
#define SECTION_HEADER_BACKGROUND_COLOR UIColorFromRGB(COLOR_WHITE)

typedef enum {
    DELIVERY_MODE_PICKUP = 101,
    DELIVERY_MODE_DELIVERY = 102,
}DELIVERY_MODE;


@interface OnlineOrderingFunctions : NSObject

+ (void) addItem:(DeliveryItem *)item toOrdersArray:(NSMutableArray *)ordersArray;
+ (void) subtractItem:(DeliveryItem *)item fromOrdersArray:(NSMutableArray *)ordersArray;
+ (NSInteger) calculateCountForAddButtonWithDeliveryItem:(DeliveryItem *)item inOrdersArray:(NSMutableArray *)ordersArray;
+ (NSString *) createConcatenatedGroupString:(DeliveryItem *)deliveryItem;
+ (NSString *) createPriceStringWithPrice:(NSNumber *)price currency:(NSString *)currency currencyAffix:(NSString *)currencyAffix;
+ (double) calculateDeliveryItemPrice:(DeliveryItem *)deliveryItem;
+ (NSString *) getFormattedPrice:(NSNumber *)number;
+ (NSString *) calculateDeliveryItemPriceString:(DeliveryItem *)deliveryItem currency:(NSString *)currency currencyAffix:(NSString *)currencyAffix;
+ (NSArray *) getSortedItemsArray:(NSArray *)itemsArray;
+ (NSMutableArray *)flattenGroupArray:(DeliveryItem *)deliveryItem;
+ (void) makeCopiedItemSelected:(DeliveryItem *)deliveryItemLocal;
+ (void) makeCopiedItemSelectedOnBasisOfDefault:(DeliveryItem *)deliveryItemLocal;
+ (NSString *) getDateFormattedStringForDeliveryTab:(NSNumber *)timeStamp;
+ (NSInteger) getCurrentDayOfTheWeek;
+ (NSString *) getDateFormattedStringForOrderHistoryTab:(NSNumber *)timeStamp;
+ (NSString *) calculateFormattedGroupPriceWithDeliveryGroup:(DeliveryGroup *)group currency:(NSString *)currency currencyAffix:(NSString *)currencyAffix;
+ (double) calculateDeliveryGroupPrice:(DeliveryGroup *)deliveryGroup;
+ (BOOL) shouldShowNotAcceptBelowMinOrderWithDeliveryInfo:(RestaurantDeliveryInfo *)info withOrdersArray:(NSArray *)ordersArray;
+ (BOOL) deliveryItemHasSomeError:(PlaceOrderItem *)deliveryItem;
+ (BOOL) isDeliveryItem:(DeliveryItem *)item equalWithPlaceOrderItem:(PlaceOrderItem *)placeOrderItem;
+ (void) recreateOrdersArray:(NSMutableArray *)ordersArray withPlaceOrderTabOrder:(PlaceOrderTabOrder *)tabOrder withDeliveryInfo:(RestaurantDeliveryInfo *)deliveryInfo;
+ (NSMutableArray *) constructPlaceOrderItemsArrayWithOrdersArray:(NSMutableArray *)ordersArray withAllChargesArray:(NSMutableArray *)allChargesArray;
+ (NSString *)getDeliveryAddressText:(DeliveryAddress *)deliveryAddress;
+ (NSString *)appendCurrencyWithPrice:(NSNumber *)price currency:(NSString *)currency currencyAffix:(NSString *)currencyAffix;

+ (NSArray *)getItemsArrayWithDeliveryInfo:(RestaurantDeliveryInfo *)deliveryInfo withSearchText:(NSString *)searchText;
+ (BOOL) shouldShowExtraChargeViewWithDeliveryInfo:(RestaurantDeliveryInfo *)info withOrdersArray:(NSArray *)ordersArray;
+ (NSMutableAttributedString *)getCustomizationAttributedString:(NSString *)customizationString;
+ (NSArray *)getBillSummaryArrayWithAllChargesArray:(NSArray *)placeOrderItemsArray withAppliedVoucher:(O2Voucher *)voucher withPaymentMethods:(GetPaymentMethods *)paymentMethodsObject withPaymentType:(PAYMENT_TYPE)paymentType currency:(NSString *)currency currencyAffix:(NSString *)currencyAffix;
+ (double) getTotalPriceWithBillsArray:(NSArray *)billsVoucherArray;
+ (NSMutableArray *) constructPlaceOrderItemsArrayWithOrdersArray:(NSArray *)ordersArray;
+ (NSMutableArray *) constructPlaceOrderItemsArrayWithOrdersArray:(NSMutableArray *)ordersArray withCalculateOrdersArray:(NSArray *)calculateOrdersArray;
+ (double) calculateSubtotalWithOrdersArray:(NSArray *)ordersArray;
+ (double) calculateSubtotalWithCalculateOrderItemsArray:(NSArray *)orderItemsArray;
+ (void) calculateTotalPricesOfOrdersArray:(NSArray *)ordersArray;
+ (BOOL) isLoyaltyAppliedWithBillSummaryArray:(NSArray *)billSummaryArray;
+ (double) calculateSubtotalFromDeliveryItemArray:(NSMutableArray *)ordersArray;

+ (NSArray *)getNewBillSummaryArrayWithAllChargesArray:(NSArray *)placeOrderItemsArray withAppliedVoucher:(O2Voucher *)voucher withPaymentMethods:(GetPaymentMethods *)paymentMethodsObject withPaymentType:(PAYMENT_TYPE)paymentType currency:(NSString *)currency currencyAffix:(NSString *)currencyAffix usingZomatoCredits:(BOOL)usingZomatoCredits;

+ (NSString *)getDeliveryModeString:(DELIVERY_MODE)deliveryMode;
+ (DELIVERY_MODE)getDeliveryModeFromString:(NSString *)deliveryModeString;

+(BOOL)shouldShowStamps;
+ (NSString *)getPaymentMethodStringFromType:(PAYMENT_TYPE)type;

+ (NSInteger)calculateAgeFromDOB:(NSDate *)dob;


@end
