//
//  ZPizzaLoader.h
//  Zomato
//
//  Created by Arpit Agarwal on 06/04/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZO2Prefix.h"

@interface ZPizzaLoader : UIView

@property (nonatomic) NSInteger numberOfImages;
@property (nonatomic) NSInteger repeatCount; //0 if forever repeat
@property (nonatomic, strong) NSMutableArray *loaderFrames;
@property (nonatomic, strong) NSString *gifFrameFormat;
@property (nonatomic, strong) UIImageView *imageView;

- (void) respondToChange;

@end
