#ifdef __cplusplus
#import "react-native-my-lib.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNMyLibSpec.h"

@interface MyLib : NSObject <NativeMyLibSpec>
#else
#import <React/RCTBridgeModule.h>

@interface MyLib : NSObject <RCTBridgeModule>
#endif

@end
