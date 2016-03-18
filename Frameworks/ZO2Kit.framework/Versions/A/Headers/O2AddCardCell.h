//
//  AddCardCell.h
//  Zomato
//
//  Created by Udit Gupta on 24/02/15.
//  Copyright (c) 2015 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <ZMTApiManageriOS/ZMTApiManageriOS.h>
#import "ZO2Prefix.h"

@protocol O2AddCardCellDelegate <NSObject>

@required
- (void)didTapButtonWithCellTag:(NSInteger)tag;

@end

@interface O2AddCardCell : ZUITableViewCell

@property (weak, nonatomic) id delegate;

- (id)initAsAddCardWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier;

@property (nonatomic, strong) UIButton* addCardButton;
@property (nonatomic) BOOL shouldShowTopSeparator;

@end
