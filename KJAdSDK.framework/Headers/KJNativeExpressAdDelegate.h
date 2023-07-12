//
//  KJNativeExpressAdDelegate.h
//  KJAdSDK
//
//  Created by clh on 2019/2/14.
//  Copyright © 2019年 ArmorNetwork. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class KJNativeExpressAd;
@class KJNativeExpressAdView;
@protocol KJNativeExpressAdDelegate <NSObject>

@optional
/**
 * 拉取原生模板广告成功
 */
- (void)kjNativeExpressAdSuccessToLoad:(KJNativeExpressAd *)nativeExpressAd views:(NSArray<__kindof KJNativeExpressAdView *> *)views;

/**
 * 拉取原生模板广告失败
 */
- (void)kjNativeExpressAdFailToLoad:(KJNativeExpressAd *)nativeExpressAd error:(NSError *)error;

/**
 * 原生模板广告渲染成功, 此时的 nativeExpressAdView.size.height 根据 size.width 完成了动态更新。
 */
- (void)kjNativeExpressAdViewRenderSuccess:(KJNativeExpressAdView *)nativeExpressAdView;

/**
 * 原生模板广告渲染失败
 */
- (void)kjNativeExpressAdViewRenderFail:(KJNativeExpressAdView *)nativeExpressAdView;

/**
 * 原生模板广告点击回调
 */
- (void)kjNativeExpressAdViewClicked:(KJNativeExpressAdView *)nativeExpressAdView;

/**
 * 原生模板曝光回调
*/
- (void)kjNativeExpressAdViewExposure:(KJNativeExpressAdView *)nativeExpressAdView;

/**
 * 原生模板点击关闭回调  (需要自己处理关闭代码逻辑)
*/
- (void)kjNativeExpressAdViewClosed:(KJNativeExpressAdView *)nativeExpressAdView;

@end

NS_ASSUME_NONNULL_END
