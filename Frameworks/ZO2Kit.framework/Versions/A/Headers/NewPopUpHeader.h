//
//  PopupHeader.h
//
//
//  Created by Sumit on 27/03/14.
//
//

#import <UIKit/UIKit.h>
#import "ZO2Prefix.h"

@protocol newPopupHeaderDelegate <NSObject>

@optional
- (void) proceedToUpload;

@optional
- (void) didTapSearchButton;

@optional
- (void) searchTextFieldDidChange:(ZUITextField *)textField;

@optional
- (void) hideSearchView;

@end

@interface NewPopupHeader : UIView


//@property (weak, nonatomic) id parentVC;
@property (strong, nonatomic) ZUILabel *title;
@property (strong, nonatomic) UILabel *subTitle;
@property (strong, nonatomic) ZUILabel *subTitle2;
@property (strong, nonatomic) UIButton *nextButton;
@property (strong, nonatomic) UIButton *backButton;
@property (strong, nonatomic) UIView *headerView;
@property (weak, nonatomic) id<newPopupHeaderDelegate> popupHeaderDelegate;
@property (nonatomic, strong) UIButton *searchButton;
@property (nonatomic, strong) ZUITextField *searchField;
@property (nonatomic, strong) UIButton *cancelButton;
@property (nonatomic) BOOL shouldShowStatusBar;

//search stuff
@property (nonatomic, strong) UIView *searchIconLeftView;
@property (nonatomic, strong) UILabel *searchIconLeftViewLabel;


/* This class is used to create popup header. This method returns a UIView that can be used in view controllers to create popup headers.       */

-(id)initMainHeaderWithParent:(id)parent withTitle:(NSString *)titleText andnextbutton:(NSString *)nextButtonText andbackbuttonText:(NSString *)backButtonText;

- (id)initMainHeaderWithParent:(id)parent withTitle:(NSString *)titleText andnextbutton:(NSString *)nextButtonText andbackbuttonText:(NSString *)backButtonText nextButtonIsSearch:(BOOL)isNextButtonSearch withShowStatusBar:(BOOL) showStatusBar;

- (void) updateColorsForTopPosition:(BOOL)isTopPosition;

@end
