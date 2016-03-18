//
//  ZUITableHeaderView.h
//  ZUIKit
//
//  Created by Anurag Kabra on 15/07/15.
//  Copyright (c) 2015 Zomato. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZUILabel.h"


typedef NS_ENUM(NSInteger, ZUITableHeaderViewType) {

    // for normal table header view with background white and text is left aligned
    ZUITableHeaderViewTypeNormal = 0,
    
    // IONUT header for center aligned text and label is vertically a aligned to bottom
    ZUITableHeaderViewTypeIonut,
    
};

@interface ZUITableHeaderView : UIView

@property (nonatomic,strong) ZUILabel *headingLabel;


- (id)initWithType: (ZUITableHeaderViewType)headerType;

/*
 *
 Use this method to set the Title in the header view.
 *
 */
- (void) setHeaderText :(NSString *)headerText;

/*
 *
 Use this method to get the height of the header view type you are using.
 *
 */
+ (CGFloat) getHeightForHeaderType:(ZUITableHeaderViewType)headerType;

@end
