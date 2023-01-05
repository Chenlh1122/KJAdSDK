//
//  KJUnifiedNativeAdDelegate.h
//  KJAdSDK
//
//  Created by kj on 2020/12/5.
//  Copyright © 2020 ArmorNetwork. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class KJUnifiedNativeAdDataObject;
@class KJUnifiedNativeAd;
@class KJUnifiedNativeAdView;
NS_ASSUME_NONNULL_BEGIN

/**
 *  视频播放器状态
 *
 *  播放器只可能处于以下状态中的一种
 *
 */
typedef NS_ENUM(NSUInteger, KJMediaPlayerStatus) {
    KJMediaPlayerStatusInitial = 0,         // 初始状态
    KJMediaPlayerStatusLoading = 1,         // 加载中
    KJMediaPlayerStatusStarted = 2,         // 开始播放
    KJMediaPlayerStatusPaused = 3,          // 用户行为导致暂停
    KJMediaPlayerStatusError = 4,           // 播放出错
    KJMediaPlayerStatusStoped = 5,          // 播放停止
};

@protocol KJUnifiedNativeAdDelegate <NSObject>

@optional

- (void)kjUnifiedNativeAdLoaded:(NSArray<KJUnifiedNativeAdDataObject *> * _Nullable)unifiedNativeAdDataObjects error:(NSError * _Nullable)error;

/**
 *  广告曝光回调
 */
- (void)kjNativeAdExposure:(UIView *)nativeAdView nativeAdDataObject:(KJUnifiedNativeAdDataObject *)object;

/**
 *  广告点击
 */
- (void)kjNativeAdClicked:(UIView *)nativeAdView nativeAdDataObject:(KJUnifiedNativeAdDataObject *)object;

/**
 *  广告详情页关闭
 */
- (void)kjDidDismissLandingPage:(UIView *)nativeAdView;


/**
 视频广告播放状态更改回调
 */
- (void)kjUnifiedNativeAdView:(KJUnifiedNativeAdView *)unifiedNativeAdView playerStatusChanged:(KJMediaPlayerStatus)status;

@end

NS_ASSUME_NONNULL_END
