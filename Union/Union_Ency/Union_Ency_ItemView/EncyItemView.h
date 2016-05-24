//
//  EncyItemView.h
//  Union
//
//  Created by 李响 on 15/8/4.
//  Copyright (c) 2015年 Lee. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "EncyModel.h"


@interface EncyItemView : UIView


@property (nonatomic , retain)UIImageView *imageView;//图标

@property (nonatomic , retain)UILabel *label;//标题

@property (nonatomic , retain)EncyModel *model;//数据模型

@end
