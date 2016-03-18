//
//  RestaurantSearchForOnlineOrderingCell.h
//  Zomato
//
//  Created by Anil Kumar on 11/03/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "ZO2Prefix.h"

@interface RestaurantSearchForOnlineOrderingCell : ZUITableViewCell
@property (strong, nonatomic) Restaurant *restaurant;
@property (strong, nonatomic) UIView *eventPromosView;
- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier;
-(void)setShouldShowRatingLabel:(BOOL)shouldShowRating;

+ (CGFloat) calculateHeightForRow: (Restaurant *)resObject andMode:(NSString *)mode;
- (void) setRestaurant:(Restaurant *)restaurant andMode:(NSString *)mode;

@end
