//
//  ProfileImage.h
//  Zomato
//
//  Created by Zomato Graphics on 28/06/12.
//  Copyright (c) 2012 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <ZMTApiManageriOS/ZMTApiManageriOS.h>

@interface ProfileImage : ZomatoObject<NSCoding>
@property (strong, nonatomic) NSString *url;
@property (strong, nonatomic) NSString *thumbUrl;
@property (nonatomic) BOOL largeExists;
@property (nonatomic) BOOL thumbExists;

@end
