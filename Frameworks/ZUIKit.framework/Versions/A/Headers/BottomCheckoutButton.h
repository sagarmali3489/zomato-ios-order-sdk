//
//  BottomCheckoutButton.h
//  ZO2Kit
//
//  Created by Anurag Kabra on 09/09/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <ZUIKit/ZUIKit.h>

#define BOTTOM_BUTTON_HEIGHT 64

@protocol BottomCheckoutButtonDelegate <NSObject>

- (void) bottomCheckoutButtonTapped;

@end


@interface BottomCheckoutButton : ZUIView


@property (nonatomic, weak) id<BottomCheckoutButtonDelegate> delegate;

@property (nonatomic, strong) UILabel *titleLabel;

- (void) setTitle:(NSString *)title withArrow:(BOOL)withArrow;
- (void) setEnabled:(BOOL)enabled;
- (void) setTitle:(NSString *)title animated:(BOOL)animated;
- (void) setNumberOfItems:(NSInteger)itemCount price:(NSString *)price;
- (void) setArrowHidden:(BOOL) isHidden;

@end
