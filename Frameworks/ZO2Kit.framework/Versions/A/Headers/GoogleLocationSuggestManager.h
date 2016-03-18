//
//  GoogleLocationSuggestManager.h
//  delivery
//
//  Created by Anurag Kabra on 23/06/15.
//  Copyright (c) 2015 zomato. All rights reserved.
//


#import "GoogleLocation.h"
#import "ZO2Prefix.h"

@protocol GoogleLocationSuggestionManagerDelegate <NSObject>

@required
- (void)didFetchNewLocationSuggestions:(NSArray *)locationSuggestions;

@end

@interface GoogleLocationSuggestManager : NSObject
@property (weak, nonatomic) id delegate;
@property (strong, nonatomic) NSMutableArray *suggestionsArray;

- (void)makeSuggestionsRequestWithString:(NSString *)searchText;
- (void)makeSuggestionsRequestWithString:(NSString *)searchText andResID:(NSNumber *)resID;
- (void)cancelConnections;

@end
