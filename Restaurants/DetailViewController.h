//
//  DetailViewController.h
//  Restaurants
//
//

#import <UIKit/UIKit.h>
#import "Restaurant.h"

@interface DetailViewController : UIViewController
{
    Restaurant* restaurant;
    NSString* reviewerName;
    NSArray* reviews;
    NSString* text; 
    int score; 
    int numberofHelpfulReviews;
    int numberofUnhelpfulReviews;
    NSArray* Review; 
}

@property (weak, nonatomic) IBOutlet UILabel *addressLabel;
@property (weak, nonatomic) IBOutlet UINavigationItem *navigationHeader;
@property (weak, nonatomic) IBOutlet UILabel *cuisineLabel;
@property (weak, nonatomic) IBOutlet UILabel *ageLabel;
@property (weak, nonatomic) IBOutlet UILabel *helpfulReviewPercentageLabel;
@property (weak, nonatomic) IBOutlet UILabel *helpfulReviewLabel;

@property(readwrite, strong) NSString* text;
@property(readwrite) int score;
@property(readwrite) int numberofHelpfulReviews;
@property(readwrite) int numberofUnhelpfulReviews;

@property(nonatomic, retain) NSArray* reviews;
@property(nonatomic, retain) NSArray* Review;


@property (weak, nonatomic) IBOutlet UILabel *review1;
@property (weak, nonatomic) IBOutlet UILabel *review2;
@property (weak, nonatomic) IBOutlet UILabel *review3;
@property (weak, nonatomic) IBOutlet UILabel *review4;


@property (weak, nonatomic) IBOutlet UIImageView *star1;
@property (weak, nonatomic) IBOutlet UIImageView *star2;
@property (weak, nonatomic) IBOutlet UIImageView *star3;
@property (weak, nonatomic) IBOutlet UIImageView *star4;
@property (weak, nonatomic) IBOutlet UIImageView *star5;

@end
