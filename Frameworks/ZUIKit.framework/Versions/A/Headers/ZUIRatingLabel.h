//
//  ZUIRatingLabel.h
//  Zomato
//
//  Created by Anil Bunkar on 29/06/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZUIRatingLabel : UILabel

typedef enum{
    ZUIRatingLabelTypeDefault, //21x14
    ZUIRatingLabelTypeSmall, //30x20
    ZUIRatingLabelTypeMedium //45x30
}ZUIRatingLabelType;

- (id)initWithType:(ZUIRatingLabelType)ratingLabelType;
- (void) setRating:(NSString *)rating;
- (void)setRatingLabelType:(ZUIRatingLabelType)ratingLabelType;

@end
