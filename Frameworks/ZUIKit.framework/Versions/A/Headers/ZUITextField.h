//
//  ZUITextField.h
//  Zomato
//
//  Created by Arup Saha on 19/07/13.
//  Copyright (c) 2013 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZUITextField : UITextField

@property (nonatomic, strong) UIColor *placeHolderColor;
@property (nonatomic, weak) ZUITextField *nextTextField;

-(id) initWithFrame:(CGRect)frame placeHolderColor:(UIColor *) color;

@end
