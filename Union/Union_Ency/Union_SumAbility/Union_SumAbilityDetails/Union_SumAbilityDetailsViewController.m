//
//  Union_SumAbilityDetailsViewController.m
//  Union
//
//  Created by 李响 on 15/8/15.
//  Copyright (c) 2015年 Lee. All rights reserved.
//

#import "Union_SumAbilityDetailsViewController.h"

@interface Union_SumAbilityDetailsViewController ()

@end

@implementation Union_SumAbilityDetailsViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark ---获取数据

-(void)setModel:(SumAbilityModel *)model {
    
    if (_model != model) {
        
        [_model release];
        
        _model = [model retain];
        
    }
    
    
    
}

@end
