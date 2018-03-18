//
//  ZJPayPasswordView.h
//  EasyLoan
//
//  Created by 张建 on 2018/3/8.
//  Copyright © 2018年 Facebook. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^ZJInputPasswordCompletionBlock)(NSString *password);

@interface ZJPayPasswordView : UIView

@property (nonatomic,copy)ZJInputPasswordCompletionBlock completionBlock;

/** 更新输入框数据 */
- (void)updateLabelBoxWithText:(NSString *)text;

/** 抖动输入框 */
- (void)startShakeViewAnimation;

- (void)didInputPasswordError;


@end
