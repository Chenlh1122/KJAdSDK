//
//  KJExpressBannerView.h
//  KJAdSDK
//
//  Created by kj on 2020/3/4.
//  Copyright © 2020 ArmorNetwork. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KJExpressBannerViewDelegate.h"

NS_ASSUME_NONNULL_BEGIN



@interface KJExpressBannerView : UIView

// 委托对象
@property (nonatomic, weak) id<KJExpressBannerViewDelegate> delegate;

// SDK版本
@property(nonatomic, readonly) NSString *Version;

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

// 拉取并展示广告
- (void)loadAdAndShow;
@end

NS_ASSUME_NONNULL_END
