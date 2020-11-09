//
//  KJAdNativeAdView.h
//  KJAdSDK
//
//  Created by kj on 2018/12/22.
//  Copyright © 2018年 ArmorNetwork. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KJAdNativeAdObject.h"
NS_ASSUME_NONNULL_BEGIN
typedef void (^KJAdViewCompletionBlock)(NSArray *errors);
@interface KJAdNativeAdView : UIView

/**
 * 初始化，非视频信息流，MaterialType是NORMAL的初始化方法
 * 添加品牌名称brandName
 */
-(id)initWithFrame:(CGRect)frame
         brandName:(UILabel *) brandLabel
             title:(UILabel *) titleLabel
              text:(UILabel *) textLabel
              icon:(UIImageView *) iconView
         mainImage:(UIImageView *) mainView;

/**
 * 小图
 */
@property (assign, nonatomic)  UIImageView *iconImageView;

/**
 * 大图
 */
@property (assign, nonatomic)  UIImageView *mainImageView;

/**
 * 广告标示
 */
@property (assign, nonatomic)  UIImageView *adLogoImageView;

/**
 * 百度广告logo
 */
@property (assign, nonatomic)  UIImageView *baiduLogoImageView;

/**
 * 标题 view
 */
@property (assign, nonatomic)  UILabel *titleLabel;

/**
 * 描述 view
 */
@property (assign, nonatomic)  UILabel *textLabel;

/**
 * 品牌名称 view
 */
@property (assign, nonatomic)  UILabel *brandLabel;

/**
* 根据BaiduMobAdNativeAdObject广告内容，在广告视图上缓存和展示广告,同时关联广告视图和点击展现行为
* object 包含文字内容和物料地址
*/
- (void)loadAndDisplayNativeAdWithObject:(KJAdNativeAdObject *)object completion:(KJAdViewCompletionBlock)completionBlock;

@end

NS_ASSUME_NONNULL_END
