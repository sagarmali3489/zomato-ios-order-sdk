//
//  ChangeCardViewController.h
//  delivery
//
//  Created by Anurag Kabra on 06/05/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//

#import "OnlineOrderingModalBaseViewController.h"
#import "O2UserCreditCard.h"

@protocol O2ChangeCardViewControllerDelegate <NSObject>
@optional
-(void)selectedCardIndexFromChangeCardVC:(NSInteger)index;
-(void)addNewCardSelectedFromChangeCardVC;
@end

@interface O2ChangeCardViewController : OnlineOrderingModalBaseViewController

- (id) initWithCardsArray:(NSMutableArray *)cardsArray andRestaurant:(Restaurant *)restaurant;


@property (nonatomic, weak) id<O2ChangeCardViewControllerDelegate> delegate;


@end
