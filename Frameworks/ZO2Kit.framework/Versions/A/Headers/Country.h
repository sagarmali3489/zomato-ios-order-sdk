//
//  Country.h
//  Zomato
//
//  Created by Arpit Agarwal on 17/03/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <ZMTApiManageriOS/ZomatoObject.h>

@interface Country : ZomatoObject

@property (strong, nonatomic) NSNumber* countryId;
@property (strong, nonatomic) NSString* countryIsoNameCode;
@property (strong, nonatomic) NSNumber* countryIsdCode;
@property (strong, nonatomic) NSString* countryIsdCodeForDisplay;
@property (nonatomic) BOOL countryFlagExists;
@property (nonatomic, strong) NSMutableArray *citiesArray;

@property (strong, nonatomic) NSString* countryNameEN;
@property(nonatomic,strong) NSString *countryFlagURL;

//@property (nonatomic) BOOL isZomatoCountry;

@end
