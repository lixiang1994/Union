//
//  AppDelegate.h
//  Union
//
//  Created by 李响 on 15/6/29.
//  Copyright (c) 2015年 Lee. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "DownloadView.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic ,retain) DownloadView *downloadView;//下载气泡


//打开下载视图控制器

- (void)openDownloadVC;

@end

