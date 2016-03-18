//
//  UIView+UIImageEffects.h
//  ZUIKit
//
//  Created by Arpit Agarwal on 02/07/15.
//  Copyright (c) 2015 Zomato. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ZUIKit/UIImage+UIImageEffects.h>

@interface UIView (UIImageEffects)

/**
 *  Sets a UIImage as the background color of a UIView
 *
 *  @param image     UIImage to set as the background
 *  @param blurType  UIImageBlurType for setting the blur. Pass 'UIImageBlurTypeNone' if not needed.
 *  @param tintColor UIColor for setting as the tint color for the background. Pass 'nil' if not needed.
 */
- (void)setBackgroundImage:(UIImage *)image withBlurType:(UIImageBlurType)blurType tintColor:(UIColor *)tintColor;


/**
 *  Sets the blurred image as background color. The image is taken from ZUIKitSettings.
 *  To work, an image should already be set in ZUIKitSettings with [ZUIKitSettings setBackgroundImageName:]
 */
- (void)setBlurredImageAsBackgroundColor;

@end
