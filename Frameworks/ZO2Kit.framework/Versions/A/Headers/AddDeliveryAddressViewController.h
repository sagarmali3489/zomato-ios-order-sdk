//
//  AddDeliveryAddressViewController.h
//  Zomato
//
//  Created by Nikunj on 14/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "ZO2Prefix.h"
#import "AddDeliveryAddress.h"

@interface AddDeliveryAddressViewController : ZUIBaseViewController

@property (nonatomic) BOOL isModal;
@property (nonatomic, weak) NSArray *restaurantDeliveringSubzones;
@property (nonatomic) NSNumber *resID;

- (id) initWithIsRestaurantSubzone:(BOOL) isRestaurantSubzoneLocal withAddDeliveryAddressObject:(AddDeliveryAddress *)addDeliveryAddressObjectLocal withUserHasNoAddress:(BOOL)userHasNoAddressLocal;


@end
