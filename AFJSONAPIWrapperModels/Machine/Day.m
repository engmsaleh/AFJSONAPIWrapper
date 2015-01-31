//
//  Day.m
//

#import "Day.h"
#import "Span.h" 


@implementation Day

#pragma mark Key mapping

+ (NSDictionary*)JSONKeyPathsByPropertyKey{
    return
    @{
            @"day" : @"day",
			@"span" : @"span",
			@"active" : @"active"
     };
}

@end
