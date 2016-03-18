//
//  FilterButton.h
//  delivery
//
//  Created by Nikunj on 25/05/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//

#import "ZO2Prefix.h"

@interface FilterButton : UIButton

@property (nonatomic) NSInteger buttonRow;
- (void) setTitleWithText:(NSString *)text withFontIcon:(NSString *)fontIcon;

@end