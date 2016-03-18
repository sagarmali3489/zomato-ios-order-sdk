//
//  ZUIView.h
//  ZUIKit
//
//  Created by Arpit Agarwal on 18/07/15.
//  Copyright (c) 2015 Zomato. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, ZUIViewFeedbackType) {
    ZUIViewFeedbackTypeNone = 0,
    ZUIViewFeedbackTypeViewAlpha,
    ZUIViewFeedbackTypeSubviewsAlpha,
};

/**
 *  This class adds frequently required functionalities on a traditional UIView
 */
@interface ZUIView : UIView


/**
 *  This property manages the feedback animation on touch events of a ZUIView
 *  Set this with a ZUIViewFeedbackType to get a resulting animation when touches are recieved
 *  Requires the userInteractionEnabled set to YES.
 */
@property (nonatomic, assign)ZUIViewFeedbackType feedbackType;

@end
