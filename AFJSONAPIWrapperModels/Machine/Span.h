//
//  Span.h
//
//
//  Created by Alexaner Fedosov on 28.01.15.
//  Copyright (c) 2015 alexfedosov. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Span : NSObject

@property (nonatomic, strong) NSString * end;
@property (nonatomic, strong) NSString * start;
@property (nonatomic, strong) NSNumber * busy;

@end
