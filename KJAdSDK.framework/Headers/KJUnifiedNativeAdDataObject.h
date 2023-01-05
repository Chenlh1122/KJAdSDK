//
//  KJUnifiedNativeAdDataObject.h
//  KJAdSDK
//
//  Created by kj on 2020/12/3.
//  Copyright © 2020 ArmorNetwork. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "KJVideoConfig.h"
NS_ASSUME_NONNULL_BEGIN
@interface KJUnifiedNativeAdDataObject : NSObject

/**
 广告标题
 */
@property (nonatomic, copy, readonly) NSString *title;

/**
 广告描述
 */
@property (nonatomic, copy, readonly) NSString *desc;

/**
 广告大图Url
 */
@property (nonatomic, copy, readonly) NSString *imageUrl;

/**
 素材宽度，单图广告代表大图 imageUrl 宽度、多图广告代表小图 mediaUrlList 宽度
 */
@property (nonatomic, readonly) NSInteger imageWidth;

/**
 素材高度，单图广告代表大图 imageUrl 高度、多图广告代表小图 mediaUrlList 高度
 */
@property (nonatomic, readonly) NSInteger imageHeight;

/**
 应用类广告App 图标Url
 */
@property (nonatomic, copy, readonly) NSString *iconUrl;

/**
 三小图广告的图片Url集合
 */
@property (nonatomic, copy, readonly) NSArray *mediaUrlList;

/**
 是否为视频广告
 */
@property (nonatomic, readonly) BOOL isVideoAd;

/**
 * 视频广告时长，单位 ms
 */
@property (nonatomic, readonly) CGFloat duration;
/**
 * 品牌名称，若广告返回中无品牌名称则为空
 */
@property (nonatomic, copy, readonly) NSString *brandName;

/**
 价格标签
 */
@property (copy, nonatomic) NSString *ECPMLevel;

/**
 是否为应用类广告
 */
@property (nonatomic, readonly) BOOL isAppAd;


/**
 * 广告来源: tx, bd, ifly
 */
@property (nonatomic,copy,readonly) NSString *adSource;

/**
 * 发送展现
 */
- (void)trackImpression:(UIView *)view;


@end

NS_ASSUME_NONNULL_END
