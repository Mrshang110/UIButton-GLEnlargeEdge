//
//  UIButton+GLEnlargeEdge.h
//  扩大控件响应
//
//  Created by 爱上党 on 16/1/25.
//  Copyright © 2016年 尚高林. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <objc/runtime.h>

@interface UIButton (GLEnlargeEdge)
/**  
 * size 在button的frame基础上向四周扩展size pt
 */
- (void)gl_setEnlargeEdge:(CGFloat) size;
/**
 *  在button的frame基础上向四周扩展size pt
 */

- (void)gl_setEnlargeEdgeWithTop:(CGFloat) top right:(CGFloat) right bottom:(CGFloat) bottom left:(CGFloat) left;

@end
