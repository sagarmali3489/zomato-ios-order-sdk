//
//  ZUIShowcase.h
//  ZUIKit
//
//  Created by Arpit Agarwal on 22/09/15.
//  Copyright © 2015 Zomato. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZUIShowcase : UIView

typedef NS_ENUM(NSInteger, ZUIShowcaseAction){
    ZUIShowcaseActionDismiss,
    ZUIShowcaseActionButtonTapped
};

typedef void (^ZUIShowcaseActionCompletionHandler)(ZUIShowcaseAction action);

- (instancetype)initWithBannerImage:(UIImage *)bannerImage titleText:(NSString *)titleText bodyText:(NSString *)bodyText dismissButtonText:(NSString *)dismissButtonText actionButtonColor:(UIColor *)actionButtonColor;

- (void)showWithCompletionHandler:(ZUIShowcaseActionCompletionHandler)handler;

@end
