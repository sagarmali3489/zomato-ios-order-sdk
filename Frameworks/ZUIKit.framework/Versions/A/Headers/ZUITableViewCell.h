//
//  ZUITableViewCell.h
//  ZUIKit
//
//  Created by Arpit Agarwal on 02/07/15.
//  Copyright (c) 2015 Zomato. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ZUIKit/ZUISeparator.h>

@interface ZUITableViewCell : UITableViewCell

/**
 *  Separator types for ZUITableViewCells. Changing these types will show/hide the separator accordingly
 */
@property (nonatomic, assign) ZUISeparatorType topSeparatorType; //defaults to ZUISeparatorTypeNone

@property (nonatomic, assign) ZUISeparatorType bottomSeparatorType; //defaults to ZUISeparatorTypeNone


/**
 *  Shows/Hides arrow on the cell. Defaults to NO.
 */
@property (nonatomic, assign) BOOL shouldShowArrow;


/**
 *  Overriden Method to set Zomato Default Highlighted Feedback
 *
 */
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;

// separator properties
@property (nonatomic, strong) ZUISeparator *topSeparator;
@property (nonatomic, strong) ZUISeparator *bottomSeparator;

//disabled property
@property (nonatomic) BOOL disableFeedback;

//Get bottom separator type
- (ZUISeparatorType) getBottomSeparatorType;
@end
