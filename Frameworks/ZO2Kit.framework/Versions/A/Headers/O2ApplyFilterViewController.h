//
//  ApplyFilterViewController.h
//  delivery
//
//  Created by Nikunj on 21/05/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//


#import "ZO2Prefix.h"

#define FILTER_VIEW_START_Y 150

@protocol O2ApplyFilterViewDelegate <NSObject>

@optional
- (void) filterAppliedWithFilterParams:(NSDictionary *)filterParams;

@optional
- (void) filterReset;

@end

@interface O2ApplyFilterViewController : ZUIBaseViewController

@property (nonatomic, weak) id<O2ApplyFilterViewDelegate> delegate;

@property (strong, nonatomic) UIImageView *backgroundSnapshotView;

- (id) initWithFilterParamsAppliedDict:(NSDictionary *)filterParamsAppliedDictLocal andCuisineIDsStrings:(NSString *)cuisineIDsString;

- (void)screenShotTapped;

@end