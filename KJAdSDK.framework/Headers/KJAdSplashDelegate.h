//
//  KJAdSplashDelegate.h
//  KJAdSDK
//
//  Created by kj on 2018/12/7.
//  Copyright © 2018年 ArmorNetwork. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KJHeaderDfines.h"
NS_ASSUME_NONNULL_BEGIN
@class KJAdSplash;
@protocol KJAdSplashDelegate <NSObject>

@optional

// 铠甲Mssp的应用id
- (NSString *)kjPublisherId KJ_DEPRECATED_MSG_ATTRIBUTE("接口即将废弃，请使用KJAdSplash里的构造方法 initWithAppId:placementId:");

// 启动位置信息
-(BOOL) kjEnableLocation KJ_DEPRECATED_MSG_ATTRIBUTE("该协议废弃");

// 广告展示成功
- (void)kjSplashSuccessPresentScreen:(KJAdSplash *)splash;

// 广告展示失败
- (void)kjSplashlFailPresentScreen:(KJAdSplash *)splash withError:(NSError *) error;

// 广告被点击
- (void)kjSplashDidClicked:(KJAdSplash *)splash;

// 广告展示结束
- (void)kjSplashDidDismissScreen:(KJAdSplash *)splash;

// 广告详情页消失(部分广告来源不会有回调)
- (void)kjSplashDidDismissLp:(KJAdSplash *)splash;


@end

NS_ASSUME_NONNULL_END
