//
//  KJNativeExpressFullscreenVideoAd.h
//  KJAdSDK
//
//  Created by 陈林辉 on 2022/10/11.
//  Copyright © 2022 ArmorNetwork. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class KJNativeExpressFullscreenVideoAd;

@protocol KJNativeExpressFullscreenVideoAdDelegate <NSObject>
@optional

/**
 *  新插屏广告预加载成功回调(在此函数成功后展示广告)
 *  当接收服务器返回的广告数据成功且预加载后调用该函数
 */
- (void)kj_nativeExpressFullscreenVideoAdDidLoad:(KJNativeExpressFullscreenVideoAd *)fullscreenVideoAd;

/**
 *  新插屏广告预加载失败回调
 *  当接收服务器返回的广告数据失败后调用该函数
 */
- (void)kj_nativeExpressFullscreenVideoAdDidLoad:(KJNativeExpressFullscreenVideoAd *)fullscreenVideoAd error:(NSError *)error;


/**
 *  新插屏广告视图展示成功回调
 *  广告展示成功回调该函数
 */
- (void)kj_nativeExpressFullscreenVideoAdDidVisible:(KJNativeExpressFullscreenVideoAd *)fullscreenVideoAd;

/**
 *  新插屏广告视图展示失败回调
 */
- (void)kj_nativeExpressFullscreenVideoAdFailToPresent:(KJNativeExpressFullscreenVideoAd *)fullscreenVideoAd error:(NSError *)error;

/**
 *    新插屏展示结束回调
 */
- (void)kj_nativeExpressFullscreenVideoAdDidDismissScreen:(KJNativeExpressFullscreenVideoAd *)fullscreenVideoAd;

/**
 *  新插屏广告点击回调
 */
- (void)kj_nativeExpressFullscreenVideoAdDidClick:(KJNativeExpressFullscreenVideoAd *)fullscreenVideoAd;

/**
    点击关闭按钮会触发此回调(广告关闭)
 */
-(void)kj_nativeExpressFullscreenVideoAdDidClose:(KJNativeExpressFullscreenVideoAd *)fullscreenVideoAd;

/**
    详情页广告关闭回调
 */
-(void)kj_nativeExpressFullscreenVideoDidCloseOtherController:(KJNativeExpressFullscreenVideoAd *)fullscreenVideoAd;

@end

@interface KJNativeExpressFullscreenVideoAd : NSObject
/**
 *  委托对象
 */
@property (nonatomic, weak) id<KJNativeExpressFullscreenVideoAdDelegate> delegate;

/**
 *  插屏2.0广告预加载是否完成
 */
@property (nonatomic) BOOL isAdValid;

/**
 构造方法
 @param appId 媒体ID
 @param adUnitTag 广告位ID
 @param adSize 期望尺寸
 @return KJNativeExpressFullscreenVideoAd 实例
 */
- (instancetype)initWithAppId:(NSString *)appId adUnitTag:(NSString *)adUnitTag adSize:(CGSize)adSize;

/**
 *  广告发起请求方法
 *  详解：[必选]发起拉取广告请求
 */
- (void)loadAdData;

/**
 *  广告展示方法
 *  详解：[必选]发起展示广告请求, 必须传入用于显示插屏广告的UIViewController
 */
- (void)presentAdFromRootViewController:(UIViewController *)rootViewController;

@end

NS_ASSUME_NONNULL_END
