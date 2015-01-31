//
//  TrainerProfile.h
//
//
//  Created by Alexaner Fedosov on 28.01.15.
//  Copyright (c) 2015 alexfedosov. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Schedule; 
@class User; 

@interface TrainerProfile : NSObject

@property (nonatomic, strong) NSString * club;
@property (nonatomic, strong) NSString * id;
@property (nonatomic, strong) Schedule * schedule;
@property (nonatomic, strong) NSString * clubLocation;
@property (nonatomic, strong) User * user;

@end
