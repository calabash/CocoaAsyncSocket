#import <UIKit/UIKit.h>

@class SimpleHTTPClientViewController;
@class LPGCDAsyncSocket;


@interface SimpleHTTPClientAppDelegate : NSObject <UIApplicationDelegate> {
  LPGCDAsyncSocket *asyncSocket;
}

@property(nonatomic) IBOutlet UIWindow *window;
@property(nonatomic) IBOutlet SimpleHTTPClientViewController *viewController;

@end
