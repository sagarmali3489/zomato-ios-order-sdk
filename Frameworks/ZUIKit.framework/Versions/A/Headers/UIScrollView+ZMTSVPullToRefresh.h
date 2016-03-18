//
// UIScrollView+SVPullToRefresh.h
//
// Created by Sam Vermette on 23.04.12.
// Copyright (c) 2012 samvermette.com. All rights reserved.
//
// https://github.com/samvermette/SVPullToRefresh
//

#import <UIKit/UIKit.h>
#import <AvailabilityMacros.h>

@class ZMTSVPullToRefreshView;

@interface UIScrollView (ZMTSVPullToRefresh)

typedef NS_ENUM(NSUInteger, ZMTSVPullToRefreshPosition) {
    ZMTSVPullToRefreshPositionTop = 0,
    ZMTSVPullToRefreshPositionBottom,
};

- (void)addZMTPullToRefreshWithActionHandler:(void (^)(void))actionHandler;
- (void)addZMTPullToRefreshWithActionHandler:(void (^)(void))actionHandler position:(ZMTSVPullToRefreshPosition)position;
- (void)triggerZMTPullToRefresh;

@property (nonatomic, strong, readonly) ZMTSVPullToRefreshView *pullToRefreshView;
@property (nonatomic, assign) BOOL showsPullToRefresh;

@end


typedef NS_ENUM(NSUInteger, ZMTSVPullToRefreshState) {
    ZMTSVPullToRefreshStateStopped = 0,
    ZMTSVPullToRefreshStateTriggered,
    ZMTSVPullToRefreshStateLoading,
    ZMTSVPullToRefreshStateAll = 10
};

@interface ZMTSVPullToRefreshView : UIView

@property (nonatomic, strong) UIColor *arrowZMTColor;
@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, strong, readonly) UILabel *titleLabel;
@property (nonatomic, strong, readonly) UILabel *subtitleLabel;
@property (nonatomic, strong, readwrite) UIColor *activityIndicatorViewColor NS_AVAILABLE_IOS(5_0);
@property (nonatomic, readwrite) UIActivityIndicatorViewStyle activityIndicatorViewStyle;

@property (nonatomic, readonly) ZMTSVPullToRefreshState state;
@property (nonatomic, readonly) ZMTSVPullToRefreshPosition position;

- (void)setZMTTitle:(NSString *)title forState:(ZMTSVPullToRefreshState)state;
- (void)setZMTSubtitle:(NSString *)subtitle forState:(ZMTSVPullToRefreshState)state;
- (void)setZMTCustomView:(UIView *)view forState:(ZMTSVPullToRefreshState)state;

- (void)startZMTAnimating;
- (void)stopZMTAnimating;

// deprecated; use setSubtitle:forState: instead
@property (nonatomic, strong, readonly) UILabel *dateLabel DEPRECATED_ATTRIBUTE;
@property (nonatomic, strong) NSDate *lastUpdatedDate DEPRECATED_ATTRIBUTE;
@property (nonatomic, strong) NSDateFormatter *dateFormatter DEPRECATED_ATTRIBUTE;

// deprecated; use [self.scrollView triggerZMTPullToRefresh] instead
- (void)triggerZMTRefresh DEPRECATED_ATTRIBUTE;

@end
