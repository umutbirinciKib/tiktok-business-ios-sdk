//
//  TikTok.h
//  TikTokBusinessSDK
//
//  Created by Aditya Khandelwal on 9/8/20.
//  Copyright © 2020 bytedance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TikTokAppEvent.h"

NS_ASSUME_NONNULL_BEGIN

@interface TikTok : NSObject

- (instancetype)initDuringTest: (BOOL) testEnvironment;

- (void)trackEvent:(nullable TikTokAppEvent *)event;

@end

NS_ASSUME_NONNULL_END
