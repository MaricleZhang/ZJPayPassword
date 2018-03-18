//
//  ZJDefines.h
//  ZJPayPasswordDemo
//
//  Created by 张建 on 2018/3/18.
//  Copyright © 2018年 张建. All rights reserved.
//

#ifndef ZJDefines_h
#define ZJDefines_h

#define UIColorFromHEX(rgbValue)    [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define SCREEN_WIDTH            ([[UIScreen mainScreen]bounds].size.width)
#define SCREEN_HEIGHT            ([[UIScreen mainScreen]bounds].size.height)


#define WIDTH6                  375.0

#define XX_6(value)             (1.0 * (value) * SCREEN_WIDTH / WIDTH6)

// 常用字体大小
#define Font_XX6(value)         [UIFont systemFontOfSize:ceil(XX_6(value))]


#endif /* ZJDefines_h */
