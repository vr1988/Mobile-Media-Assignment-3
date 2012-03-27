//
//  reviews.h
//  Restaurants
//
//  Created by Vanessa Roa on 3/9/12.
//  Copyright (c) 2012 Fashion Institute of Technology. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Restaurant.h"

@interface Review : NSObject
{
    NSString* reviewerName;
    NSString* reviewer;
    NSString* text;
    int score;
    int numberOfHelpfulRatings;
    int numberOfUnHelpfulRatings;
    int numberOfHelpfulReviews;
    int numberOfUnhelpfulReviews;
    NSArray* review1;
    NSArray* review2;
    NSArray* review3;
    NSArray* review4;

}
@property(nonatomic, retain) NSArray* review1;
@property(nonatomic, retain) NSArray* review2;
@property(nonatomic, retain) NSArray* review3;
@property(nonatomic, retain) NSArray* review4;

@property(readwrite) int reviewer;
@property(readwrite) int numberofHelpfulRatings;
@property(readwrite) int numberofUnHelpfulRatings;
@property(readwrite) int numberOfHelpfulReviews;
@property(readwrite) int numberOfUnhelpfulReviews;
@property(readwrite) int score;

-(int)age;
@end
