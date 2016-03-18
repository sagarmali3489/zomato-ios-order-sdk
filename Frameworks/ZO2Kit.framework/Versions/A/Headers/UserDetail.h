//
//  UserDetail.h
//  Zomato
//
//  Created by Zomato Graphics on 27/06/12.
//  Copyright (c) 2012 Zomato Media Pvt. Ltd. All rights reserved.
//

#import <ZMTApiManageriOS/ZMTApiManageriOS.h>
#import "ProfileImage.h"

#define REQUEST_TYPE_JOURNEY @"journey"
#define REQUEST_TYPE_ACTIVITY @"activity"
#define REQUEST_TYPE_PHOTOS @"photos"
#define REQUEST_TYPE_REVIEWS @"reviews"
#define REQUEST_TYPE_BLOGPOSTS @"blog_posts"
#define REQUEST_TYPE_ALL @""    //do not change
#define REQUEST_TYPE_INFO_ACTIVITY @"info_activity"
#define REQUEST_TYPE_SECONDARY @"all-activity"
#define REQUEST_TYPE_FOLLOWS @"follows"


#define userObjectsFromApiCount 50


@interface UserDetail : ZomatoObject

@property (strong, nonatomic) NSString *email;
@property (strong, nonatomic) NSString *phone;
@property (strong, nonatomic) NSString *bio;
@property (strong, nonatomic) NSNumber *listCount;
@property (strong, nonatomic) NSString *cityName;
@property (strong, nonatomic) NSString *profileUrl;

@property (strong, nonatomic) NSMutableArray *followedBy;
@property (strong, nonatomic) NSMutableArray *follows;
@property (strong, nonatomic) NSMutableArray *wishlist;
@property (strong, nonatomic) NSMutableArray *filteredWishlist;
@property (strong, nonatomic) NSMutableArray *beenthere;
@property (strong, nonatomic) NSMutableArray *reviews;
@property (strong, nonatomic) NSMutableArray *blogs;
@property (strong, nonatomic) NSMutableArray *lists;
@property (strong, nonatomic) NSMutableArray *photos;
@property (strong, nonatomic) NSArray *recentlyViewed;
@property (strong, nonatomic) NSArray *mostVisited;
@property (strong, nonatomic) NSMutableArray *activities;
@property (strong, nonatomic) NSMutableArray *activitiesToShow;
@property (strong, nonatomic) NSArray *dayGroups;

@property (strong, nonatomic) NSNumber *favouriteCount;
@property (strong, nonatomic) NSNumber *beenthereCount;
@property (strong, nonatomic) NSNumber *isUserFollowed;
@property (strong, nonatomic) NSNumber *isUserFollowingBack;
@property (strong, nonatomic) NSNumber *isConnectedTofacebook;
@property (strong, nonatomic) NSString *fbName;
@property (strong, nonatomic) NSNumber *postToFacebook;
@property (nonatomic) BOOL facebookPostPermission;
@property (nonatomic, strong) NSNumber *facebookID;

@property (strong, nonatomic) NSNumber *moreActivitiesAvailable;
@property (nonatomic, strong) NSNumber *maxScore;
@property (nonatomic, strong) NSNumber *minScore;

@property (strong, nonatomic) NSString *twitter_handle;
@property (strong, nonatomic) NSNumber *twitterId;
@property (strong, nonatomic) NSString *twitterName;
@property (strong, nonatomic) NSNumber *twitterStatus;
@property (strong, nonatomic) NSNumber *twitterPopupFlag;
@property (strong, nonatomic) NSString *twitterProfileImage;
@property (strong, nonatomic) NSString *fbProfileImage;
@property (strong, nonatomic) NSNumber *numPhotos;
@property (strong, nonatomic) NSNumber *position;
@property (strong, nonatomic) NSMutableArray *leaderboardPositions;
@property (strong, nonatomic) NSNumber *featuredReviewsCount;
@property (strong, nonatomic) NSNumber *foodieLevelNum;

@property (strong, nonatomic) NSString *template_text;
@property (strong, nonatomic) NSNumber *unreadNotifications;
@property (strong, nonatomic) NSNumber *unreadCount;
@property (strong, nonatomic) NSString *zomato_handle;
@property (strong, nonatomic) NSNumber *networkRank;
@property (strong, nonatomic) NSString *prominentColor;
@property (strong, nonatomic) NSNumber *totalLevels;
@property (nonatomic) BOOL lastRequestSuccessful;
@property (strong, nonatomic) NSNumber *page;
@property (nonatomic,strong) NSNumber *bookingExist;
@property (nonatomic,strong) NSNumber *paymentExist;
@property (nonatomic,strong) NSNumber *stampsExist;

@property (nonatomic, strong)NSString *instagramAccessToken;
@property (nonatomic, strong)NSString *instagramUsername;
@property (nonatomic, strong)NSString *instagramProfilePicture;
@property (nonatomic, strong)NSString *instagramUserId;
@property (nonatomic)BOOL isInstagramLoggedIn;

@property (strong, nonatomic) NSNumber *eligiblePoints;
@property (nonatomic, strong) NSNumber *totalPoints;
@property (nonatomic) BOOL isInvited;
@property (nonatomic) BOOL wasInvited;
@property (nonatomic) BOOL alreadyInvited;

@property (strong, nonatomic) NSString *foodieColor;
@property (nonatomic, strong) ProfileImage *profileImage;
@property (strong, nonatomic) NSString *username;
//@property (strong, nonatomic) NSNumber *isVerified;
@property (strong, nonatomic) NSNumber *isFollowed;
@property (nonatomic, strong) NSString *foodieLevel;
@property (nonatomic, strong) NSNumber *cityId;// = int
@property (nonatomic, strong) NSString *joiningDateTime;// = string
@property (nonatomic, strong) NSString *friendlyJoiningDateTime;// = string
@property (nonatomic, strong) NSString *userJourneyFriendlyJoiningDateTime;
@property (nonatomic, strong) NSNumber *reviewCount;// = int
@property (nonatomic, strong) NSNumber *ratingCount;// = int
@property (nonatomic, strong) NSNumber *wishlistCount;// = int
@property (nonatomic, strong) NSNumber *collectionCount; // = int
@property (nonatomic, strong) NSNumber *followsCount;
@property (nonatomic, strong) NSNumber *followersCount;
@property (nonatomic, strong) NSNumber *priority;
@property (nonatomic, strong) NSNumber *blogsCount;

@property (nonatomic, strong) NSNumber *reviewPoints;
@property (nonatomic, strong) NSNumber *photoPoints;
@property (nonatomic, strong) NSNumber *blogPoints;
@property (nonatomic, strong) NSNumber *reviewRank;
@property (nonatomic, strong) NSNumber *photoRank;
@property (nonatomic, strong) NSNumber *blogRank;
@property (nonatomic, strong) NSNumber *leaderboardRank;

//saved offers count
@property (nonatomic, strong) NSNumber *savedOffersCount;
@property (nonatomic, strong) NSNumber *hasSavedOffers;

@property (nonatomic, strong) NSMutableArray *expertiseSubzoneArray;
@property (nonatomic, strong) NSNumber *isExpert;
@property (nonatomic, strong) NSString *expertAreaText; 
@property (nonatomic, strong) NSString *websiteLink;
@property (nonatomic, strong) NSNumber *tipPercentage;

@property (nonatomic, strong) NSNumber *hasOrderedBefore;
@property (nonatomic, strong) NSNumber *hasCredits;
@property (nonatomic, strong) NSNumber *hasUsedCashless;
@property (nonatomic, strong) NSNumber *onlineOrderingEnabled;
@property (nonatomic, strong) NSNumber *numberOfBlogPosts;
@property (nonatomic, strong) NSNumber *filteredWishlistCount;
@property (nonatomic, strong) NSString *userBlogLink;

@property (nonatomic, strong) NSString *userDeliveryAlias;
@property (nonatomic, strong) NSNumber *userPhoneCountryId;
@property (nonatomic, strong) NSString *userPhone;
@property (nonatomic, strong) NSNumber *userPhoneVerified;
@property (nonatomic, strong) NSNumber *userPhoneCountryCode;

@property (nonatomic, strong) NSString *userType; //USER_TYPE_NORMAL, USER_TYPE_VERIFIED, USER_TYPE_CELEBRITY (Macros defined in ZCommonsCommonFunction)

//addresses
@property (nonatomic, strong) NSMutableArray *addresses;

//loading variables
@property (nonatomic) BOOL isPhotosLoaded;

@property (nonatomic) BOOL isBlogsLoaded;
@property (nonatomic) BOOL isDineLineLoaded;
@property (nonatomic) BOOL isReviewsLoaded;
@property (nonatomic) BOOL isCheckinsLoaded;
@property (nonatomic) BOOL isWishlistLoaded;

//fail variables
@property (nonatomic) BOOL isPhotosLoadingFailed;
@property (nonatomic) BOOL isBlogsLoadingFailed;
@property (nonatomic) BOOL isDineLineLoadingFailed;
@property (nonatomic) BOOL isReviewsLoadingFailed;
@property (nonatomic) BOOL isCheckinsLoadingFailed;
@property (nonatomic) BOOL isWishlistLoadingFailed;

@end

