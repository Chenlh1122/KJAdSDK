//
//  KJMediaView.h
//  KJAdSDK
//
//  Created by kj on 2020/12/3.
//  Copyright © 2020 ArmorNetwork. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class KJMediaView;
@protocol KJMediaViewDelegate <NSObject>

@optional

/**
 用户点击 MediaView 回调，当 GDTVideoConfig userControlEnable 设为 YES，用户点击 mediaView 会回调。
 
 @param mediaView 播放器实例
 */
- (void)kj_mediaViewDidTapped:(KJMediaView *)mediaView;

/**
 播放完成回调

 @param mediaView 播放器实例
 */
- (void)kj_mediaViewDidPlayFinished:(KJMediaView *)mediaView;

@end

@interface KJMediaView : UIView

/**
 GDTMediaView 回调对象
 */
@property (nonatomic, weak) id <KJMediaViewDelegate> delegate;

///**
// * 视频广告时长，单位 ms
// */
//- (CGFloat)videoDuration;
//
///**
// * 视频广告已播放时长，单位 ms
// */
//- (CGFloat)videoPlayTime;

/**
 播放视频
 */
- (void)play;

/**
 暂停视频，调用 pause 后，需要被暂停的视频广告对象，不会再自动播放，需要调用 play 才能恢复播放。
 */
- (void)pause;

/**
 停止播放
 */
- (void)stop;

/**
 播放静音开关
 @param flag 是否静音
 */
- (void)muteEnable:(BOOL)flag;

@end

NS_ASSUME_NONNULL_END
