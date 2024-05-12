
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNMimeFileSpec.h"

@interface MimeFile : NSObject <NativeMimeFileSpec>
#else
#import <React/RCTBridgeModule.h>

@interface MimeFile : NSObject <RCTBridgeModule>
#endif

@end
