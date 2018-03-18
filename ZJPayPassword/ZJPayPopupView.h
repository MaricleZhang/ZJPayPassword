//
//  ZJPayPopupView.h
//  EasyLoan
//
//  Created by 张建 on 2018/3/9.
//  Copyright © 2018年 Facebook. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ZJPayPopupViewDelegate <NSObject>

- (void)didClickForgetPasswordButton;

- (void)didPasswordInputFinished:(NSString *)password;

@end

@interface ZJPayPopupView : UIView

@property (nonatomic, weak) id <ZJPayPopupViewDelegate> delegate;

- (void)showPayPopView;
- (void)hidePayPopView;
- (void)didInputPayPasswordError;

@end
