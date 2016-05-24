//
//  AllHeroCollectionView.h
//  Union
//
//  Created by 李响 on 15/7/17.
//  Copyright (c) 2015年 Lee. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "GearPowered.h"

typedef void (^HeroDetailBlock)(NSString *heroName);

@interface AllHeroCollectionView : UICollectionView<GearPoweredDelegate , UICollectionViewDataSource , UICollectionViewDelegate>


//根据筛选条件筛选数据

- (void)dataScreeningConditions:(NSString *)condition Type:(NSString *)type;

//根据英雄名字搜索英雄

- (void)searchHeroWithHeroName:(NSString *)heroName;

//英雄详情block

@property (nonatomic , copy ) HeroDetailBlock heroDetailBlock;

@end
