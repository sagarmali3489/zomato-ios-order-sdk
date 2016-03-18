//
//  SelectBankViewController.h
//  delivery
//
//  Created by Nikunj on 09/05/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//

#import "ZUIKit/ZUIKit.h"

@protocol SelectBankViewControllerDelegate <NSObject>

@optional
-(void) bankSelectedWithBankId:(NSNumber *)bankId andAmount:(NSNumber *)amount;

@optional
-(void) bankSelectedWithBankId:(NSNumber *)bankId;

@end


@interface SelectBankViewController : ZUIBaseViewController

- (id) initWithBanksArray:(NSArray *)banksArray isModal:(BOOL)isModal andBankID:(NSNumber *) bankID;

@property (nonatomic , weak) id<SelectBankViewControllerDelegate> delegate;

@end
