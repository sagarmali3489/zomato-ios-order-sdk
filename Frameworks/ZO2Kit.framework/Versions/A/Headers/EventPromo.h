//
//  EventPromo.h
//  ZModelsKit
//
//  Created by Anurag Kabra on 14/10/15.
//  Copyright © 2015 Zomato. All rights reserved.
//

#import <ZMTApiManageriOS/ZMTApiManageriOS.h>

@interface EventPromo : ZomatoObject

@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) NSString *imgUrl;
@property (nonatomic, strong) NSString *textColor;

@end
