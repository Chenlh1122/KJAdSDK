//
//  KJUnifiedNativeAdView.h
//  KJAdSDK
//
//  Created by clh on 2020/12/3.
//  Copyright © 2020 ArmorNetwork. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KJLogoView.h"
#import "KJMediaView.h"
#import "KJUnifiedNativeAdDataObject.h"

@class KJUnifiedNativeAdView;

@interface KJUnifiedNativeAdView : UIView

/**
 * 小图
 */
@property (strong, nonatomic, readonly) UIImageView *iconImageView;

/**
 * 大图
 */
@property (strong, nonatomic, readonly) UIImageView *mainImageView;

/**
 * 标题 view
 */
@property (strong, nonatomic, readonly) UILabel *titleLabel;

/**
 * 描述 view
 */
@property (strong, nonatomic, readonly) UILabel *textLabel;

/**
 * 品牌名称 view
 */
@property (strong, nonatomic, readonly) UILabel *brandLabel;


/**
 绑定的数据对象
 */
@property (nonatomic, strong, readonly) KJUnifiedNativeAdDataObject *dataObject;

/**
 视频广告的媒体View，绑定数据对象后自动生成，可自定义布局
 */
@property (nonatomic, strong, readonly) KJMediaView *mediaView;


/**
 广告 LogoView，自动生成，可自定义布局
 */
@property (nonatomic, strong, readonly) KJLogoView *logoView;

/*
 *  viewControllerForPresentingModalView
 *  详解：开发者需传入用来弹出目标页的ViewController，一般为当前ViewController
 */
@property (nonatomic, weak) UIViewController *viewController;


/**
 常规大图信息流 MaterialType是NORMAL的初始化方法
 @param object 数据对象
 @param frame 信息流视图大小
 @param brandLabel 品牌名称
 @param titleLabel 标题
 @param textLabel 描述
 @param iconView 图标
 @param mainView 大图
 @return 信息流视图
 */
- (instancetype)initWithObject:(KJUnifiedNativeAdDataObject *)object frame:(CGRect)frame
          brandName:(UILabel *)brandLabel
              title:(UILabel *)titleLabel
               text:(UILabel *)textLabel
               icon:(UIImageView *)iconView
          mainImage:(UIImageView *)mainView;

/**
 视频信息流 的初始化方法
 */
- (instancetype)initWithObject:(KJUnifiedNativeAdDataObject *)object frame:(CGRect)frame
          brandName:(UILabel *)brandLabel
              title:(UILabel *)titleLabel
               text:(UILabel *)textLabel
               icon:(UIImageView *)iconView
          videoView:(KJMediaView *)videoView;

/**
 *  自渲染2.0视图注册（即将废弃）
 */
- (void)loadAndDisplayNativeAd;

/**
 *  自渲染视图注册（推荐）
 *  @param clickableViews 可点击的视图数组，此数组内的广告元素才可以响应广告对应的点击事件
 */
- (void)loadAndDisplayNativeAdWithclickableViews:(NSArray<UIView *> *)clickableViews;


/**
 曝光事件 百度源必传
 */
- (void)trackImpression;

/**
 注销数据对象 仅部分广告有效
 */
-(void)unregisterDataObject;

@end
