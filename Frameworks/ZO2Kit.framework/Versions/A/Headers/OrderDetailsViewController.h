//
//  OrderDetailsViewController.h
//  Zomato
//
//  Created by Nikunj on 14/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "PlaceOrderTab.h"
#import "PhoneNumberCell.h"

typedef enum {
    OrderDetailsPageTypeInFlow,
    OrderDetailsPageTypeMeTab,
    OrderDetailsPageTypeNotification,
    OrderDetailsPageTypeHistory,
    OrderDetailsPageTypeFavorite,
    OrderDetailsPageTypeChatHead
} orderDetailsPageType;

@interface OrderDetailsViewController : ZUIBaseViewController<UITableViewDelegate, UITableViewDataSource, PhoneNumberCellDelegate>

@property (nonatomic) BOOL shouldCreateChatHeadOnDismissal;
@property (nonatomic) BOOL shouldShowBlocker;
@property (nonatomic) BOOL shouldNotShowOrderStatus;
@property (nonatomic, strong) PlaceOrderTab *placeOrderTab;
@property (nonatomic) orderDetailsPageType pageType;

- (id) initWithTabId:(NSString *)tabId withShowWaitingVC:(BOOL) showWaitingVCLocal withReorderButton:(BOOL) showReorderButtonLocal;


@end
