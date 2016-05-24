//
//  Hero_Details_DetailsView.h
//  Union
//
//  Created by 李响 on 15/8/10.
//  Copyright (c) 2015年 Lee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Hero_Details_DetailsView : UITableView

typedef void (^SelectedHeroToHeroDetails)(NSString *enHeroName);

@property (nonatomic , copy ) SelectedHeroToHeroDetails selectedHeroToHeroDetails;//选中英雄到英雄详情Block

@property (nonatomic , retain ) NSMutableDictionary *dataDic;//数据源字典

@end
