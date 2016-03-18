//
//  ZUIEmptyStateView.h
//  ZUIKit
//
//  Created by Arpit Agarwal on 09/07/15.
//  Copyright (c) 2015 Zomato. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ZUIKit/ZUIButton.h>

@protocol ZUIEmptyStateViewActionDelegate <NSObject>

@optional
- (void)didTapReloadButton;

@optional
- (void)didTapLinkInNothingHereView;

@optional
- (void)didTapBigActionButton;

@end

@interface ZUIEmptyStateView : UIView

/**
 *  Set this property for setting the big icon on the empty state page. A default value is also provided
 */
@property (nonatomic, strong)NSString *bigIconText;

/**
 *  Set this for showing a subtext below the big icon.
 */
@property (nonatomic, strong)NSString *subText;

/**
 *  Set this for showing a link below the subtext.
 */
@property (nonatomic, strong) NSString *link;


/**
 *  Set this for showing a link below the subtext.
 */
@property (nonatomic, strong) NSString *bigActionButtonText;

/**
 *  Set this for showing a image .
 */
@property (nonatomic, strong)NSString *imageString;
@property (nonatomic) CGFloat imageWidth;

/**
 *  Setting this property to YES, shows a reload button. Use ZUIEmptyStateViewActionDelegate protocol delegate method 'didTapReloadButton' to know if tapped.
 */
@property (nonatomic, assign)BOOL shouldShowReloadButton;


@property (nonatomic, weak) id<ZUIEmptyStateViewActionDelegate> delegate;

@end
