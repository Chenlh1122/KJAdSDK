//
//  KJExpressInterstitialAd.h
//  KJAdSDK
//
//  Created by 陈林辉 on 2020/3/9.
//  Copyright © 2020 ArmorNetwork. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
@class KJExpressInterstitialAd;

@protocol KJExpressInterstitialAdDelegate <NSObject>
@optional

/**
 *  插屏2.0广告预加载成功回调
 *  当接收服务器返回的广告数据成功且预加载后调用该函数
 */
- (void)kj_interstitialSuccessToLoadAd:(KJExpressInterstitialAd *)interstitial;

/**
 *  插屏2.0广告预加载失败回调
 *  当接收服务器返回的广告数据失败后调用该函数
 */
- (void)kj_interstitialFailToLoadAd:(KJExpressInterstitialAd *)interstitial error:(NSError *)error;

/**
 *  插屏2.0广告视图展示成功回调
 *  插屏2.0广告展示成功回调该函数
 */
- (void)kj_interstitialDidPresentScreen:(KJExpressInterstitialAd *)interstitial;

/**
 *  插屏2.0广告视图展示失败回调
 *  插屏2.0广告展示失败回调该函数
 */
- (void)kj_interstitialFailToPresent:(KJExpressInterstitialAd *)interstitial error:(NSError *)error;

/**
 *  插屏2.0广告展示结束回调
 *  插屏2.0广告展示结束回调该函数
 */
- (void)kj_interstitialDidDismissScreen:(KJExpressInterstitialAd *)interstitial;


/**
 *  插屏2.0广告点击回调
 */
- (void)kj_interstitialClicked:(KJExpressInterstitialAd *)interstitial;



@end
@interface KJExpressInterstitialAd : NSObject

/**
 *  委托对象
 */
@property (nonatomic, weak) id<KJExpressInterstitialAdDelegate> delegate;

/**
 *  插屏2.0广告预加载是否完成
 */
@property (nonatomic) BOOL isAdValid;

/**
 构造方法
 @param appId 媒体ID
 @param adUnitTag 广告位ID
 @param adsize 期望尺寸
 @return KJExpressInterstitialAd 实例
 */
- (instancetype)initWithAppId:(NSString *)appId adUnitTag:(NSString *)adUnitTag adSize:(CGSize)adsize;

/**
 *  广告发起请求方法
 *  详解：[必选]发起拉取广告请求
 */
- (void)loadAdData;

/**
 *  广告展示方法
 *  详解：[必选]发起展示广告请求, 必须传入用于显示插播广告的UIViewController
 */
- (void)presentAdFromRootViewController:(UIViewController *)rootViewController;
@end

NS_ASSUME_NONNULL_END
