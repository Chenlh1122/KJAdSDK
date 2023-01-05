//
//  KJNativeExpressAdView.h
//  KJAdSDK
//
//  Created by 陈林辉 on 2022/10/12.
//  Copyright © 2022 ArmorNetwork. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface KJNativeExpressAdView : UIView
// 是否渲染完毕
@property (nonatomic, assign, readonly) BOOL isReady;

/*
 *  viewControllerForPresentingModalView
 *  详解：[必选]开发者需传入用来弹出目标页的ViewController，一般为当前ViewController
 */
@property (nonatomic, weak) UIViewController *controller;

//原生模板广告渲染
- (void)render;

// 发送展现 (新版不用实现)
- (void)trackImpression;
@end

NS_ASSUME_NONNULL_END
