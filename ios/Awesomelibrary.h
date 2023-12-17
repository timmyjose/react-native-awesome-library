#ifdef __cplusplus
#import "react-native-awesomelibrary.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNAwesomelibrarySpec.h"

@interface Awesomelibrary : NSObject <NativeAwesomelibrarySpec>
#else
#import <React/RCTBridgeModule.h>

@interface Awesomelibrary : NSObject <RCTBridgeModule>
#endif

@end
