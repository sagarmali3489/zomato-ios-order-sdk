// UIImageView+AFNetworking.h
//
// Copyright (c) 2013-2014 AFNetworking (http://afnetworking.com)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>
#import <Availability.h>

#if defined(__IPHONE_OS_VERSION_MIN_REQUIRED)

#import <UIKit/UIKit.h>

typedef enum{
    ZMTloaderPlacementTypeCenter = 0,
    ZMTloaderPlacementTypeLeft = 1,
    ZMTloaderPlacementTypeRight = 2,
    ZMTloaderPlacementTypeNone = 4,
    ZMTloaderPlacementTypeCollection = 5   //custom type of pyd collections
}ZMTloaderPlacementType;

typedef enum{
    ZMTloaderSizeSmall = 0,
    ZMTloaderSizeMedium = 1,
    ZMTloaderSizeLarge = 2,
    ZMTloaderSizeZero = 3
}ZMTloaderSize;

@protocol ZMTAFURLResponseSerialization, ZMTAFImageCache;

/**
 This category adds methods to the UIKit framework's `UIImageView` class. The methods in this category provide support for loading remote images asynchronously from a URL.
 */
@interface UIImageView (ZMTAFNetworking)

///----------------------------
/// @name Accessing Image Cache
///----------------------------

/**
 The image cache used to improve image loadiing performance on scroll views. By default, this is an `NSCache` subclass conforming to the `AFImageCache` protocol, which listens for notification warnings and evicts objects accordingly.
 */
+ (id <ZMTAFImageCache>)sharedImageCache;

/**
 Set the cache used for image loading.
 
 @param imageCache The image cache.
 */
+ (void)setSharedImageCache:(id <ZMTAFImageCache>)imageCache;

///------------------------------------
/// @name Accessing Response Serializer
///------------------------------------

/**
 The response serializer used to create an image representation from the server response and response data. By default, this is an instance of `AFImageResponseSerializer`.
 
 @discussion Subclasses of `AFImageResponseSerializer` could be used to perform post-processing, such as color correction, face detection, or other effects. See https://github.com/AFNetworking/AFCoreImageSerializer
 */
@property (nonatomic, strong) id <ZMTAFURLResponseSerialization> imageResponseSerializer;

///--------------------
/// @name Setting Image
///--------------------

/**
 Asynchronously downloads an image from the specified URL, and sets it once the request is finished. Any previous image request for the receiver will be cancelled.
 
 If the image is cached locally, the image is set immediately, otherwise the specified placeholder image will be set immediately, and then the remote image will be set once the request is finished.
 
 By default, URL requests have a `Accept` header field value of "image / *", a cache policy of `NSURLCacheStorageAllowed` and a timeout interval of 30 seconds, and are set not handle cookies. To configure URL requests differently, use `setImageWithURLRequest:placeholderImage:success:failure:`
 
 @param url The URL used for the image request.
 */
- (void)setImageWithURL:(NSURL *)url;

/**
 Asynchronously downloads an image from the specified URL, and sets it once the request is finished. Any previous image request for the receiver will be cancelled.
 
 If the image is cached locally, the image is set immediately, otherwise the specified placeholder image will be set immediately, and then the remote image will be set once the request is finished.
 
 By default, URL requests have a `Accept` header field value of "image / *", a cache policy of `NSURLCacheStorageAllowed` and a timeout interval of 30 seconds, and are set not handle cookies. To configure URL requests differently, use `setImageWithURLRequest:placeholderImage:success:failure:`
 
 @param url The URL used for the image request.
 @param placeholderImage The image to be set initially, until the image request finishes. If `nil`, the image view will not change its image until the image request finishes.
 */
- (void)setImageWithURL:(NSURL *)url
       placeholderImage:(UIImage *)placeholderImage;

- (void) setImageWithURL:(NSURL *)url
        placeholderImage:(UIImage *)placeholderImage
          progressloader:(BOOL) progressloaderRequired
  progressLoaderPosition:(ZMTloaderPlacementType)loaderPosition
         withLoaderColor:(UIColor *)loaderColor withProgressColor:(UIColor *)progressColor andLoaderSize:(ZMTloaderSize)downloadLoaderSize;

// custom function to round images
- (void)setImageWithURL:(NSURL *)url
                rounded:(BOOL)isRounded;

// custom function to round images
- (void)setImageWithURL:(NSURL *)url
                rounded:(BOOL)isRounded
              withColor:(UIColor*)color;

// custom function to round images
- (void)setImageWithURL:(NSURL *)url
       placeholderImage:(UIImage *)placeholderImage
                rounded:(BOOL)isRounded;

/**
 Asynchronously downloads an image from the specified URL request, and sets it once the request is finished. Any previous image request for the receiver will be cancelled.
 
 If the image is cached locally, the image is set immediately, otherwise the specified placeholder image will be set immediately, and then the remote image will be set once the request is finished.
 
 If a success block is specified, it is the responsibility of the block to set the image of the image view before returning. If no success block is specified, the default behavior of setting the image with `self.image = image` is applied.
 
 @param urlRequest The URL request used for the image request.
 @param placeholderImage The image to be set initially, until the image request finishes. If `nil`, the image view will not change its image until the image request finishes.
 @param success A block to be executed when the image request operation finishes successfully. This block has no return value and takes three arguments: the request sent from the client, the response received from the server, and the image created from the response data of request. If the image was returned from cache, the request and response parameters will be `nil`.
 @param failure A block object to be executed when the image request operation finishes unsuccessfully, or that finishes successfully. This block has no return value and takes three arguments: the request sent from the client, the response received from the server, and the error object describing the network or parsing error that occurred.
 */
- (void)setImageWithURLRequest:(NSURLRequest *)urlRequest
              placeholderImage:(UIImage *)placeholderImage
                       success:(void (^)(NSURLRequest *request, NSHTTPURLResponse *response, UIImage *image))success
                       failure:(void (^)(NSURLRequest *request, NSHTTPURLResponse *response, NSError *error))failure;
//custom function with success and progress loader

- (void)setImageWithURLRequest:(NSURLRequest *)urlRequest
              placeholderImage:(UIImage *)placeholderImage
                progressLoader:(BOOL)progressLoaderRequired
               withLoaderColor:(UIColor *)loaderColor withProgressColor:(UIColor *)progressColor
                 andLoaderSize:(ZMTloaderSize)progressLoaderSize
                       success:(void (^)(NSURLRequest *request, NSHTTPURLResponse *response, UIImage *image))success
                       failure:(void (^)(NSURLRequest *request, NSHTTPURLResponse *response, NSError *error))failure;


- (void)setImageWithURLRequest:(NSURLRequest *)urlRequest
              placeholderImage:(UIImage *)placeholderImage
                progressLoader:(BOOL)progressLoaderRequired
               withLoaderColor:(UIColor *)loaderColor withProgressColor:(UIColor *)progressColor withRetryButton:(BOOL)retryButton
                       success:(void (^)(NSURLRequest *request, NSHTTPURLResponse *response, UIImage *image))success
                       failure:(void (^)(NSURLRequest *request, NSHTTPURLResponse *response, NSError *error))failure;

/**
 custom function to round images
 */

- (void)setImageWithURLRequest:(NSURLRequest *)urlRequest
              placeholderImage:(UIImage *)placeholderImage
                       success:(void (^)(NSURLRequest *request, NSHTTPURLResponse *response, UIImage *image))success
                       failure:(void (^)(NSURLRequest *request, NSHTTPURLResponse *response, NSError *error))failure
                       rounded:(BOOL)isRounded;



- (UIImage *)applyCornerRadiusToImage:(UIImage *)image withBounds:(CGRect)bounds andColor:(UIColor *)color cornerRadius:(int) cornerRadius;

/**
 custom function for greyborder and bigger radius
 */


- (void)setImageWithURL:(NSURL *)url
                rounded:(BOOL)isRounded
              withColor:(UIColor*)color
            progressLoaderRequired:(BOOL)loaderRequired
            withLoaderColor:(UIColor *)loaderColor withProgressColor:(UIColor *)progressColor;


- (void)setImageWithURL:(NSURL *)url
       placeholderImage:(UIImage *)placeholderImage
                rounded:(BOOL)isRounded
              withColor:(UIColor*)color withWidth:(int) width withHeight:(int) height;


- (void)setImageWithURL:(NSURL *)url
       placeholderImage:(UIImage *)placeholderImage
                rounded:(BOOL)isRounded
              withColor:(UIColor*)color withWidth:(int) width withHeight:(int) height withDownloadProgressLoader:(BOOL)progressLoaderRequired
            withLoaderColor:(UIColor *)loaderColor withProgressColor:(UIColor *)progressColor;


- (void)setImageWithURL:(NSURL *)url
       placeholderImage:(UIImage *)placeholderImage
                rounded:(BOOL)isRounded
              withColor:(UIColor*)color withWidth:(int) width withHeight:(int) height withCornerRadius:(int) cornerRadius;


//boss function with all values
- (void)setImageWithURLRequest:(NSURLRequest *)urlRequest
              placeholderImage:(UIImage *)placeholderImage
                       success:(void (^)(NSURLRequest *request, NSHTTPURLResponse *response, UIImage *image))success
                       failure:(void (^)(NSURLRequest *request, NSHTTPURLResponse *response, NSError *error))failure
                       rounded:(BOOL)isRounded
                     withColor:(UIColor*)color withWidth:(int) width withHeight:(int) height withCornerRadius:(int) cornerRadius withDownloadProgressLoader:(BOOL)progressLoaderRequired withLoaderPlacementType:(ZMTloaderPlacementType) placementType
               withLoaderColor:(UIColor *)loaderColor withProgressColor:(UIColor *)progressColor andLoaderSize:(ZMTloaderSize)downloadLoaderSize withRetryButton:(BOOL)retryButton;

/**
 check if image is present in cache
 */
- (BOOL) checkImageInCache:(NSURL *)imageURL;
- (UIImage *)cachedImageForURL:(NSURL *)imageURL;

//to cache image
- (void) cacheImageForURL:(NSURL *)imageURL image:(UIImage *)image;

/**
 Cancels any executing image operation for the receiver, if one exists.
 */
- (void)cancelImageRequestOperation;

-(void)removePreviousProgressLoaderInstance;

@end

#pragma mark -

/**
 The `AFImageCache` protocol is adopted by an object used to cache images loaded by the AFNetworking category on `UIImageView`.
 */
@protocol ZMTAFImageCache

/**
 Returns a cached image for the specififed request, if available.
 
 @param request The image request.
 
 @return The cached image.
 */
- (UIImage *)cachedImageForRequest:(NSURLRequest *)request;

/**
 Caches a particular image for the specified request.
 
 @param image The image to cache.
 @param request The request to be used as a cache key.
 */
- (void)cacheImage:(UIImage *)image forRequest:(NSURLRequest *)request;

@end

#endif


