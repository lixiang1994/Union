//
//  Hero_Details_BasicModel.m
//  Union
//
//  Created by 李响 on 15/8/8.
//  Copyright (c) 2015年 Lee. All rights reserved.
//

#import "Hero_Details_BasicModel.h"

@implementation Hero_Details_BasicModel

-(void)dealloc{
    
    [_hid release];
    
    [_tags release];
    
    [_name release];
    
    [_title release];
    
    [_displayName release];
    
    [_price release];
    
    [_ratingAttack release];
    
    [_ratingAttack release];
    
    [_ratingDefense release];
    
    [_ratingDifficulty release];
    
    [_ratingMagic release];
    
    [_heroDescription release];
    
    [_tips release];
    
    [_opponentTips release];
    
    [super dealloc];
    
}

-(void)setTags:(NSString *)tags{
    
    if (_tags != tags) {
        
        [_tags release];
        
        if ([tags isEqualToString:@""]) {
            
            _tags = @"射手";
        
        } else {
            
            _tags = tags;
        }
        
    }
    
}

@end
