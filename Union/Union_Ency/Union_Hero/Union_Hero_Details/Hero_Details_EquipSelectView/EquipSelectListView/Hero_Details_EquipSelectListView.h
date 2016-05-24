//
//  Hero_Details_EquipSelectListView.h
//  Union
//
//  Created by 李响 on 15/8/10.
//  Copyright (c) 2015年 Lee. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "EquipSelectModel.h"

typedef void (^SelectedEquipSelectDetailsBlock)(EquipSelectModel *model);

@interface Hero_Details_EquipSelectListView : UITableView

@property (nonatomic , copy ) NSString *enHeroName;//英文英雄名称

@property (nonatomic , copy ) SelectedEquipSelectDetailsBlock selectedEquipSelectDetailsBlock;//选中出装详情Block

@end
