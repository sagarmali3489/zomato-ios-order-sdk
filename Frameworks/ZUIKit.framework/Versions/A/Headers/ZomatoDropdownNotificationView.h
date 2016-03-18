//
//  ZomatoDropdownNotificationView.h
//  Zomato
//
//  Created by Udit Gupta on 07/12/13.
//  Copyright (c) 2013 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <ZUIKit/ZUIKit.h>

@interface ZomatoDropdownNotificationView : UIWindow
@property (strong, nonatomic) UILabel *messageLabel;
@property (strong, nonatomic) id parent;
@property (strong, nonatomic) NSDictionary *dictionary;
@property (strong, nonatomic) UILabel *notificationIcon;
@property (strong, nonatomic) UIView *barView;
- (id)initWithFrame:(CGRect)frame;

- (void)displayDropdownNotificationWithMessage:(NSString *)message forNotificationType:(NSString *) notificationType;
-(void)hideDropdownNotification;
-(void)hidebacknotification;

@end