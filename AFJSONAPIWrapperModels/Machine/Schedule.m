//
//  Schedule.m
//

#import "Schedule.h"
#import "Day.h" 


@implementation Schedule

#pragma mark Key mapping

+ (NSDictionary*)JSONKeyPathsByPropertyKey{
    return
    @{
            @"dateEnd" : @"date_end",
			@"interval" : @"interval",
			@"active" : @"active",
			@"dateStart" : @"date_start",
			@"day" : @"day"
     };
}

@end
