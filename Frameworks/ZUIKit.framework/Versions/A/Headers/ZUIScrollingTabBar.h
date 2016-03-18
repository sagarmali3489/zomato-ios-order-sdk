//
//  ZUIScrollingTabBar.h
//  ZUIKit
//
//  Created by Arpit Agarwal on 09/07/15.
//  Copyright (c) 2015 Zomato. All rights reserved.
//


#import <UIKit/UIKit.h>
#define TOP_BACKGROUND_COLOR 0x494d5e

typedef NS_ENUM(NSInteger, ZUIScrollingTabBarType) {
    ZUIScrollingTabBarTypeDefaultDark,    //OnlineOrderingCollectionHeaderViewTypeDarkDefault,
    ZUIScrollingTabBarTypeLightOpaque,    //OnlineOrderingCollectionHeaderViewTypeLight,
    ZUIScrollingTabBarTypeLightTransparent    //OnlineOrderingCollectionHeaderViewTypeTransparentLight
};

@protocol ZUIScrollingTabBarDelegate <NSObject>

@optional
- (void) scrollMenusContentCollectionViewToIndex:(NSInteger)index;

@end

@interface ZUIScrollingTabBar : UIView


/**
 *  Set this delegate for ZUIScrollingTabBarDelegate protocol
 */
@property (nonatomic, weak) id<ZUIScrollingTabBarDelegate> delegate;



/**
 *  This property stores the text on the tabs of the bar. Set this with a text array to show required tabs.
 */
@property (nonatomic, strong) NSArray *tabStringsArray;



/**
 *  Moves the current tab to the index passed here
 *
 *  @param index index is the current position on the tab bar. Call this function to set the current tab position.
 */
- (void) moveToIndex:(NSInteger)index;


/**
 *  Call this function to show intermediate change when a scroll is in progress is done.
 *
 *  @param percentage The percentage amout of scroll between the current and the next tab
 *  @param index      The index the tab bar is currently at
 */
- (void) scrollWithPercentageChange:(CGFloat)percentage fromIndex:(NSInteger)index;



- (id)initWithFrame:(CGRect)frame;

- (id)initWithFrame:(CGRect)frame andZUIScrollingTabBarType:(ZUIScrollingTabBarType)initTypeOfView;


@end