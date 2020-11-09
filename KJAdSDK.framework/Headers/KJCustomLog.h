//
//  KJCustomLog.h
//  YYJiaSDK
//
//  Created by Ferryman on 17/3/13.
//  Copyright © 2017年 YYJia. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KJCustomLog : NSObject
/** 设置是否打印sdk的log信息, 默认NO(不打印log).
 @param yesOrNo 设置为YES,SDK 会输出log信息可供调试参考. 除非特殊需要，否则发布产品时需改回NO.
 */
+ (void)setLogEnabled:(BOOL)yesOrNo;
+ (BOOL)logEnable;

@end
