//
//  KJUnifiedNativeAd.h
//  KJAdSDK
//
//  Created by 陈林辉 on 2022/10/18.
//  Copyright © 2022 ArmorNetwork. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KJUnifiedNativeAdDelegate.h"
NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, KJVideoPlayPolicy) {
    KJVideoPlayPolicyUnknow = 0, // 默认值，未设置
    KJVideoPlayPolicyAuto = 1,   // 用户角度看起来是自动播放
    KJVideoPlayPolicyManual = 2  // 用户角度看起来是手动播放或点击后播放
};

@interface KJUnifiedNativeAd : NSObject

@property (nonatomic, weak) id<KJUnifiedNativeAdDelegate> delegate;

/**
 构造方法

 @param appId 媒体ID
 @param placementId 广告位ID
 @return UnifiedNativeAd 实例
 */
- (instancetype)initWithAppId:(NSString *)appId placementId:(NSString *)placementId;

/**
 加载广告
 */
- (void)loadAd;

@end

NS_ASSUME_NONNULL_END
