//
//  DeliveryRatingView.h
//  Zomato
//
//  Created by Udit Gupta on 17/03/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RestaurantDeliveryInfo.h"
#import "ZO2Prefix.h"

typedef enum{
    DeliveryRatingViewTypeWithLabel,
    DeliveryRatingViewTypeStarsOnly,
}DeliveryRatingViewType;

@interface DeliveryRatingView : UIView
@property (strong, nonatomic) NSMutableArray *completeStarsLabelArray;
@property (strong, nonatomic) NSMutableArray *halfStarsLabelArray;
@property (strong, nonatomic) UILabel *staticRatingLabel;
@property (strong, nonatomic) UIView *containerView;
@property (nonatomic) DeliveryRatingViewType ratingViewType;

- (id)initWithFrame:(CGRect)frame andDeliveryRatingViewType:(DeliveryRatingViewType)viewType;
- (void)setDeliveryRating:(NSNumber *)deliveryRating;
- (void)setDeliveryRating:(NSNumber *)deliveryRating customRatingColor:(UIColor *)color;


- (void) layoutViews;

@end
