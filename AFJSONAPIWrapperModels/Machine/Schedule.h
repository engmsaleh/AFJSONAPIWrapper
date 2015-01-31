//
//  Schedule.h
//
//
//  Created by Alexaner Fedosov on 28.01.15.
//  Copyright (c) 2015 alexfedosov. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Day; 

@interface Schedule : NSObject

@property (nonatomic, strong) NSString * dateEnd;
@property (nonatomic, strong) NSNumber * interval;
@property (nonatomic, strong) NSNumber * active;
@property (nonatomic, strong) NSString * dateStart;
@property (nonatomic, strong) Day * day;

@end
