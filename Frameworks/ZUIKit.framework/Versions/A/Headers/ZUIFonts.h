//
//  ZUIFonts.h
//  ZUIKit
//
//  Created by Arpit Agarwal on 29/06/15.
//  Copyright (c) 2015 Zomato. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//icon fonts
#define FONT_ICON(X)                    [ZUIFonts iconFontWithSize:X]

//generic fonts
#define FONT_HELVETICA_BOLD(X)          [UIFont fontWithName:[ZUIKitSettings getFontMediumName] size:X]
#define FONT_BOLD(X)                    [UIFont fontWithName:[ZUIKitSettings getFontBoldName] size:X]
#define FONT_SEMIBOLD(X)                [UIFont fontWithName:[ZUIKitSettings getFontMediumName] size:X]
#define FONT_MEDIUM(X)                  [UIFont fontWithName:[ZUIKitSettings getFontMediumName] size:X]
#define FONT_MEDIUM_ALT(X)              [UIFont fontWithName:[ZUIKitSettings getFontRegularName] size:X]
#define FONT_REGULAR(X)                 [UIFont fontWithName:[ZUIKitSettings getFontRegularName] size:X]
#define FONT_LIGHT(X)                   [UIFont fontWithName:[ZUIKitSettings getFontThinName] size:X]



/*===================================== UILABEL FONTS ==============================================*/
#define FONT_ROUNDED_RECT_BUTTON             FONT_REGULAR(18)


/*==================================================================================================*/



/*===================================== UILABEL FONTS ==============================================*/
#pragma mark UILabel fonts

#define FONT_HOME_LABEL                 FONT_REGULAR([ZUIKitSettings getFontHomeLabel])

#define FONT_HOME_SUBLABEL              FONT_REGULAR([ZUIKitSettings getFontHomeSublabel])

/*Header View font. Already set. To be used for header views only.*/
#define FONT_NAV_BAR_LABEL              FONT_REGULAR([ZUIKitSettings getFontNavBarLabel])

/*To be used for as the standard font for Primary Single Line labels. E.g. Restaurant name in res snippet, User name in user snippet.*/
#define FONT_PRIMARY_LABEL              FONT_REGULAR([ZUIKitSettings getFontPrimaryLabel])

/*To be used for as the standard font for Primary Single Line labels. E.g. Restaurant name in res snippet, User name in user snippet.*/
#define FONT_ALTERNATE_PRIMARY_LABEL    FONT_MEDIUM([ZUIKitSettings getFontAlternatePrimaryLabel])

/*To be used for Title of menu items. Mostly used in TableViewCells. For e.g. Photos, reviews, menus.*/
#define FONT_TITLETEXT_LABEL            FONT_MEDIUM([ZUIKitSettings getFontTitletextLabel])

/*To be used for subtext accompanying a Title or a Primary label. Eg. When location is displayed under a restaurant name.*/
#define FONT_SUBTEXT_LABEL              FONT_REGULAR([ZUIKitSettings getFontSubtextLabel])

/*To be used for all the body text. E.g. Review text, restaurant info */
#define FONT_BODY_LABEL                 FONT_REGULAR([ZUIKitSettings getFontBodyLabel])
#define FONT_BODY_LABEL_BOLD            FONT_BOLD([ZUIKitSettings getFontBodyLabelBold])

/*To be used while displaying the rating of a restaurant.*/
#define FONT_RATING_LABEL               FONT_HELVETICA_BOLD([ZUIKitSettings getFontRatingLabel])

/*To be used while displaying the rating of a restaurant.*/
#define FONT_RATING_LABEL_SMALL         FONT_HELVETICA_BOLD([ZUIKitSettings getFontRatingLabelSmall])
#define FONT_RATING_LABEL_MEDIUM        FONT_HELVETICA_BOLD([ZUIKitSettings getFontRatingLabelMedium])

/*To be used for diplaying tags. eg. "open now"*/
#define FONT_TAG_LABEL                  FONT_REGULAR([ZUIKitSettings getFontTagLabel])

/*To be used for page headings(not in nav bar). Eg. Hello Udit on home page.*/
#define FONT_HERO_LABEL                 FONT_LIGHT([ZUIKitSettings getFontHeroLabel])

/*To be used for labels on an overlay. E.g. Phone Number picker.*/
#define FONT_OVERLAY_LABEL              FONT_REGULAR([ZUIKitSettings getFontOverlayLabel])

/*To be used for a very small sized subtext. E.g. subtext under the facebook login button.*/
#define FONT_TINY_LABEL                 FONT_REGULAR([ZUIKitSettings getFontTinyLabel])
#define FONT_TINY_LABEL_BOLD            FONT_BOLD([ZUIKitSettings getFontTinyLabelBold])

/*To be used for a for search info strings.*/
#define FONT_SEARCH_INFO_LABEL          FONT_REGULAR([ZUIKitSettings getFontSearchInfoLabel])

/*Font to be used in Table section headers. */
#define FONT_SECTION_HEADER_LABEL       FONT_HELVETICA_BOLD([ZUIKitSettings getFontSectionHeaderLabel])
#define FONT_SECTION_HEADER_LABEL_KERN  @(0.5)

/*Font to be used as an alter to Table section headers. */
#define FONT_SECTION_HEADER_ALTERNATE_LABEL       FONT_SEMIBOLD([ZUIKitSettings getFontSectionHeaderAlternateLabel])
#define FONT_SECTION_HEADER_ALTERNATE_LABEL_KERN  @(1.0)

/* Font to be used for big dark labels */
#define FONT_WEEK_BADGE_LABEL           FONT_HELVETICA_BOLD([ZUIKitSettings getFontWeekBadgeLabel])

/* Font to be used for underlined text*/
#define FONT_UNDERLINE_LABEL            FONT_BODY_LABEL

/* Font to be used for price labels */
#define FONT_PRICE_LABEL           FONT_HELVETICA_BOLD([ZUIKitSettings getFontPriceLabel])

/*Font to be used in Info headers. */
#define FONT_INFO_HEADER_LABEL          FONT_MEDIUM_ALT([ZUIKitSettings getFontInfoHeaderLabel])

/*Font to be used for tagged users. */
#define FONT_TAGGED_USER            FONT_HELVETICA_BOLD([ZUIKitSettings getFontTaggedUser])

/*Font to be used for Small Headings Label. */
#define FONT_SMALL_HEADINGS_LABEL       FONT_REGULAR([ZUIKitSettings getFontSmallHeadingsLabel])
#define FONT_SMALL_HEADINGS_LABEL_KERN  @(0)

/*Font to be used for order checkout flow button */
#define FONT_SUBMIT_BUTTON FONT_SEMIBOLD([ZUIKitSettings getFontSubmitButton])


/*==================================================================================================*/

@interface ZUIFonts : NSObject

+ (UIFont *)iconFontWithSize:(NSInteger)size;

@end
