//
//  Day.h
//
//
//  Created by Alexaner Fedosov on 28.01.15.
//  Copyright (c) 2015 alexfedosov. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Span; 

@interface Day : NSObject

@property (nonatomic, strong) NSNumber * day;
@property (nonatomic, strong) Span * span;
@property (nonatomic, strong) NSNumber * active;

@end
