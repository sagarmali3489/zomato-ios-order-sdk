//
//  BaseViewController.h
//  ZUIKit
//
//  Created by Udit Gupta on 01/07/15.
//  Copyright (c) 2015 Zomato. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZUINavigationHeaderView.h"
//#import <ZCommons/GAITrackedViewController.h>

@interface ZUIBaseViewController : UIViewController<ZUINavigationHeaderViewDelegate>

@property (strong, nonatomic) ZUINavigationHeaderView *headerView;
@property (assign, nonatomic) BOOL shouldShowChatHead;

//hides the status bar
-(id)initWithStatusBarHidden:(BOOL)statusBarHidden;

//show loader
- (void) showLoader;
- (void) showLoaderWithText : (NSString*) text;

//show nothing here view
- (void) showNothingHereViewWithText:(NSString *)text showReloadButton:(BOOL)shouldShowReloadButton;

//show nothing here view with icon and text
- (void) showNothingHereViewWithText:(NSString *)text andIcon:(NSString *)icon showReloadButton:(BOOL)shouldShowReloadButton;

//show nothing here view with icon and text and link
- (void) showNothingHereViewWithText:(NSString *)text andIcon:(NSString *)icon showReloadButton:(BOOL)shouldShowReloadButton andLink:(NSString *)link;

//hide nothing here view and loader also
- (void) hideNothingHereViewAndLoader;

//subclass this to add target to reload button in nothing here view
- (void) didTapReloadButton;

//to hide header view
- (void) setHeaderViewHidden:(BOOL)headerViewHidden;

//to add blur background to view controller's view
- (void) setBlurBackground;

//set loader overlay view background alpha
- (void) setLoaderOverlayViewAlpha:(CGFloat)alpha;

//show nothing here view for default error message
-(void) showNothingHereViewWithTextForError:(NSError *)error showReloadButton:(BOOL)shouldShowReloadButton;

//show nothing here view image
- (void) showNothingHereViewWithText:(NSString *)text andImage:(NSString *)imageString imageWidth:(CGFloat)imageWidth showReloadButton:(BOOL)shouldShowReloadButton ;

//show nothing here view image + big submit button
- (void) showNothingHereViewWithText:(NSString *)text andImage:(NSString *)imageString imageWidth:(CGFloat)imageWidth showReloadButton:(BOOL)shouldShowReloadButton bigButtonText:(NSString *)bigButtonText;


//set loader position y
- (void) setLoaderPositionY:(CGFloat)y;

//screen name for gai
@property (nonatomic, strong) NSString *screenName;

@end
