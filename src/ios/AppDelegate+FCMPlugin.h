#import "AppDelegate.h"
#import <UIKit/UIKit.h>
#import <Cordova/CDVViewController.h>

@interface AppDelegate (FCMPlugin)

+ (NSData*)getLastPush;
+ (NSString*)getFCMToken;
+ (NSString*)getAPNSToken;
+ (void)setLastPush:(NSData*)push;
+ (void)requestPushPermission;
+ (void)hasPushPermission:(void (^)(NSNumber* yesNoOrNil))block;

@end
