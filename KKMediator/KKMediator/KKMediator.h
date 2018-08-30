//
//  KKMediator.h
//  KKMediator
//
//  Created by Tony on 2018/8/30.
//  Copyright © 2018年 KK. All rights reserved.
//  version 1.0.0  copy by  CTMediator
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

extern NSString * const kCTMediatorParamsKeySwiftTargetModuleName;

@interface KKMediator : NSObject

+ (instancetype)sharedInstance;

// 远程App调用入口
- (id)performActionWithUrl:(NSURL *)url completion:(void(^)(NSDictionary *info))completion;
// 本地组件调用入口
- (id)performTarget:(NSString *)targetName action:(NSString *)actionName params:(NSDictionary *)params shouldCacheTarget:(BOOL)shouldCacheTarget;
- (void)releaseCachedTargetWithTargetName:(NSString *)targetName;

@end
