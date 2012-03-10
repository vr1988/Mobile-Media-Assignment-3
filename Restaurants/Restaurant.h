//
//  Restaurant.h
//  Restaurants
//

#import <Foundation/Foundation.h>

@interface Restaurant : NSObject
{
    NSString* address;
    NSString* name;
    NSString* cuisineType;
    int yearOpened;
    int score; //(1 to 5, how good the reviewer thought the restaurant was)
    int numberofHelpfulRatings;
    int numberofUnhelpfulRatings;
    
    
}
@property(readwrite, strong) NSString* address;
@property(readwrite, strong) NSString* name;
@property(readwrite, strong) NSString* cuisineType;
@property(readwrite) int yearOpened;



-(int)age;

@end
