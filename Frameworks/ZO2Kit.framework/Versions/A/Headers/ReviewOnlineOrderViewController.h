//
//  ReviewOnlineOrderViewController.h
//  Zomato
//
//  Created by Nikunj on 13/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import "OnlineOrderingViewController.h"

@interface ReviewOnlineOrderViewController : ZUIBaseViewController

@property (nonatomic, weak) OnlineOrderingViewController *mainVC;
- (id) initWithMainVC:(OnlineOrderingViewController *)mainVCLocal;

@end
