//
//  KJAdNative.h
//  KJAdSDK
//
//  Created by kj on 2018/12/10.
//  Copyright © 2018年 ArmorNetwork. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KJAdNativeDelegate.h"
NS_ASSUME_NONNULL_BEGIN

@interface KJAdNative : NSObject
/**
 *  应用的APPID
 */
@property(nonatomic, copy) NSString *kjPublisherId;
/**
 *  设置/获取代码位id
 */
@property(nonatomic, copy) NSString *adxxlId;

/*
 *  viewControllerForPresentingModalView
 *  详解：[必选]开发者需传入用来弹出目标页的ViewController，一般为当前ViewController
 */
@property (nonatomic, weak) UIViewController *controller;

/**
 * 原生广告delegate
 */
@property (nonatomic ,assign) id<KJAdNativeDelegate> delegate;

/**
 * 请求多条原生广告
 */
- (void)requestNativeAds;

@end

NS_ASSUME_NONNULL_END
