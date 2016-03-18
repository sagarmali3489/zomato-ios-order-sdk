//
//  SelectDeliverySubzoneTableView.h
//  Zomato
//
//  Created by Nikunj on 19/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZO2Prefix.h"
#import "Locality.h"
#import "SubLocality.h"

@class Locality;
@class SubLocality;

@protocol SelectLocalityTableViewDelegate <NSObject>

@optional
- (void) didSelectLocality:(Locality *)locality;

@optional
- (void) didSelectSubLocality:(SubLocality *)subLocality;

@end

@interface SelectLocalityTableView : ZUITableViewCell

@property (nonatomic, weak) id<SelectLocalityTableViewDelegate> delegate;
@property (nonatomic, strong) NSString *searchText;

- (void) searchForText:(NSString *)text;
- (void) setDefaultEntitiesArray:(NSMutableArray *)defaultEntitiesArrayLocal;
- (id) initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier withEntitiesArray:(NSArray *)entitiesArray withIsLocality:(BOOL)isLocalityLocal;

@end


