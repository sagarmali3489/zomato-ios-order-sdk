//
//  ZUITagLabel.h
//  Zomato
//
//  Created by Anil Bunkar on 29/06/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, ZUITagLabelSize) {
    ZUITagLabelSizeDefault, //FONT SIZE 8
    ZUITagLabelSizeBig //FONT SIZE 11
};

/*
    You are allowed to just the center of the label. Frame will be set automatically
 */
@interface ZUITagLabel : UILabel


//Update this with ZUITagLabelSize to change size of the tag label.
@property (nonatomic, assign)ZUITagLabelSize labelSize; //default value is ZUITagLabelSizeDefault. 

@end