//
//  ZUIScrollView.h
//  ZUIKit
//
//  Created by Arpit Agarwal on 01/07/15.
//  Copyright (c) 2015 Zomato. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZUIScrollView : UIScrollView

/**
 *  Controls the blurred image background of the ZUIScroll view.
 *  Defaults to NO. (Defaults to YES if default image not set in ZUIKitSettings)
 *  To set default image call [ZUIKitSettings setBackgroundImageName:]
 *  Sets a 'White' background color if set to YES.
 */
@property (nonatomic, assign)BOOL shouldHideDefaultBlurBackground;


@end
