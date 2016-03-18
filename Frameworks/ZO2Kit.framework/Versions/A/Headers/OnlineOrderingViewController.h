//
//  OnlineOrderingViewController.h
//  Zomato
//
//  Created by Nikunj on 10/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "RestaurantDeliveryInfo.h"
#import "CustomizeItemViewController.h"
#import "OnlineOrderingDelegates.h"
#import "GetUserAddresses.h"
#import "PlaceOrder.h"
#import "GetUserAddresses.h"
#import "GetPaymentMethods.h"
#import "ZO2KitSettings.h"
#import <CoreLocation/CLLocation.h>

typedef enum{
    PhoneNumberStateUnknown,
    PhoneNumberStateEmpty,
    PhoneNumberStateNotVerified,
    PhoneNumberStateVerified
}PhoneNumberState;

#define BOTTOM_SECTION_INSET    90

@interface OnlineOrderingViewController : ZUIBaseViewController

@property (nonatomic, strong) RestaurantDeliveryInfo *deliveryInfo;
@property (nonatomic, strong) NSMutableArray *ordersArray;
@property (nonatomic, strong) NSMutableArray *placeOrderItemsArray;
@property (nonatomic, strong) NSMutableArray *allChargesArray;
@property (nonatomic, strong) NSArray *billSummaryArrayWithVoucher;
@property (nonatomic, strong) NSString *specialInstructionsText;
@property (nonatomic, strong) NSString *deliveryInstructionsText;

@property (nonatomic, strong) GetPaymentMethods *paymentMethodsObject;
@property (nonatomic, strong) GetUserAddresses *userAddressApiObject;

@property (nonatomic) NSInteger selectedCardIndex;

@property (nonatomic, strong) NSString *personalName;
@property (nonatomic, strong) NSString *personalNumber;
@property (nonatomic, strong) NSNumber *personalNumberCountryId;
@property (nonatomic, strong) NSNumber *personalNumberVerified;

@property (nonatomic, strong) DeliveryAddress *selectedAddress;
@property (nonatomic, strong) NSNumber *restaurantId;
@property (nonatomic, strong) PlaceOrder *placeOrderApiObject;
@property (nonatomic) BOOL isReOrder;
@property (nonatomic, strong) UIView *emptyView;
@property (nonatomic, strong) UIActivityIndicatorView *loader;

@property (nonatomic) PhoneNumberState currentPhoneNumberState;

@property (nonatomic, strong) NSNumber *cityId;
@property (nonatomic) NSInteger stepsCount;

@property (nonatomic, strong) NSString *dominosAuthKey;
@property (nonatomic, strong) NSNumber *personalNumberCountryCode;
@property (nonatomic, strong) NSDate *dob;

//selected payment method
@property (nonatomic) PAYMENT_TYPE selectedPaymentMethod;
@property (nonatomic) DELIVERY_MODE deliveryMode;
@property (nonatomic) BOOL isWalletSelected;
@property (nonatomic) NSNumber* selectedBankID;
@property (nonatomic, strong) ZomatoWallet *selectedWallet;

- (id) initWithModeType:(NSString *)modeValue withResID:(NSNumber *)resId;
- (id) initWithResId:(NSNumber *)resId;
- (id) initWithReOrderTabId:(NSString *)tabId andMode:(NSString *)mode;
- (void) presentCustomizeItemVC:(DeliveryItem *)deliveryItem withDelegate:(id<OnlineOrderingDelegate>)delegate;
- (void) getData;
- (void) restaurantImageViewerAtIndex:(NSInteger)index withFrame:(CGRect)frame;
- (void) showAgeRestritionVCForItem:(DeliveryItem *)item;

@end
