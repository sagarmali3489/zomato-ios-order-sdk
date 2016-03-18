//
//  ZUIColors.h
//  ZUIKit
//
//  Created by Arpit Agarwal on 30/06/15.
//  Copyright (c) 2015 Zomato. All rights reserved.
//

#import "ZUIKitSettings.h"

#ifndef ZUIKit_ZUIColors_h
#define ZUIKit_ZUIColors_h


//Zomato Color Palatte
#pragma mark - Zomato Color Palatte

//main color
#define MAIN_COLOR                              [ZUIKitSettings getMainColorHex]

#define ACCENT_COLOR                            [ZUIKitSettings getAccentColor]

//ZUISubmitButton Color
#define ZUI_SUBMIT_BUTTON_COLOR                 [ZUIKitSettings getZuiSubmitButtonColor]

//ZUIRoundedRectButton Color
#define ZUI_ROUNDED_RECT_BUTTON_COLOR           [ZUIKitSettings getZuiRoundedRectButtonColor]


//primary colors
#define COLOR_BLACK                             0x000000
#define COLOR_BLACK_CUSTOM                      0x4d4d4d
#define COLOR_DARK_GREY                         0x9d9d9d
#define COLOR_LIGHT_GREY                        0xE7E7E7
#define COLOR_WHITE                             0xFFFFFF

//secondary colors
#define COLOR_GREEN                             0x099e44
#define COLOR_GREEN_FEEDBACK                    0x0fb14a

#define COLOR_YELLOW                            0xFFD35D
#define COLOR_BRIGHT_YELLOW                     0xFFFCED
#define COLOR_DARK_YELLOW                       0xF7CA4F
#define COLOR_BLUE                              0xacd8e1
#define COLOR_LIGHT_RED                         0xE71323
#define COLOR_ZOMATO_VERIFIED_BLUE              0x00aacc
#define COLOR_VERIFIED_BLUE_COLOR_FEEDBACK      0x009bba
#define COLOR_RED                               0xcb202d
#define COLOR_ORANGE                            0xf58552
#define COLOR_ZOMATO_CELEBRITY_GOLDEN           0xffd35d
#define COLOR_INSTAGRAM                         0x3f729b
//separator colors
#define COLOR_SEPARATOR_BACKGROUND              0xE7E7E7
#define COLOR_FOOTER_TEXT                       0xA8A8A8
#define COLOR_ZOMATO_INSTRUCTION                0xffedd2

//label colors
#pragma mark - Zomato Label Colors
#define COLOR_HOME_LABEL                    [ZUIKitSettings getColorHomeLabel]
#define COLOR_HOME_SUBLABEL                     [ZUIKitSettings getColorHomeSublabel]
#define COLOR_PRIMARY_LABEL                 [ZUIKitSettings getColorPrimaryLabel]
#define COLOR_TITLETEXT_LABEL               [ZUIKitSettings getColorTitletextLabel]
#define COLOR_SUBTEXT_LABEL                     [ZUIKitSettings getColorSubtextLabel]
#define COLOR_BODY_LABEL                 [ZUIKitSettings getColorBodyLabel]
#define COLOR_NAV_BAR_LABEL                 [ZUIKitSettings getColorNavBarLabel]
#define COLOR_HERO_LABEL                    [ZUIKitSettings getColorHeroLabel]
#define COLOR_OVERLAY_LABEL                     [ZUIKitSettings getColorOverlayLabel]
#define COLOR_SECTION_HEADER_LABEL              [ZUIKitSettings getColorSectionHeaderLabel]
#define COLOR_SECTION_HEADER_LABEL_ALTERNATE    [ZUIKitSettings getColorSectionHeaderLabelAlternate]
#define COLOR_INFO_HEADER_LABEL                 [ZUIKitSettings getColorInfoHeaderLabel]
#define COLOR_TINY_LABEL                        [ZUIKitSettings getColorTinyLabel]
#define COLOR_UNDERLINE_LABEL               [ZUIKitSettings getColorUnderlineLabel]
#define COLOR_ICON_FG_ROUNDED_LABEL         [ZUIKitSettings getColorIconFgRoundedLabel]
#define COLOR_ICON_BG_ROUNDED_LABEL         [ZUIKitSettings getColorIconBgRoundedLabel]
#define COLOR_PRICE_LABEL                [ZUIKitSettings getColorPriceLabel]
#define COLOR_TAGGED_USER                       [ZUIKitSettings getColorTaggedUser]
#define COLOR_SEARCH_INFO_LABEL                 [ZUIKitSettings getColorSearchInfoLabel]

//button colors
#pragma mark - ZUIRoundedRectButton Colors
#define COLOR_SUBMIT_BUTTON                     COLOR_WHITE
#define COLOR_ORDER_BUTTON                      0xd54100
#define COLOR_CASHLESS_BUTTON                   COLOR_ZOMATO_VERIFIED_BLUE
#define COLOR_FLAT_CANCEL_BUTTON                COLOR_DARK_GREY
#define COLOR_FLAT_ADD_BUTTON                   ACCENT_COLOR

//section header colors
#define COLOR_SECTION_HEADER 0xFAFAFA

//background Colors
#define COLOR_BACKGROUND_SNIPPETS               UIColorFromRGBWithAlpha(COLOR_LIGHT_GREY, 0.6)
#define COLOR_BACKGROUND_SEARCH                 0xDEDEDE
#define COLOR_HEADER_VIEW                       UIColorFromRGBWithAlpha(0xF4F4F4, 1.0)
#endif
