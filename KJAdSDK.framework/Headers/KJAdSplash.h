//
//  KJAdNewSplash.h
//  KJAdSDK
//
//  Created by kj on 2021/11/12.
//  Copyright © 2021 ArmorNetwork. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "KJAdSplashDelegate.h"

@interface KJAdSplash : NSObject

/*
 required(必须).

 */
@property (nonatomic, weak, readonly) UIViewController *rootViewController;

/**
 *  委托对象
 */
@property (nonatomic ,assign) id<KJAdSplashDelegate> delegate;

/**
 * 获取mssp代码位id
 * 可以不用设置该方法，直接使用 initWithAppId: placementId: 构造方法设置
 */
@property (nonatomic,copy, readonly) NSString* AdUnitTag;

/**
 *  开屏广告的背景图片
 *  可以设置背景图片作为开屏加载时的默认背景
 */
@property (nonatomic, strong) UIImage *backgroundImage;

/**
 *  SDK版本
 */
@property (nonatomic, readonly) NSString* Version;

/**
*  构造方法
*  appId -铠甲mssp的appid
*  placementId - 铠甲mssp的广告位 id
*/
- (instancetype)initWithAppId:(NSString *)appId placementId:(NSString *)placementId rootViewController:(UIViewController *)rootViewController;

/**
 *  广告发起请求并展示在Window中
 *  详解：[可选]发起拉取广告请求,并将获取的广告以全屏形式展示在传入的Window参数中
 *  提示: Splash广告只支持竖屏
 *  @param window 展示全屏开屏的容器
 */
- (void)loadAndShowInWindow:(UIWindow *)window;

/**
 *  广告发起请求并展示在Window中, 同时在屏幕底部设置应用自身的Logo页面或是自定义View
 *  详解：[可选]发起拉取广告请求,并将获取的广告以半屏形式展示在传入的Window的上半部，剩余部分展示传入的bottomView
 *  请注意1.bottomView需设置好宽高，所占的空间不能过大，并保证高度不超过屏幕高度的 25%。2.Splash广告只支持竖屏
 *  @param window 展示开屏的容器
 *  bottomView 自定义底部View，可以在此View中设置应用Logo
 */
- (void)loadAndShowInWindow:(UIWindow *)window withBottomView:(UIView *)bottomView;

/**
 *关闭广告
 */
-(void)closeAdView;


// 下面方法是请求广告跟展示拆分方法。
/**
 *  发起拉取广告请求，只拉取不展示
 *  详解：广告素材及广告图片拉取成功后会回调splashAdDidLoad方法，当拉取失败时会回调kjSplashlFailPresentScreen方法
 *  @param adSize 展示开屏广告容器宽高
 */
-(void)loadAdWithAdSize:(CGSize)adSize;

/**
 * 返回广告是否可展示
 * @return 当广告已经加载完成且未曝光时，为YES，否则为NO
 */
-(BOOL)isAdValid;

/**
 *  展示广告，调用此方法前需调用isAdValid方法判断广告素材是否有效
 *  详解：广告展示成功时会回调kjSplashSuccessPresentScreen方法，展示失败时会回调kjSplashlFailPresentScreen方法
 *  @param window 展示开屏的容器
 *  bottomView 自定义底部View  全屏广告 则设置nil
 */
-(void)showAdInWindow:(UIWindow *)window withBottomView:(UIView *)bottomView;

@end

