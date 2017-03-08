//  http://www.jianshu.com/p/c3e6977bf957  简书  UIKit框架总览
//  UIKit.h
//  MyUIKit
//
//  Created by 邓翔 on 17/3/5.
//  Copyright © 2017年 Jack. All rights reserved.
//
/*
 阅读此项目时，私有类及私有分类不必太关注，这些类只是.m里面为了实现某些功能定义的私有方法
 
 */
#ifndef UIKit_h
#define UIKit_h

#ifndef IBAction
#define IBAction void
#endif

#ifndef IBOutlet
#define IBOutlet
#endif
//  UIView,UIViewController,UIView动画实现，UIAppearance文章待写
#import "UIResponder.h"   //  完全实现
#import "UIEvent.h"  //  完全实现
#import "UITouch.h"  //  完全实现

#import "UIView.h"  //  完全实现

#import "UITableViewCell.h"  //  完全实现
#import "UIViewController.h"  // 完全实现

#endif /* UIKit_h */
