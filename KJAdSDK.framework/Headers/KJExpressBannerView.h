//
//  KJExpressBannerView.h
//  KJAdSDK
//
//  Created by 陈林辉 on 2022/10/11.
//  Copyright © 2022 ArmorNetwork. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "KJExpressBannerViewDelegate.h"
NS_ASSUME_NONNULL_BEGIN

@interface KJExpressBannerView : UIView
// 委托对象
@property (nonatomic, weak) id<KJExpressBannerViewDelegate> delegate;

// SDK版本
@property(nonatomic, readonly) NSString *Version;

@property (nonatomic, assign, readonly) NSInteger interval;

/**
*  构造方法
*  详解：frame - banner
*       adSize - adSize
*       AppID - 媒体 ID
*       SlotID - 广告位 ID
*       viewController - 视图控制器
*/
- (instancetype)initWithAppID:(NSString *)AppID
                    SlotID:(NSString *)slotID
            viewController:(UIViewController *)viewController
                        adSize:(CGSize)adsize;

/**
*  构造方法
*  详解：frame - banner
*       adSize - adSize
*       AppID - 媒体 ID
*       SlotID - 广告位 ID
*       viewController - 视图控制器
*......interval - 广告刷新间隔，范围 [30, 120] 秒，0秒为不设置轮播
*/
- (instancetype)initWithAppID:(NSString *)AppID
                    SlotID:(NSString *)slotID
            viewController:(UIViewController *)viewController
                       adSize:(CGSize)adsize
                     interval:(NSInteger)interval;


// 拉取并展示广告
- (void)loadAdAndShow;
@end

NS_ASSUME_NONNULL_END
