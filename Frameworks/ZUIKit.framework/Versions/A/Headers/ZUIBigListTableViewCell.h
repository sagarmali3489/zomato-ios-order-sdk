//
//  ZUIBigListTableViewCell.h
//  ZUIKit
//
//  Created by Arpit Agarwal on 01/07/15.
//  Copyright (c) 2015 Zomato. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ZUIKit/ZUITableViewCell.h>

@interface ZUIBigListTableViewCell : ZUITableViewCell

/**
 *  This is a cell with Title Text and a Subtitle Text. The Subtitle Text and Separator is optional.
 */
@property (nonatomic, strong) NSString *titleText;
@property (nonatomic, strong) NSString *subtitleText;
@property (nonatomic, strong) NSString *tagLabelText;
@property (nonatomic, strong) NSString *sideImageName;
@property (nonatomic, strong) NSString *iconText;
@property (nonatomic, strong) UIColor *tagLabelColor;
@property (nonatomic, strong) UIColor *titleLabelColor;
@property (nonatomic, strong) UIColor *iconLabelColor;


- (void)setHighlightedTextColor;
- (void)setDefaultTextColor;
- (void) setSubtitleTextColor:(UIColor *)color;

/**
 *  Static Methods to get height of the cell
 *
 *  @param titleText    NSString for the title
 *  @param subtitleText NSString for the subtext
 *
 *  @return returns the height of the cell in CGFLoat
 */
+ (CGFloat)getCellHeightWithTitle:(NSString *)titleText subtitleText:(NSString *)subtitleText hasSideImage:(BOOL)sideImage withCellWidth:(CGFloat)width;

+ (CGFloat)getCellHeightWithTitle:(NSString *)titleText subtitleText:(NSString *)subtitleText hasIcon:(BOOL)icon withCellWidth:(CGFloat)width;

+ (CGFloat)getCellHeightWithTitle:(NSString *)titleText subtitleText:(NSString *)subtitleText hasIcon:(BOOL)icon withCellWidth:(CGFloat)width andSeparatorType: (ZUISeparatorType)separatorType;

@end
