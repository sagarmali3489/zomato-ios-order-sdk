//
//  ZUIRestaurantSnippetTableViewCell.h
//  ZUIKit
//
//  Created by Nikunj on 01/08/15.
//  Copyright (c) 2015 Zomato. All rights reserved.
//

#import <ZUIKit/ZUIKit.h>

@class ZUIRestaurantSnippetView;

@interface ZUIRestaurantSnippetTableViewCell : ZUITableViewCell

@property (nonatomic,strong)  ZUIRestaurantSnippetView* resSnippetView;

- (void) setRestaurant:(id)restaurant;
-(void) setShouldShowRestaurantSnippetRating:(BOOL)shouldShowRating;
+ (CGFloat) getCellHeight;


@end
