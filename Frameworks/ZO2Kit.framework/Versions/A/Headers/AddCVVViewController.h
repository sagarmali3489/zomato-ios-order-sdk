//
//  AddCVVViewController.h
//  delivery
//
//  Created by Nikunj on 08/05/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//

#import "O2UserCreditCard.h"
#import "ZUIKit/ZUIKit.h"

@protocol AddCVVViewControllerDelegate <NSObject>

@optional
-(void) paymentMethodAddedSuccessfullyWithNewCard:(O2UserCreditCard *)card andAmount:(NSNumber *)amount isScanned:(NSNumber *)isScanned;

@optional
-(void) paymentMethodAddedSuccessfullyWithPreviousCard:(O2UserCreditCard *)card andAmount:(NSNumber *)amount;

@end


@interface AddCVVViewController : ZUIBaseViewController

- (id) initWithCreditCard:(O2UserCreditCard *)creditCardLocal withPaymentAmount:(NSNumber *)paymentAmountLocal;

@property (nonatomic , weak) id<AddCVVViewControllerDelegate> delegate;

@end
