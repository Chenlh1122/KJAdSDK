//
//  KJAdNativeDelegate.h
//  KJAdSDK
//
//  Created by kj on 2018/12/10.
//  Copyright © 2018年 ArmorNetwork. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "KJHeaderDfines.h"
NS_ASSUME_NONNULL_BEGIN

@protocol KJAdNativeDelegate <NSObject>

@optional
/**
 *  应用在mssp.baidu.com上的APPID
 */
- (NSString *)kjElementPublisherId;

/**
 * 广告位id
 */
-(NSString*)kjElementappId;


/**
 *  启动位置信息
 */
-(BOOL) kjEnableLocation;//如果enable，plist 需要增加NSLocationWhenInUseUsageDescription


/**
 * 广告请求成功
 *
 */
- (void)kjNativeAdObjectsSuccessLoad:(NSArray*)nativeAds;

/**
 *  广告请求失败
 *
 * @param reason KJFailReason
 */
- (void)kjNativeAdsFailLoad:(KJFailReason) reason;

/**
 *  广告点击
 */
- (void)kjNativeAdClicked:(UIView*)nativeAdView;

/**
 *  广告详情页关闭
 */
-(void)kjDidDismissLandingPage:(UIView *)nativeAdView;
@end

NS_ASSUME_NONNULL_END
