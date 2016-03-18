//
//  SelectDeliverySubzoneTableView.h
//  Zomato
//
//  Created by Nikunj on 19/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "ZO2Prefix.h"


@protocol SelectDeliverySubzoneTableViewDelegate <NSObject>

@optional
- (void) didSelectSubzone:(GoogleLocation *)didSelectSubzone;

@optional
- (void) didSelectNonDeliveringSubzone:(GoogleLocation *)didSelectSubzone;

@optional
- (void) pushOnlineDeliverySearchResultsVC;

@end

@interface SelectDeliverySubzoneTableView : ZUITableViewCell

@property (nonatomic, strong) NSMutableArray *restaurantDeliveringSubzones;
@property (nonatomic, weak) id<SelectDeliverySubzoneTableViewDelegate> delegate;
@property (nonatomic, strong) NSString *searchText;
@property (nonatomic, strong) NSNumber *resID;

- (void) searchForText:(NSString *)text;
- (id) initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier withDeliveringSubzones:(NSArray *)subzones isRestaurantSubzone:(BOOL) isRestaurantSubzoneLocal;

@end
