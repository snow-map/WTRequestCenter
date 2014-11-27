//
//  UIScreen+WTRequestCenter.h
//  WTRequestCenter
//
//  Created by SongWentong on 14/11/27.
//  Copyright (c) 2014年 song. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScreen (WTRequestCenter)
//屏幕宽度
+(CGFloat)screenWidth;

//屏幕高度
+(CGFloat)screenHeight;

//屏幕大小
+(CGSize)screenSize;

/*!
 把长度换算成320的标准
 */
+(CGFloat)convert320ToCurrent:(CGFloat)width;


/*!
 把点换算成320的标准
 */
+(CGPoint)convert320ToCurrentPoint:(CGPoint)point;


/*!
 把Rect换算成320的标准
 */
+(CGRect)convert320ToCurrentRect:(CGRect)rect;
@end
