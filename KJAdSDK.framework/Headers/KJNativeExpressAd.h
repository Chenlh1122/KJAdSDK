//
//  KJNativeExpressAd.h
//  KJAdSDK
//
//  Created by 陈林辉 on 2022/10/12.
//  Copyright © 2022 ArmorNetwork. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "KJNativeExpressAdDelegate.h"
NS_ASSUME_NONNULL_BEGIN

@interface KJNativeExpressAd : NSObject
// 委托对象
@property (nonatomic, weak) id<KJNativeExpressAdDelegate> delegate;

// 广告展示的宽高(选填)
@property (nonatomic, assign) CGSize viewSize;

// 模版宽度，仅用于信息流模版广告（选填）
@property (nonatomic ,retain)  NSNumber *kjMobAdsWidth;


/// 构造方法
/// @param appId  广告应用id
/// @param adUnitTag  广告位 ID
- (instancetype)initWithAppId:(NSString *)appId adUnitTag:(NSString *)adUnitTag;

// 请求多条广告
- (void)requestNativeAds;
@end

NS_ASSUME_NONNULL_END
