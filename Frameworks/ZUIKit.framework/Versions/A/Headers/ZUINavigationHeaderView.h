//
//  NavigationHeaderView.h
//  ZUIKit
//
//  Created by Udit Gupta on 01/07/15.
//  Copyright (c) 2015 Zomato. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ZUINavigationHeaderViewDelegate <NSObject>

@required
- (void)didTapBackButton;

@required
- (void)didTapRightActionBarButton;

@end

@interface ZUINavigationHeaderView : UIView

@property (weak, nonatomic) id delegate;
@property (nonatomic) BOOL shouldHideBackButton;
@property (nonatomic) BOOL shouldShowCancelButton;
@property (nonatomic) BOOL shouldHideRightButton;

-(id)initWithStatusBarHidden:(BOOL)statusBarHidden;
- (void)setTitleLabelText:(NSString *)titleLabelText;
- (void)setRightBarButtonText:(NSString *)rightActionButtonText;
- (void)setRightBarButtonIcon:(NSString *)rightActionButtonIcon;
- (void)setShouldShowCancelButton:(BOOL)shouldShowCancelButton withText:(NSString *)text;
- (void)setShouldShowCancelButton:(BOOL)shouldShowCancelButton withIcon:(NSString *)text;
- (void)setShouldShowCancelButton:(BOOL)shouldShowCancelButton withIcon:(NSString *)text fontSize:(float)fontSize;
- (void)setShouldShowBottomSeparator:(BOOL)shouldShowBottomSeparator;

- (void)setShouldHideRightButton:(BOOL)shouldHideRightButton;

- (void)setCancelButtonEnabled:(BOOL)enabled;
- (void)setRightButtonEnabled:(BOOL)enabled;

- (void) addGestureRecognizersToTitleLabel:(UITapGestureRecognizer *)gestureRecognizer;
- (void) removeGestureRecognizersFromTitleLabel:(UITapGestureRecognizer *)gestureRecognizer;

@end
