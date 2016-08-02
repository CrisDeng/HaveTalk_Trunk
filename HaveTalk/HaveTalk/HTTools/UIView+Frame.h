//
//  UIView+Frame.h
//  HaveTalk
//
//  Created by Raymonddeng on 16/8/2.
//  Copyright © 2016年 tencent. All rights reserved.
//

#import <UIKit/UIKit.h>

#define UIViewAutoresizingFlexibleTopAndBottomMargin    UIViewAutoresizingFlexibleTopMargin | UIViewAutoresizingFlexibleBottomMargin
#define UIViewAutoresizingFlexibleLeftAndRightMargin    UIViewAutoresizingFlexibleLeftMargin | UIViewAutoresizingFlexibleRightMargin

#define UIViewAutoresizingFlexibleCenter                UIViewAutoresizingFlexibleTopAndBottomMargin | UIViewAutoresizingFlexibleLeftAndRightMargin
#define UIViewAutoresizingFlexibleSize                  UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight

@interface UIView (Frame)

@property CGFloat top;
@property CGFloat bottom;
@property CGFloat left;
@property CGFloat right;

@property CGFloat centerX;
@property CGFloat centerY;

@property CGFloat height;
@property CGFloat width;

@property CGPoint origin;
@property CGSize size;

@end
