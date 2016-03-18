//
//  ZMTActionSheet.h
//  Zomato
//
//  Created by Harsh on 08/03/14.
//  Copyright (c) 2014 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ZMTActionSheetDelegate <NSObject, UIActionSheetDelegate>

@optional
-(void) didSelectIndex:(NSInteger) i animated:(BOOL) animated;

@end

@interface ZMTActionSheet : UIActionSheet<UIActionSheetDelegate>

@property (nonatomic, weak) id<ZMTActionSheetDelegate> del;
@property (nonatomic, strong) NSString *resource_id;


- (id) initWithTitle:(NSString *)title delegate:(id<UIActionSheetDelegate>)delegate cancelButtonTitle:(NSString *)cancelButtonTitle destructiveButtonTitle:(NSString *)destructiveButtonTitle otherButtonTitlesArray:(NSArray *)otherButtonTitles;

- (id) initWithTitle:(NSString *)title delegate:(id<UIActionSheetDelegate>)delegate cancelButtonTitle:(NSString *)cancelButtonTitle destructiveButtonTitle:(NSString *)destructiveButtonTitle otherButtonTitlesArray:(NSArray *)otherButtonTitles withSelectedIndex:(NSNumber *) index;

@end
