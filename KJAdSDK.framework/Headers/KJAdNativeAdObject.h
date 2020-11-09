//
//  KjAdNativeAdObject.h
//  KJAdSDK
//
//  Created by kj on 2018/12/21.
//  Copyright © 2018年 ArmorNetwork. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface KJAdNativeAdObject : NSObject

/**
 * 广告 id
 */
@property(copy, nonatomic) NSString *adId;
/**
 * 标题 text
 */
@property (copy, nonatomic)  NSString *title;
/**
 * 描述 text
 */
@property (copy, nonatomic)  NSString *text;
/**
 * 小图 url
 */
@property (copy, nonatomic) NSString *iconImageURLString;
/**
 * 大图 url
 */
@property (copy, nonatomic) NSString *mainImageURLString;

/**
 * 广告标识图标 url
 */
@property (copy, nonatomic) NSString *adLogoURLString;

/**
 * 铠甲logo图标 url
 */
@property (copy, nonatomic) NSString *kjLogoURLString;

/**
 * 多图信息流的image url array
 */
@property (strong, nonatomic) NSArray *morepics;

/**
 * 视频url
 */
@property (copy, nonatomic)  NSString *videoURLString;
/**
 * 视频时长，单位为s
 */
@property (copy, nonatomic)  NSNumber *videoDuration;
/**
 * 品牌名称，若广告返回中无品牌名称则为空
 */
@property (copy, nonatomic)  NSString *brandName;
/**
 * 自动播放
 */
@property (copy, nonatomic)  NSNumber *autoPlay;

/**
 * 必须传
 */
@property (nonatomic, assign)  UIViewController *presentAdViewController;

/**
 * 发送展现
 */
- (void)trackImpression:(UIView *)view;

/**
 * 发送点击
 */
-(void)handleClick:(UIView*)view;



@end

NS_ASSUME_NONNULL_END
