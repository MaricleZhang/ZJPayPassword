//
//  ViewController.m
//  ZJPayPasswordDemo
//
//  Created by 张建 on 2018/3/18.
//  Copyright © 2018年 张建. All rights reserved.
//

#import "ViewController.h"
#import "ZJDefines.h"
#import "ZJPayPopupView.h"

@interface ViewController ()<ZJPayPopupViewDelegate>

@property (nonatomic, strong) UIButton *button;
@property (nonatomic, strong) ZJPayPopupView *payPopupView;

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    [self.view addSubview:self.button];
}

- (void)buttonAction
{
    self.payPopupView = [[ZJPayPopupView alloc] init];
    self.payPopupView.delegate = self;
    [self.payPopupView showPayPopView];
}

#pragma mark - ZJPayPopupViewDelegate

- (void)didClickForgetPasswordButton
{
    NSLog(@"点击了忘记密码");
}

- (void)didPasswordInputFinished:(NSString *)password
{
    if ([password isEqualToString:@"147258"])
    {
        NSLog(@"输入的密码正确");
    }
    else
    {
        NSLog(@"输入错误:%@",password);
        [self.payPopupView didInputPayPasswordError];
    }
}

#pragma mark - Getter/Setter

- (UIButton *)button
{
    if (!_button)
    {
        _button = [UIButton buttonWithType:UIButtonTypeSystem];
        _button.frame = CGRectMake(100, 200, SCREEN_WIDTH - 2 * 100, 50);
        [_button setTitle:@"点击显示交易密码输入" forState:UIControlStateNormal];
        [_button addTarget:self action:@selector(buttonAction) forControlEvents:UIControlEventTouchUpInside];
    }
    return _button;
}



@end
