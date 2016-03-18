//
//  ZUILabel.h
//  Zomato
//
//  Created by Anil Bunkar on 29/06/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, ZUILabelType) {
    /* To be used for navigation bar title */
    ZUILabelTypeNavigationBar=0,
    
    /* To be used for header for of a cell*/
    ZUILabelTypePrimary,

    /* To be used for header for of a cell*/
    ZUILabelTypePrimaryAlternate,

    /* Used in big list table view cell */
    ZUILabelTypeTitleText,
    
    /* To be used for Subtext Label after Header */
    ZUILabelTypeSubtext,
    
    /*To be used for body text */
    ZUILabelTypeBody,
    ZUILabelTypeHero
    /* To be used for the big title, restaurant name */
    ,
    
    /* To be used for overlay text */
    ZUILabelTypeOverlay,
    
    /* To be used for section headers */
    ZUILabelTypeSectionHeader,
    
    /* To be used as an alternative to section headers */
    ZUILabelTypeSectionHeaderAlternate,
    
    /* To be used for information headers */
    ZUILabelTypeInfoHeader,
    
    /* smallest text for extra information */
    ZUILabelTypeTiny,
    
    /* big dark badge for day of week. just set x, y position of label. using sizeToFit to set frame */
    ZUILabelTypeWeekBadge,
    
    /* To be used for icon labels*/
    ZUILabelTypeIcon,
    
    /* To be used for text with underline.*/
    ZUILabelTypeUnderline,

    /* To be used for displaying rounded icon label, set truncates and set height will not work with it */
    ZUILabelTypeIconRounded,

    /* price label */
    ZUILabelTypePriceLabel,
    
    /* small label */
    ZUILabelTypeSmallHeadingsLabel,
    
    /* Label like home cells title in consumer */
    ZUILabelTypeShowcaseTitleText,
    
    /* Label like home cells subtext in consumer */
    ZUILabelTypeShowcaseSubtext,

    /* Label like home cells subtext in consumer */
    ZUILabelTypeSearchInfo,
    
    /* Label to be used when the font should be the icons*/ /*eg: price range*/
    ZUILabelTypeFontIconString
};


@interface ZUILabel : UILabel

@property (nonatomic) BOOL shouldTruncate;
@property (nonatomic) CGFloat height;

- (id)initWithType: (ZUILabelType)labelType;

+ (CGFloat) getHeightWithText:(NSString *)text withLabelType:(ZUILabelType)labelType withWidth:(CGFloat)width shouldTruncate:(BOOL)shouldTruncate;

/*
 *  Add an action for the label for the touch up inside event. 
 */
- (void)setTarget:(id)target action:(SEL)action;


/**
 *  Icon Label Font Size (if the current label type is ZUILabelTypeFontIconString)
 *  DEFAULT VALUE = 12
 */
@property (nonatomic, readwrite) NSInteger iconSizeForLabelTypeFontIconString;


- (void) setDefaultColor;


@end
