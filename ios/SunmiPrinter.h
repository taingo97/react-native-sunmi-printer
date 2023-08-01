
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNSunmiPrinterSpec.h"

@interface SunmiPrinter : NSObject <NativeSunmiPrinterSpec>
#else
#import <React/RCTBridgeModule.h>

@interface SunmiPrinter : NSObject <RCTBridgeModule>
#endif

@end
