//
//  ZUIRestaurantSnippetView.h
//  ZUIKit
//
//  Created by Anil Bunkar on 01/07/15.
//  Copyright (c) 2015 Zomato. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZUILabel.h"
#import "ZUIImageView.h"
#import "ZUIView.h"
#import "ZUIRatingLabel.h"

@protocol ZUIRestaurantSnippetViewDelegate <NSObject>

@optional
- (void)didTapRestaurantSnippet:(id)restaurant;

@end

@interface ZUIRestaurantSnippetView : ZUIView

@property (nonatomic, strong) ZUIImageView *imageView;
@property (nonatomic, strong) ZUILabel *title;
@property (nonatomic, strong) ZUILabel *subtitle;
@property (nonatomic) BOOL verticalPaddingToZero;
@property (nonatomic, strong) ZUIRatingLabel *ratingLabel;
@property  (nonatomic,assign) BOOL shouldShowRating;
@property (nonatomic, weak) id<ZUIRestaurantSnippetViewDelegate> delegate;
@property  (nonatomic,assign) BOOL shouldShowRatingInline;

- (void) setRestaurant:(id)restaurant;

+ (CGFloat)getResSnippetHeight;
+ (CGFloat)getResSnippetHeightWithoutPadding;

@end
