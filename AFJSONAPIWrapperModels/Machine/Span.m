//
//  Span.m
//

#import "Span.h"


@implementation Span

#pragma mark Key mapping

+ (NSDictionary*)JSONKeyPathsByPropertyKey{
    return
    @{
            @"end" : @"end",
			@"start" : @"start",
			@"busy" : @"busy"
     };
}

@end
