//
//  DetailView.h
//  Weatherli
//
//  Created by Vinod Lingamsetty on 5/14/16.
//  Copyright (c) 2012 Vinod Lingamsetty. All rights reserved.
//
//
//

#import <UIKit/UIKit.h>
#import "WeatherManager.h"
#import "WeatherItem.h"

@interface DetailView : UIView

@property (weak, nonatomic) IBOutlet UILabel *dayLabel1;
@property (weak, nonatomic) IBOutlet UILabel *dayLabel2;
@property (weak, nonatomic) IBOutlet UILabel *dayLabel3;
@property (weak, nonatomic) IBOutlet UILabel *dayLabel4;
@property (weak, nonatomic) IBOutlet UILabel *dayLabel5;
@property (weak, nonatomic) IBOutlet UIImageView *dayImage1;
@property (weak, nonatomic) IBOutlet UIImageView *dayImage2;
@property (weak, nonatomic) IBOutlet UIImageView *dayImage3;
@property (weak, nonatomic) IBOutlet UILabel *designedByLabel;
@property (weak, nonatomic) IBOutlet UIImageView *dayImage4;
@property (weak, nonatomic) IBOutlet UIImageView *dayImage5;
@property (weak, nonatomic) IBOutlet UILabel *dayTemp1;
@property (weak, nonatomic) IBOutlet UILabel *dayTemp2;
@property (weak, nonatomic) IBOutlet UILabel *dayTemp3;
@property (weak, nonatomic) IBOutlet UILabel *dayTemp4;
@property (weak, nonatomic) IBOutlet UILabel *dayTemp5;
@property (weak, nonatomic) IBOutlet UILabel *madeWithLoveLabel;

@end
