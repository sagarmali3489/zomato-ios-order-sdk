//
//  FilterCuisinesViewController.h
//  Zomato
//
//  Created by Udit Gupta on 10/02/14.
//  Copyright (c) 2014 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ZO2Kit/FilterParam.h>
#import "ZO2Prefix.h"

@protocol O2FilterCuisinesDelegate <NSObject>

@required
- (void) didSelectCuisine;

@end


@interface O2FilterCuisinesViewController : ZUIBaseViewController <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate>

@property (weak, nonatomic) id<O2FilterCuisinesDelegate> delegate;
@property (nonatomic,strong) ZUITableView *cuisinesTableView;

- (id) initWithCuisinesArray:(NSArray *)cuisinesArrayLocal;

@end