//
//  KJExpressBannerViewDelegate.h
//  KJAdSDK
//
//  Created by clh on 2020/3/4.
//  Copyright © 2020 ArmorNetwork. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KJHeaderDfines.h"
NS_ASSUME_NONNULL_BEGIN
@class KJExpressBannerView;
@protocol KJExpressBannerViewDelegate <NSObject>

@optional

//请求Banner成功后调用
- (void)kj_expressBannerAdViewDidLoad:(KJExpressBannerView *)bannerAdView;

// 请求Banner失败后回调
- (void)kj_expressBannerAdView:(KJExpressBannerView *)bannerAdView didLoadFailWithError:(NSError *)error;

// banner 曝光回调
- (void)kj_expressBannerViewWillExpose:(KJExpressBannerView*)bannerAdView;

// 单击bannerAdView时调用此方法
- (void)kj_expressBannerAdViewDidClick:(KJExpressBannerView *)bannerAdView;

//banner2.0被用户关闭时调用
- (void)kj_expressBannerViewWillClose:(KJExpressBannerView *)unifiedBannerView;

@end

NS_ASSUME_NONNULL_END
