//
//  FirstRun.h
//  Zomato
//
//  Created by Nikunj Jain on 29/08/14.
//  Copyright (c) 2014 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol FirstRunDelegate <NSObject>

@optional
- (void) firstRunDismissed;

@end

@interface FirstRun : UIView

@property (nonatomic, weak) id<FirstRunDelegate> delegateVariable;

- (id) initWithTipX:(CGFloat)tipX withTipY:(CGFloat)tipY withDoneText:(NSString *)doneText withText:(NSAttributedString *)text withIsTipBottom:(BOOL)isTipBottom;

- (void) addToWindow;
- (void) removeFromWindow;

@end
