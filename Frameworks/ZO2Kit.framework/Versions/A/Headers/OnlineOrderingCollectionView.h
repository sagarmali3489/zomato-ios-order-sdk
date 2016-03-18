//
//  OnlineOrderingCollectionView.h
//  Zomato
//
//  Created by Nikunj on 10/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OnlineOrderingViewController.h"
#import "OnlineOrderingCollectionViewCell.h"

@protocol OnlineOrderingCollectionViewScrollDelegate <NSObject>

@optional
- (void)didChangeOffsetY:(CGFloat)offsetY;

@end

@interface OnlineOrderingCollectionView : UICollectionView

@property (nonatomic, weak) ZUIScrollingTabBar *scrollingTabBar;
@property (nonatomic, weak) OnlineOrderingViewController *mainVC;
@property (nonatomic, weak)id<OnlineOrderingCollectionViewScrollDelegate> scrollDelegate;

- (void) setMenusArray:(NSMutableArray *)menusArrayLocal;

@end
