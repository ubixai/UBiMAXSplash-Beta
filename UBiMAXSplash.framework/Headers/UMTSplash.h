//
//  UMTSplashAd.h
//  UMTSplash
//
//  Created by guoqiang on 2024/7/11.
//

#import <UBiMAXAdSDK/UMTAdSDK.h>

NS_ASSUME_NONNULL_BEGIN

@class UMTSplash;
@protocol UMTSplashDelegate <UMTAdDelegate>

/// 开屏广告加载成功
- (void)umtSplashAd:(UMTSplash *)splash didLoadSuccWithExt:(NSDictionary *)ext;
/// 开屏广告加载失败
- (void)umtSplashAd:(UMTSplash *)splash didLoadFailed:(UMTError *)error;


/// 开屏广告展示成功
- (void)umtSplashAd:(UMTSplash *)splash didShowSuccWithExt:(NSDictionary *)ext;
/// 开屏广告展示失败
- (void)umtSplashAd:(UMTSplash *)splash didShowFailed:(UMTError *)error;
/// 开屏广告点击
- (void)umtSplashAd:(UMTSplash *)splash didClickWithExt:(NSDictionary *)ext;
/// 开屏广告关闭
- (void)umtSplashAd:(UMTSplash *)splash didCloseWithExt:(NSDictionary *)ext;
/// 开屏广告关闭详情页回调
- (void)umtSplashAd:(UMTSplash *)splash didDetailCloseWithExt:(NSDictionary *)ext;
@end

@interface UMTSplash : UMTAd
/// 底部自定义视图，不需要传nil
@property (nonatomic, strong) UIView *bottomView;

/// 加载回调代理对象
@property (nonatomic, weak) id <UMTSplashDelegate> loadDelegate;

/// 展示回调代理对象
@property (nonatomic, weak) id <UMTSplashDelegate> showDelegate;


@end

NS_ASSUME_NONNULL_END
