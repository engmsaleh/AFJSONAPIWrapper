//
//  TrainerProfile.m
//

#import "TrainerProfile.h"
#import "Schedule.h" 
#import "User.h" 


@implementation TrainerProfile

#pragma mark Key mapping

+ (NSDictionary*)JSONKeyPathsByPropertyKey{
    return
    @{
            @"club" : @"club",
			@"id" : @"_id",
			@"schedule" : @"schedule",
			@"clubLocation" : @"club_location",
			@"user" : @"user"
     };
}

@end
