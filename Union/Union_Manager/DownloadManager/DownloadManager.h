//
//  DownloadManager.h
//  Union
//
//  Created by 李响 on 15/8/20.
//  Copyright (c) 2015年 Lee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DownloadManager : NSObject


+ (DownloadManager *)shareDownloadManager;

//设备的总容量和可用容量（返回为byte单位）：

+ (NSNumber *)totalDiskSpace;

+ (NSNumber *)freeDiskSpace;

@end
