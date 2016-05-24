//
//  DownloadManager.m
//  Union
//
//  Created by 李响 on 15/8/20.
//  Copyright (c) 2015年 Lee. All rights reserved.
//

#import "DownloadManager.h"

@implementation DownloadManager


+ (DownloadManager *)shareDownloadManager{
    
    static DownloadManager *manager = nil;
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        
        manager = [[DownloadManager alloc]init];
        
    });
    
    return manager;
    
}















#pragma mark ---设备的总容量和可用容量（返回为byte单位）：

+ (NSNumber *)totalDiskSpace
{
    
    NSDictionary *fattributes = [[NSFileManager defaultManager] attributesOfFileSystemForPath:NSHomeDirectory() error:nil];
    
    return [fattributes objectForKey:NSFileSystemSize];
    
}

+ (NSNumber *)freeDiskSpace
{
    
    NSDictionary *fattributes = [[NSFileManager defaultManager] attributesOfFileSystemForPath:NSHomeDirectory() error:nil];
    
    return [fattributes objectForKey:NSFileSystemFreeSize];
    
}



@end
