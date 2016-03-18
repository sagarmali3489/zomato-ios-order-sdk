//
//  PopupObject.h
//  ZModelsKit
//
//  Created by Anurag Kabra on 14/10/15.
//  Copyright © 2015 Zomato. All rights reserved.
//

#import <ZMTApiManageriOS/ZMTApiManageriOS.h>

@interface PopupObject : ZomatoObject

@property (nonatomic, strong) NSString *buttonLabel;
@property (nonatomic, strong) NSString *target;
@property (nonatomic, strong) NSString *imageUrl;
@property (nonatomic, strong) NSString *message;
@property (nonatomic, strong) NSString *title;

@end
