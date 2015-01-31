//
//  User.m
//

#import "User.h"


@implementation User

#pragma mark Key mapping

+ (NSDictionary*)JSONKeyPathsByPropertyKey{
    return
    @{
            @"id" : @"_id",
			@"surname" : @"surname",
			@"name" : @"name",
			@"avatar" : @"avatar"
     };
}

@end
