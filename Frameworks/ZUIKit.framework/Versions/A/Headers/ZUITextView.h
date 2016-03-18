//
//  ZUIKit/ZUITextView
//  Zomato
//
//  Created by Arup Saha on 11/06/13.
//  Copyright (c) 2013 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZUITextView : UITextView

@property (strong, nonatomic) UILabel *placeholderLabel;
@property (nonatomic, strong) NSString *placeholder;
@property (nonatomic) BOOL changePlaceHolderDrawRect;
/**
 The color of the placeholder.
 
 The default is `[UIColor lightGrayColor]`.
 */
@property (nonatomic, strong) UIColor *placeholderTextColor;

- (void) setCommentsInputFieldDefaultCustomStyle:(ZUITextView *)textView;
@end