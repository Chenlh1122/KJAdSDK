//
//  KJRewardVideoAd.h
//  KJAdSDK
//
//  Created by kj on 2020/3/16.
//  Copyright © 2020 ArmorNetwork. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
@class KJRewardVideoAd;
@protocol KJRewardedVideoAdDelegate <NSObject>

@optional

/**
 广告数据加载成功回调

 @param rewardedVideoAd KJRewardVideoAd 实例
 */
- (void)kj_rewardVideoAdDidLoad:(KJRewardVideoAd *)rewardedVideoAd;

/**
 视频数据下载成功回调，已经下载过的视频会直接回调

 @param rewardedVideoAd KJRewardVideoAd 实例
 */
- (void)kj_rewardVideoAdVideoDidLoad:(KJRewardVideoAd *)rewardedVideoAd;

/**
 视频播放页即将展示回调

 @param rewardedVideoAd KJRewardVideoAd 实例
 */
- (void)kj_rewardVideoAdWillVisible:(KJRewardVideoAd *)rewardedVideoAd;

/**
 视频广告曝光回调

 @param rewardedVideoAd KJRewardVideoAd 实例
 */
- (void)kj_rewardVideoAdDidExposed:(KJRewardVideoAd *)rewardedVideoAd;

/**
 视频播放页关闭回调

 @param rewardedVideoAd KJRewardVideoAd 实例
 */
- (void)kj_rewardVideoAdDidClose:(KJRewardVideoAd *)rewardedVideoAd;

/**
 视频广告信息点击回调

 @param rewardedVideoAd KJRewardVideoAd 实例
 */
- (void)kj_rewardVideoAdDidClicked:(KJRewardVideoAd *)rewardedVideoAd;

/**
 视频广告各种错误信息回调

 @param rewardedVideoAd KJRewardVideoAd 实例
 @param error 具体错误信息
 */
- (void)kj_rewardVideoAd:(KJRewardVideoAd *)rewardedVideoAd didFailWithError:(NSError *)error;

/**
 视频广告播放达到激励条件回调

 @param rewardedVideoAd KJRewardVideoAd 实例
 */
- (void)kj_rewardVideoAdDidRewardEffective:(KJRewardVideoAd *)rewardedVideoAd;

/**
 视频广告视频播放完成

 @param rewardedVideoAd KJRewardVideoAd 实例
 */
- (void)kj_rewardVideoAdDidPlayFinish:(KJRewardVideoAd *)rewardedVideoAd;

@end


@interface KJRewardVideoAd : NSObject

@property (nonatomic, weak) id <KJRewardedVideoAdDelegate> delegate;
/**
  必需的。
  第三方游戏user_id身份。
  主要用于奖励发放，它是服务器到服务器的回调传递参数。
  它是每个用户的唯一标识符。
  只能传递字符串，不能传递nil。
*/
@property (nonatomic, copy) NSString *userId;

@property (nonatomic, getter=isAdValid, readonly) BOOL adValid;

@property (nonatomic) BOOL videoMuted;
/**
 构造方法

 @param appId 媒体ID
 @param adUnitTag 广告位ID
 @return KJRewardVideoAd 实例
 */
- (instancetype)initWithAppId:(NSString *)appId adUnitTag:(NSString *)adUnitTag;

/**
 加载广告方法 支持 iOS8.1 及以上系统
 */
- (void)kj_loadAd;
/**
 展示广告方法

 @param rootViewController 用于 present 激励视频 VC
 @return 是否展示成功
 */
- (BOOL)kj_showAdFromRootViewController:(UIViewController *)rootViewController;

@end

NS_ASSUME_NONNULL_END
