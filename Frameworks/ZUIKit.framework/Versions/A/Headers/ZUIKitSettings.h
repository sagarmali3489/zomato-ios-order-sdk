//
//  ZUIKitSettings.h
//  ZUIKit
//
//  Created by Nikunj on 03/07/15.
//  Copyright (c) 2015 Zomato. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum{
    
    HeaderViewThemeCustom,
    HeaderViewThemeDefault
    
}HeaderViewTheme;


@interface ZUIKitSettings : NSObject

/**
 *  Set the following at the start when you are using ZUIKit.
 *
 */

//main color
+ (void) setMainColorHex:(NSInteger)mainColorHex;

//background image name
+ (void) setBackgroundImageName:(NSString *)backgroundImageName;

//local notification icon image
+ (void) setLocalNotificationIconImage:(UIImage *)localNotificationIconImage;

//tab bar height in app
+ (void) setTabBarHeight:(NSInteger)tabBarHeight;

// Accent Color (Specific to bake)
+ (void) setAccentColor:(NSInteger) accentColor;

//ZUISubmit Button Color
+ (void) setZuiSubmitButtonColor:(NSInteger) submitButtonColor;

//ZUIRoundedRect Button Color
+ (void) setZUiRoundedRectButtonColor:(NSInteger) roundedRectButtonColor;

//HeaderViewTheme
+ (void) setHeaderViewTheme:(HeaderViewTheme) headerViewTheme;


//For setting fonts from external sdk clients
+ (void) setFontRegularName:(NSString *)fontName;
+ (void) setFontMediumName:(NSString *)fontName;
+ (void) setFontBoldName:(NSString *)fontName;
+ (void) setFontThinName:(NSString *)fontName;

//Getters - Used in ZUIKit
+ (NSInteger) getMainColorHex;
+ (NSString *) getBackgroundImageName;
+ (UIImage *) getLocalNotificationIconImage;
+ (NSInteger) getTabBarHeight;

+ (NSInteger) getAccentColor;
+ (HeaderViewTheme) getHeaderViewThemeType;
+ (NSInteger) getZuiRoundedRectButtonColor;
+ (NSInteger) getZuiSubmitButtonColor;

+ (NSString *) getFontRegularName;
+ (NSString *) getFontMediumName;
+ (NSString *) getFontBoldName;
+ (NSString *) getFontThinName;


// Getting Font Size

+ (NSInteger) getFontHomeLabel;
+ (NSInteger) getFontHomeSublabel;
+ (NSInteger) getFontNavBarLabel;
+ (NSInteger) getFontPrimaryLabel;
+ (NSInteger) getFontAlternatePrimaryLabel;
+ (NSInteger) getFontTitletextLabel;
+ (NSInteger) getFontSubtextLabel;
+ (NSInteger) getFontBodyLabel;
+ (NSInteger) getFontBodyLabelBold;
+ (NSInteger) getFontRatingLabel;
+ (NSInteger) getFontRatingLabelSmall;
+ (NSInteger) getFontRatingLabelMedium;
+ (NSInteger) getFontTagLabel;
+ (NSInteger) getFontHeroLabel;
+ (NSInteger) getFontOverlayLabel;
+ (NSInteger) getFontTinyLabel;
+ (NSInteger) getFontTinyLabelBold;
+ (NSInteger) getFontSearchInfoLabel;
+ (NSInteger) getFontSectionHeaderLabel;
+ (NSInteger) getFontSectionHeaderAlternateLabel;
+ (NSInteger) getFontWeekBadgeLabel;
+ (NSInteger) getFontPriceLabel;
+ (NSInteger) getFontInfoHeaderLabel;
+ (NSInteger) getFontTaggedUser;
+ (NSInteger) getFontSmallHeadingsLabel;
+ (NSInteger) getFontSubmitButton;




// Settings Font Sizes
+ (void) setFontHomeLabel:(NSInteger) fontHomeLabel;
+ (void) setFontHomeSublabel:(NSInteger) fontHomeSublabel;
+ (void) setFontNavBarLabel:(NSInteger) fontNavBarLabel;
+ (void) setFontPrimaryLabel:(NSInteger) fontPrimaryLabel;
+ (void) setFontAlternatePrimaryLabel:(NSInteger) fontAlternatePrimaryLabel;
+ (void) setFontTitletextLabel:(NSInteger) fontTitletextLabel;
+ (void) setFontSubtextLabel:(NSInteger) fontSubtextLabel;
+ (void) setFontBodyLabel:(NSInteger) fontBodyLabel;
+ (void) setFontBodyLabelBold:(NSInteger) fontBodyLabelBold;
+ (void) setFontRatingLabel:(NSInteger) fontRatingLabel;
+ (void) setFontRatingLabelSmall:(NSInteger) fontRatingLabelSmall;
+ (void) setFontRatingLabelMedium:(NSInteger) fontRatingLabelMedium;
+ (void) setFontTagLabel:(NSInteger) fontTagLabel;
+ (void) setFontHeroLabel:(NSInteger) fontHeroLabel;
+ (void) setFontOverlayLabel:(NSInteger) fontOverlayLabel;
+ (void) setFontTinyLabel:(NSInteger) fontTinyLabel;
+ (void) setFontTinyLabelBold:(NSInteger) fontTinyLabelBold;
+ (void) setFontSearchInfoLabel:(NSInteger) fontSearchInfoLabel;
+ (void) setFontSectionHeaderLabel:(NSInteger) fontSectionHeaderLabel;
+ (void) setFontSectionHeaderAlternateLabel:(NSInteger) fontSectionHeaderAlternateLabel;
+ (void) setFontWeekBadgeLabel:(NSInteger) fontWeekBadgeLabel;
+ (void) setFontPriceLabel:(NSInteger) fontPriceLabel;
+ (void) setFontInfoHeaderLabel:(NSInteger) fontInfoHeaderLabel;
+ (void) setFontTaggedUser:(NSInteger) fontTaggedUser;
+ (void) setFontSmallHeadingsLabel:(NSInteger) fontSmallHeadingsLabel;
+ (void) setFontSubmitButton:(NSInteger) fontSubmitButton;


// Getters for colors
+ (NSInteger) getColorHomeLabel;
+ (NSInteger) getColorHomeSublabel;
+ (NSInteger) getColorPrimaryLabel;
+ (NSInteger) getColorTitletextLabel;
+ (NSInteger) getColorSubtextLabel;
+ (NSInteger) getColorBodyLabel;
+ (NSInteger) getColorNavBarLabel;
+ (NSInteger) getColorHeroLabel;
+ (NSInteger) getColorOverlayLabel;
+ (NSInteger) getColorSectionHeaderLabel;
+ (NSInteger) getColorSectionHeaderLabelAlternate;
+ (NSInteger) getColorInfoHeaderLabel;
+ (NSInteger) getColorTinyLabel;
+ (NSInteger) getColorUnderlineLabel;
+ (NSInteger) getColorIconFgRoundedLabel;
+ (NSInteger) getColorIconBgRoundedLabel;
+ (NSInteger) getColorPriceLabel;
+ (NSInteger) getColorTaggedUser;
+ (NSInteger) getColorSearchInfoLabel;


// Setters for Colors
+ (void) setColorHomeLabel:(NSInteger)colorHomeLabel;
+ (void) setColorHomeSublabel:(NSInteger)colorHomeSublabel;
+ (void) setColorPrimaryLabel:(NSInteger)colorPrimaryLabel;
+ (void) setColorTitletextLabel:(NSInteger)colorTitletextLabel;
+ (void) setColorSubtextLabel:(NSInteger)colorSubtextLabel;
+ (void) setColorBodyLabel:(NSInteger)colorBodyLabel;
+ (void) setColorNavBarLabel:(NSInteger)colorNavBarLabel;
+ (void) setColorHeroLabel:(NSInteger)colorHeroLabel;
+ (void) setColorOverlayLabel:(NSInteger)colorOverlayLabel;
+ (void) setColorSectionHeaderLabel:(NSInteger)colorSectionHeaderLabel;
+ (void) setColorSectionHeaderLabelAlternate:(NSInteger)colorSectionHeaderLabelAlternate;
+ (void) setColorInfoHeaderLabel:(NSInteger)colorInfoHeaderLabel;
+ (void) setColorTinyLabel:(NSInteger)colorTinyLabel;
+ (void) setColorUnderlineLabel:(NSInteger)colorUnderlineLabel;
+ (void) setColorIconFgRoundedLabel:(NSInteger)colorIconFgRoundedLabel;
+ (void) setColorIconBgRoundedLabel:(NSInteger)colorIconBgRoundedLabel;
+ (void) setColorPriceLabel:(NSInteger)colorPriceLabel;
+ (void) setColorTaggedUser:(NSInteger)colorTaggedUser;
+ (void) setColorSearchInfoLabel:(NSInteger)colorSearchInfoLabel;

@end
