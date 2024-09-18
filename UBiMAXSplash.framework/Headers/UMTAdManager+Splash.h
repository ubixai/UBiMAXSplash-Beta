//
//  UMTAdManager+Splash.h
//  UMTSplash
//
//  Created by guoqiang on 2024/8/15.
//

#import <UBiMAXAdSDK/UMTAdSDK.h>
#import "UMTSplash.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMTAdManager (Splash)

- (void)loadSplashAd:(UMTSplash *)splash extra:(NSDictionary *)extra delegate:(id)delegate;

- (BOOL)isReadyForSplash:(UMTSplash *)splash;

- (void)showSplash:(UMTSplash *)splash window:(UIWindow *)window delegate:(id<UMTSplashDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
