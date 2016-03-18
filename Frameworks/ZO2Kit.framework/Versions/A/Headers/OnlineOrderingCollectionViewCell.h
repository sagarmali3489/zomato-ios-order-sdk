//
//  OnlineOrderingCollectionViewCell.h
//  Zomato
//
//  Created by Nikunj on 10/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DeliveryMenu.h"
#import "OnlineOrderingViewController.h"

@protocol OnlineOrderingCollectionViewCellScrollDelegate <NSObject>

@optional
- (void)cellDidChangeOffsetY:(CGFloat)offsetY;

@end

@interface OnlineOrderingCollectionViewCell : UICollectionViewCell

@property (nonatomic, weak)id<OnlineOrderingCollectionViewCellScrollDelegate> scrollDelegate;

@property (nonatomic, weak) OnlineOrderingViewController *mainVC;
- (void) setDeliveryMenu:(DeliveryMenu *)deliveryMenuLocal;

@end
