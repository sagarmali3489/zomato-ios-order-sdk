//
//  ZUIRadioButtonCell.h
//  ZUIKit
//
//  Created by Anurag Kabra on 08/08/15.
//  Copyright (c) 2015 Zomato. All rights reserved.
//

#import <ZUIKit/ZUIKit.h>

@interface ZUIRadioButtonCell : ZUITableViewCell

- (void) setTitle:(NSString *)title subtitle:(NSString *)subtitle;
- (void) setradioButtonSelected:(BOOL)isSelected;
- (void) setIconTextSelectedState:(NSString *)selectedIconText unselectedState:(NSString *)unselectedIconText;
- (void) setviewsAlpha:(CGFloat)alpha;
- (void) setLeftImage:(NSString *)imageURLString imageWidth:(CGFloat)width imageHeight:(CGFloat)height isLocal:(BOOL)isLocal;
- (void) changeImageToGreyScaleImage;
+ (CGFloat) calculateHeightForTitle:(NSString *)title subtitle:(NSString *)subtitle rightButtonText:(NSString *)rightButtonText imagePresent:(BOOL)imagePresent imageHeight:(CGFloat)height;

@end
