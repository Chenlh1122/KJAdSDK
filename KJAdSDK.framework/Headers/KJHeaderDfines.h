//
//  KJHeaderDfines.h
//  KJAdSDK
//
//  Created by kj on 2018/12/6.
//  Copyright © 2018年 ArmorNetwork. All rights reserved.
//

#ifndef KJHeaderDfines_h
#define KJHeaderDfines_h
#import "KJCustomLog.h"
#import <UIKit/UIKit.h>

/** 
 弱引用
 */
#define kWeakSelfKJ(type)  __weak typeof(type) weak##type = type;

// 屏幕高度
#define KJ_kScreenHeight [[UIScreen mainScreen] bounds].size.height
// 屏幕宽度
#define KJ_kScreenWidth [[UIScreen mainScreen] bounds].size.width


/*************************************日志输出 *******************************************/
#define KJLogFun    fprintf(stderr,"[KJADSDKLog] %s\n",__func__);

#define KJLog(format, ...) {\
if ([KJCustomLog logEnable]) {\
NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];\
[dateFormatter setDateStyle:NSDateFormatterMediumStyle];\
[dateFormatter setTimeStyle:NSDateFormatterShortStyle];\
[dateFormatter setDateFormat:@"YYYY-MM-dd hh:mm:ss:SSS"]; \
NSString *str = [dateFormatter stringFromDate:[NSDate date]];\
fprintf(stderr,"[KJADSDKLog] %s (%s:%d)%s\t%s\n\n",[str UTF8String],[[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __LINE__,__func__, [[NSString stringWithFormat:format, ##__VA_ARGS__] UTF8String]);\
}\
}\
/*************************************日志输出 *******************************************/

#if defined(__has_attribute)
#if __has_attribute(deprecated)
#define KJ_DEPRECATED_MSG_ATTRIBUTE(s) __attribute__((deprecated(s)))
#define KJ_DEPRECATED_ATTRIBUTE __attribute__((deprecated))
#else
#define KJ_DEPRECATED_MSG_ATTRIBUTE(s)
#define KJ_DEPRECATED_ATTRIBUTE
#endif
#else
#define KJ_DEPRECATED_MSG_ATTRIBUTE(s)
#define KJ_DEPRECATED_ATTRIBUTE
#endif


UIKIT_EXTERN NSString *const KJHostAPI;
UIKIT_EXTERN NSString *const KJAdVersion;

/**
 *  广告展示失败类型枚举
 */
typedef enum KJ_FailReason {
    KJFailReason_NOAD = 0,
    // 没有推广返回
    KJFailReason_EXCEPTION,
    //网络或其它异常
    KJFailReason_FRAME,
    //广告尺寸异常，不显示广告
    KJFailReason_NO
    // 广告位不存在
} KJFailReason;

#endif /* KJHeaderDfines_h */

