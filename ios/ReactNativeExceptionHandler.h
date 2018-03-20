#import <React/RCTBridgeModule.h>

#import  <UIKit/UIKit.h>
#include <libkern/OSAtomic.h>
#include <execinfo.h>

@interface ReactNativeExceptionHandler : NSObject <RCTBridgeModule>
+ (void) replaceNativeExceptionHandlerBlock:(void (^)(NSException *exception, NSString *readeableException))nativeCallbackBlock;
+ (void) releaseExceptionHold;
@end


