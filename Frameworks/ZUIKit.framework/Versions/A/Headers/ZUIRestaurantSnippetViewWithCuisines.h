//
//  ZUIRestaurantSnippetViewWithCusinies.h
//  ZUIKit
//
//  Created by Anurag Kabra on 10/10/15.
//  Copyright © 2015 Zomato. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZUILabel.h"
#import "ZUIImageView.h"
#import "ZUIView.h"
#import "ZUIRatingLabel.h"

@protocol ZUIRestaurantSnippetViewWithCuisinesDelegate <NSObject>

@optional
- (void)didTapRestaurantSnippet:(id)restaurant;

@end

@interface ZUIRestaurantSnippetViewWithCuisines : ZUIView

@property (nonatomic, strong) ZUIImageView *imageView;
@property (nonatomic, strong) ZUILabel *title;
@property (nonatomic, strong) ZUILabel *subtitle;
@property (nonatomic) BOOL verticalPaddingToZero;
@property (nonatomic, strong) ZUIRatingLabel *ratingLabel;
@property  (nonatomic,assign) BOOL shouldShowRating;
@property (nonatomic, weak) id<ZUIRestaurantSnippetViewWithCuisinesDelegate> delegate;
- (void) setRestaurant:(id)restaurant;

+ (CGFloat)getResSnippetHeight;
+ (CGFloat)getResSnippetHeightWithoutPadding;

@end
