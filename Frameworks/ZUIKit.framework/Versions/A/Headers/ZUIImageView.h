//
//  ZUIButton.h
//  Zomato
//
//  Created by Kunal on 29/06/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, ZUIImageViewType) {
    ZUIImageViewTypeResThumb = 0,
    ZUIImageViewTypeResSmallThumb,
    ZUIImageViewTypeReviewThumb,
    ZUIImageViewTypeUserThumb,
    ZUIImageViewTypeUserSmallThumb,
    ZUIImageViewTypePhotoThumb,
    ZUIImageViewTypeBanner
};

@interface ZUIImageView : UIImageView

- (id)initWithType:(ZUIImageViewType)zUIImageViewType;
- (void) setImageWithPlaceholderAndImageURL:(NSString *)url;

@end