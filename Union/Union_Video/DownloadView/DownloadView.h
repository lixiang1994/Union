//
//  DownloadView.h
//  Union
//
//  Created by lanou3g on 15-7-22.
//  Copyright (c) 2015年 Lee. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^DownLoadBlock) ();

@interface DownloadView : UIView

@property (nonatomic ,assign) CGPoint startPoint;//触摸起始点

@property (nonatomic ,assign) CGPoint endPoint;//触摸结束点

@property (nonatomic ,copy) DownLoadBlock downLoadBlock;

@end
