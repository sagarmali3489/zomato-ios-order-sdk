//
//  ZUIKitHelpers.h
//  ZUIKit
//
//  Created by Anurag Kabra on 23/07/15.
//  Copyright (c) 2015 Zomato. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZUIKitHelpers : NSObject

+ (NSMutableArray *) getRatingColors ;

+ (UIButton *) createSubmitButtonWithTitle:(NSString *)title withViewHeight:(CGFloat)viewHeight;

+ (UIView *)getViewWithHeaderString:(NSString *)headerString andFrame:(CGRect)frame showTopSeparator:(BOOL)shouldShowTopSeparator showBottomSeparator:(BOOL)shouldShowBottomSeparator;

@end
