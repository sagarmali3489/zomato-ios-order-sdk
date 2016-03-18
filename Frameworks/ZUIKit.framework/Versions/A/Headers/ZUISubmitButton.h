//
//  ZUISubmitButton.h
//  ZUIKit
//
//  Created by Nikunj on 01/08/15.
//  Copyright (c) 2015 Zomato. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZUISubmitButton : UIButton

+ (instancetype)submitButton;
+ (CGFloat) getSubmitButtonHeight;

- (void) setSubmitText:(NSString *)text;
- (NSString *) getSubmitText;

- (void) showLoader;
- (void) hideLoader;
- (void) setBackgroundEnabled:(BOOL)enabled;

@end
