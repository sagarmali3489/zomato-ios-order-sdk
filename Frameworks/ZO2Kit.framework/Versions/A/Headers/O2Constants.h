//
//  Constants.h
//  delivery
//
//  Created by Nikunj on 28/04/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//

#import <Foundation/Foundation.h>

// iphone type
#define SCREEN_WIDTH ([[UIScreen mainScreen] bounds].size.width)
#define SCREEN_HEIGHT ([[UIScreen mainScreen] bounds].size.height)
#define SCREEN_MAX_LENGTH (MAX(SCREEN_WIDTH, SCREEN_HEIGHT))
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)

#define IS_IPHONE_4_OR_LESS (IS_IPHONE && SCREEN_MAX_LENGTH < 568.0)
#define IS_IPHONE_5 (IS_IPHONE && SCREEN_MAX_LENGTH == 568.0)
#define IS_IPHONE_6 (IS_IPHONE && SCREEN_MAX_LENGTH == 667.0)
#define IS_IPHONE_6P (IS_IPHONE && SCREEN_MAX_LENGTH == 736.0)

#define POPUP_HEADER_HEIGHT 50.0f
#define NEW_POPUP_HEADER_HEIGHT 44.0f
#define MAIN_HEADER_HEIGHT 50.0f
#define NAVIGATION_BAR_HEIGHT 44.0f
#define TABLEVIEW_TOP_PADDING 20.0
#define STATUS_BAR_HEIGHT_ADDITION (SYSTEM_VERSION_LESS_THAN(@"7.0") ? 0.0f : 20.0f)
#define API_RETRY_COUNT 3

//favorite order constants
#define FAVORITE_ORDER_REQUEST_MADE @"favoriteOrderRequestMade"
#define FAVORITE_ORDER_REQUEST_COMPLETED @"favoriteOrderRequestCompleted"
#define IS_ORDER_FAVORITED @"isOrderFavorited"
#define USER_ID @"user_id_v4"

//GA
#define O2_GA_TRACKER @"UA-62460771-1"


#define iOS_7 @"7.0"

#define IOS_CELLULAR    @"pdp_ip0"
#define IOS_WIFI        @"en0"
#define IP_ADDR_IPv4    @"ipv4"
#define IP_ADDR_IPv6    @"ipv6"

#define O2_STATUS_BAR_STYLE ([ZUIKitSettings getHeaderViewThemeType] == HeaderViewThemeCustom ? UIStatusBarStyleLightContent:UIStatusBarStyleDefault)

//Actions
#define INSTANT_FB_LOGIN_TAPPED @"FBLogin"
#define INITIAL_SIGNUP_TAPPED @"SignUp"
#define INITIAL_LOGIN_TAPPED @"LogIn"
#define FB_CONNECT @"FBConnect"
#define GOOGLE_CONNECT @"GoogleConnect"
#define EMAIL_CONNECT @"EmailLogin"
#define AUTO_DETECT_LOCATION @"AutoDetectLocation"
#define MANUALLY_SELECT_LOCATION @"ManuallySelectLocation"
#define ADDRESS_BOOK_BUTTON_TAPPED @"AddressBookButtonTapped"
#define ADD_NEW_ADDRESS_TAPPED @"AddNewAddress"
#define EDIT_ADDRESS_TAPPED @"EditAddress"
#define CONFIRM_CUSTOMIZATION @"ConfirmCustomization"
#define CANCEL_CUSTOMIZATION @"CancelCustomization"
#define EDIT_PHONE_NUMBER @"EditPhoneNumber"
#define USER_SNIPPET_TAPPED @"TapOnUserName"
#define FAQ_BUTTON_TAPPED @"FAQButtonTapped"
#define SIGN_OUT_TAPPED @"SignOutButtonTapped"
#define CALL_RESTAURANT @"CallRestaurant"
#define CONTACT_ZOMATO @"ContactZomato"
#define SUBMIT_CONCERN @"SubmitConcern"
#define FILTER_BUTTON_TAPPED @"FilterButtonTapped"
#define APPLY_FILTER_BUTTON_TAPPED @"ApplyFilterButtonTapped"
#define LOYALTY_TAPPED_RES_PAGE @"LoyaltyTappedMenuPage"
#define FIRST_ITEM_SELECTED_FROM_MENU @"FirstItemSelectedFromMenu"
#define USER_PAGE_ZOMATO_CREDIT_TAPPED @"UserpageZomatoCreditTapped"
#define USER_PAGE_MANAGE_CARD_TAPPED @"UserpageManageCardTapped"
#define USER_PAGE_REFERRALS_TAPPED @"UserpageReferralsTapped"
#define USER_PAGE_STAMPS_TAPPED @"UserpageStampsTapped"
#define REFERRAL_SHARE_MAIL @"ReferralShareMail"
#define REFERRAL_SHARE_FACEBOOK @"ReferralShareFacebook"
#define REFERRAL_SHARE_TWITTER @"ReferralShareTwitter"
#define REFERRAL_SHARE_WHATSAPP @"ReferralShareWhatsApp"
#define REFERRAL_SHARE_MESSAGE @"ReferralShareMessage"


//app flyer constants
#define O2_APPLE_APP_ID @"991745732"
#define APP_FLYER_DEVKEY @"ZWajvvuaGUAqqD83ZNauKW"
#define APP_FLYER_SIGNUP_EMAIL @"Signup_Email"
#define APP_FLYER_SIGNUP_GOOGLE @"Signup_Google"
#define APP_FLYER_SIGNUP_FACEBOOK @"Signup_Facebook"


//new ga for o2
//login
#define CATEGORY_LOGIN @"O2_LOGIN"
#define ACTION_SKIP_LOGIN @"SkipLogin"
#define ACTION_CANCEL_LOGIN @"CancelLogin"
#define ACTION_CLICK_LOGIN @"ClickLogin"
#define ACTION_CLICK_SIGNUP @"ClickSignup"
#define ACTION_SUBMIT_LOGIN @"SubmitLogin"
#define ACTION_SUBMIT_SIGNUP @"SubmitSignup"
#define ACTION_FACEBOOK @"Facebook"
#define ACTION_GOOGLE @"Google"

//intent //done
#define CATEGORY_INTENT @"O2_INTENT"
#define ACTION_VIEW_MENU @"ViewMenu"
#define LABEL_SEARCH_PAGE @"SearchPage"
#define LABEL_DETAILS_PAGE @"DetailsPage"
#define LABEL_MENU_PAGE @"MenuPage"
#define LABEL_RESTAURANT_PAGE @"RestaurantPage"
#define LABEL_SEARCH_SNIPPET @"SearchSnippet"
#define LABEL_COLLECTION_PAGE @"CollectionPage"
#define ACTION_REORDER @"Reorder"

//search //done
#define CATEGORY_SEARCH @"O2_SEARCH"
#define ACTION_LOCATION @"Location"
#define LABEL_SEARCH_SUGGESTED @"SearchSuggested" //search suggested
#define LABEL_SUGGESTED @"Suggested"
#define LABEL_ADDRESSES @"Addresses"
#define ACTION_DISH @"Dish"
#define ACTION_DISH_LABEL_SEARCH_PAGE @"SearchPage"
#define ACTION_DISH_LABEL_MENU_PAGE @"MenuPage"

//filters //done
#define CATEGORY_FILTERS @"O2_FILTERS"
#define ACTION_FILTERS @"Filters"

//chat //done
#define CATEGORY_CHAT @"O2_CHAT"
#define ACTION_CHAT_START @"Start"
#define LABEL_CHAT_START_SEARCH_PAGE @"SearchPage"
#define LABEL_CHAT_START_DETAILS_PAGE @"DetailsPage"
#define LABEL_CHAT_START_ACCOUNTS_PAGE @"AccountsPageConsumer" //new

//drawer
#define CATEGORY_DRAWER @"O2_DRAWER"
#define ACTION_FAVORITE_ORDERS @"FavoriteOrders"
#define ACTION_ORDER_HISTORY @"OrderHistory"
#define ACTION_ADDRESS_BOOK @"AddressBook"
#define ACTION_PAYMENTS @"Payments"
#define ACTION_ZCREDITS @"ZCredits"
#define ACTION_REFERRAL @"Referral"
#define ACTION_NOTIFICATIONS @"Notifications"
#define ACTION_SIGNOUT @"SignOut"

//address //done
#define CATEGORY_ADD_ADDRESS @"O2_ADD_ADDRESS"
#define ACTION_ADD_ADDRESS_SEARCH_LOCATION @"SearchLocation"
#define ACTION_ADD_ADDRESS_ADDRESS_BOOK @"AddressBook"
#define ACTION_ADD_ADDRESS_CHECKOUT_FLOW @"CheckoutFlow"

//checkout flow //done
#define CATEGORY_CHECKOUT_FLOW @"O2_CHECKOUT_FLOW"
#define ACTION_VIEW_CART @"ViewCart"
#define ACTION_PAY @"Pay"
#define ACTION_SELECT_PICKUP @"SelectPickup"
#define ACTION_SELECT_ADDRESS @"SelectAddress"
#define ACTION_SELECT_PAYMENT @"SelectPayment"
#define ACTION_SELECT_PHONE @"SelectPhone"
#define ACTION_BACK @"Back"
#define LABEL_PAY @"Pay"
#define LABEL_ADDRESS @"Address"
#define LABEL_PICKUP @"Pickup"
#define LABEL_CART @"Cart"
#define LABEL_MENU @"Menu"
#define LABEL_PHONE @"Phone"

//payments //done
#define CATEGORY_PAYMENTS_PAGE @"O2_PAYMENTS_PAGE"
#define ACTION_CHANGE @"Change"
#define LABEL_CARD @"Card"
#define LABEL_BANK @"Bank"
#define LABEL_WALLET @"Wallet"
#define ACTION_PAYMENTS_PAGE_ZCREDITS @"ZCredits"
#define ACTION_PROMO @"Promo"
#define LABEL_TYPE @"Type"
#define LABEL_APPLY @"Apply"
//*****************

#define ONLINE_ORDERING_CATEGORY @"Online Ordering"

#define PICKUP_GET_DIRECTION_CALLED @"pickupGetDirectionCalled"
#define ONLINE_ORDERING_BUTTON_TAP_FROM_SEARCH_PAGE @"OnlineOrderingButtonTappedFromSearchPage"
#define ONLINE_ORDERING_BUTTON_TAP_FROM_PLUS @"OnlineOrderingButtonTappedFromPlus"
#define ONLINE_ORDERING_BUTTON_TAP_FROM_NEARBY_PAGE @"OnlineOrderingButtonTappedFromNearbyPage"
#define ONLINE_ORDERING_BUTTON_TAP_FROM_RESTAURANT_PAGE @"OnlineOrderingButtonTappedFromRestaurantPage"
#define ONLINE_ORDERING_BUTTON_TAP_FROM_RESTAURANT_SELECTION_PAGE @"OnlineOrderingButtonTappedFromPlusPage"
#define ONLINE_ORDERING_BUTTON_TAP_FROM_COLLECTION_PAGE @"OnlineOrderingButtonTappedFromCollectionPage"
#define PLACE_ORDER_BUTTON_TAP @"PlaceOrderButtonTapped"
#define RATING_SUBMIT_BUTTON_TAP @"RatingSubmitButtonTapped"
#define ADD_TO_CART_BUTTON_TAP @"AddToCartButtonTapped"
#define ONLINE_ORDERING_FILTER_CATEGORY_TAPPED @"ButtonTappedFilterOnSearch"
#define ONLINE_ORDERING_FILTER_CATEGORY_NEARBY_TAPPED @"ButtonTappedFilterOnNearby"
#define MOVE_TO_CHECKOUT_FROM_GREEN  @"MovetoCheckoutFromRightArrowTapped"
#define MOVE_TO_CHECKOUT_FROM_CART  @"MovetoCheckoutFromCartTapped"
#define MOVE_TO_CONFIRMATION_PAGE_BUTTON_TAPPED  @"MovetoConfirmationPageButtonTapped"
#define PHONE_VERIFICATION_BUTTON_TAPPED  @"PhoneVerificationButtonTapped"
#define REORDER_BUTTON_TAPPED  @"ReorderButtonTapped"
#define FAVORITE_BUTTON_TAPPED  @"FavoriteButtonTapped"
#define UNFAVORITE_BUTTON_TAPPED  @"UnFavoriteButtonTapped"
#define INCREMENT_ITEM @"ItemIncrementInCart"
#define DECREMENT_ITEM @"ItemDecrementInCart"
#define SPECIAL_COOKING_INSTRUCTIONS @"SpecialCookingInstructions"
#define HIDE_WAITING_SCREEN @"HideWaitingScreen"
#define O2_IS_LOYALTY_INTRO_SHOWN @"o2_is_loyalty_intro_shown"
#define O2_WALLET_REFERALL_HEADER_CLOSE_BUTTON_TAPPED_COUNT @"o2_wallet_referall_close_button_count"
#define O2_LOYALTY_HEADER_CLOSE_BUTTON_TAPPED_COUNT @"o2LoyaltyHeaderCloseButtonTappedCount"

#define cellHighlightedStateAlpha 0.4
#define LIST_2_D_HEIGHT 50.0f

//prefs constants
#define LATITUDE @"latitude"
#define LONGITUDE @"longitude"
#define LOCATION_ID @"zomato_o2_external_sdk_location_id"
#define LOCATION_NAME @"zomato_o2_external_sdk_location_name"
#define O2_CITY_ID @"zomato_o2_external_sdk_o2_city_id"
#define O2_FILTER_DICT @"zomato_o2_external_sdk_o2_filter_dict"
#define ZOMATO_X_ACCESS_UUID @"zomato_x_access_uuid"

//notifications
#define LOCATION_CHANGED_NOTIFICATION @"location_changed_notification"
#define USER_LOGGED_IN_NOTIFICATION @"userLoggedInSuccessfully"
#define USER_LOGGED_OUT_NOTIFICATION @"userLoggedOut"
#define LOCATION_PERMISSION_DENIED_NOTIFICATION @"location_permission_denied_notification"
#define LOCATION_NOT_ENABLED @"location_not_enabled"

//first runs
#define FIRST_RUN_DELIVERY_CART @"first_run_delivery_cart"
#define FIRST_RUN_LOYALTY @"first_run_loyalty"
#define FIRST_RUN_FILTERS @"first_run_filters"
#define FIRST_RUN_NEW_ADDRESS @"first_run_new_address"
#define FIRST_RUN_FAVORITES @"first_run_favorites"

//counts
#define LOYALTY_NEW_SHOWN_COUNT @"loyalty_new_shown_count"
#define REFERALL_NEW_SHOWN_COUNT @"referall_new_shown_count"

//login
#define USER_ID @"user_id_v4"
#define USER_NOTIFICATION_COUNT @"notification_count"
#define USER_FOLLOWERS_COUNT @"followers_count"
#define USER_FOLLOWING_COUNT @"following_count"
#define USER_WISHLIST_COUNT @"wish_count"
#define USER_REVIEWS_COUNT @"reviews_count"
#define USER_BLOGS_COUNT @"blogs_count"
#define NOTIFICATION_COUNT @"notification_count"
#define USER_FAVORITE_COUNT @"fav_count"
#define CITIBANK_DISCOUNT @"citibank_discount"
#define EMIRATES_DISCOUNT @"emirates_discount"
#define USER_CITY @"user_city"
#define USER_JOINING_TIME @"user_joining_time"
#define USER_FOODIE_LEVEL @"user_foodie_level"
#define USER_FOODIE_COLOR @"user_foodie_color"
#define IS_LOGGED_IN @"is_logged_in_v4"
#define USER_IMAGE @"user_image"
#define USER_TYPE @"user_type"
#define EMAIL @"email"
#define USER_DISPLAY_NAME @"user_display_name"

#define LAST_RATED_TIME    @"last_rated_time"
#define RATING_MIN_TIME     10800
#define TAB_IDS_NOT_TO_CREATE_CHAT_HEAD @"tab_ids_not_to_create_chat_head"

//loginless
#define ACCESS_UUID @"access_uuid"

// location
#define MAXIMUM_ACCURACY_LIMIT 2000.00
#define ACCURACY @"accuracy"
#define LOC_ERROR @"error_loc"
#define LOC_UPDATE_TIME @"loc_update_time"
#define LOC_ERROR_UPDATE_TIME @"loc_error_update_time"
#define LOC_REFRESH_TIME @"loc_refresh_time"
#define LOC_TRIAL_LAT @"loc_trial_lat"
#define LOC_TRIAL_LON @"loc_trial_lon"
#define LOC_TRIAL_ACCURACY @"loc_trial_accuracy"
#define LOC_TRIAL_UPDATE_TIME @"loc_trial_update_time"
#define LOC_GEOCODE_COMPLETION_CALL @"loc_geocode_completion_call"
#define GEO_CALL_MADE_WITH_LAT @"geoCallMadeWithLat"
#define GEO_CALL_MADE_WITH_LON @"geoCallMadeWithLon"
#define LOC_GEOCODE_CALL_VALID_TIME_INTERVAL 15.0   //seconds
#define LOCATION_VALID_TIME_INTERVAL 300  //seconds
#define BG_TO_FG_VALID_TIME_INTERVAL 900 //seconds
#define INVALIDATE_LOCATION_TIME 30.0   //seconds
#define NEARBY_REFRESH_TIME_INTERVAL 3600*3     //3 Hours
#define APP_ENTERED_BACKGROUND_TIME @"app_entered_background_time"
#define APP_ENTERED_FOREGROUND_TIME @"app_entered_foreground_time"
#define LOCATION_CHANGE_POPUP_TIME @"location_change_popup_time"
#define NEARBY_FEED_LAST_REFRESH @"nearby_feed_last_refresh"
#define LOCATION_CHANGE_POPUP_VALID_TIME 3600 //1 HOUR
#define LOCATION_LAST_UPDATED @"location_last_updated"

//Modals for showing different login views
#define MODAL_CANCEL @"cancel"
#define MODAL_DEFAULT @"default"

// session ids
#define APP_RUN_ID @"app_run_id" //set whenever didfinishlaunching is called.
#define SESSION_ID @"session_id" //set whenever the app comes to the foreground.
#define FIRST_INSTALL_VERSION_NUMBER @"firstInstallVersionNumber"

#define VERSION_NUMBER_IN_PREFS @"version_number_in_prefs"

#define IS_ORDER_PLACED_ONCE     @"is_order_placed_once"

#define FLIGHT_RECORDER_ACCESS_KEY @"f62a94de-bf81-4f92-ad02-54e266fd9bf7"
#define FLIGHT_RECORDER_SECRET_KEY @"b95c4039-2e11-449c-8f7b-44ecb7bcdd27"


//shared colors
#define GLOBAL_SECTION_HEADER_BACKGROUND_COLOR_O2 ZHL
#define GLOBAL_SECTION_SEPARATOR_COLOR_O2 ZHL1
#define GLOBAL_SECTION_HEADER_BG_COLOR_O2 ZHL
#define GLOBAL_CELL_BG_COLOR_O2 COLOR_WHITE
#define TOP_SEPARATOR_COLOR_O2 ZHL_DARK


// Google Login Keys
#define OAUTH_CLIENT_ID @"442739719837-jkqa6j4hnca1aptk9hjo3fmprj9heqi9.apps.googleusercontent.com"
#define OAUTH_CLIENT_SECRET @"ubmHDyInF0lKL3wgmH3bmku6"