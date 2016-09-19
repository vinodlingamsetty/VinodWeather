//
//  DetailView.m
//  Weatherli
//
//  Created by Vinod Lingamsetty on 5/14/16.
//  Copyright (c) 2012 Vinod Lingamsetty. All rights reserved.
//
//
//

#import "DetailView.h"

CGFloat  kFontSizeForDetailViewTitleLabels = 30;
CGFloat  kFontSizeForDetailViewTempLabel = 35;

@implementation DetailView

-(id)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        NSArray *arrayOfViews = [[NSBundle mainBundle] loadNibNamed:@"DetailView"
                                                              owner:nil
                                                            options:nil];
        if ([arrayOfViews count] < 1) return nil;

        DetailView *newView = [arrayOfViews objectAtIndex:0];
        [newView setFrame:frame];
        self = newView;
    }
    return self;
}

- (void)awakeFromNib {
    [super awakeFromNib];
    self.dayLabel1.font = [UIFont fontWithName:@"steelfish" size:kFontSizeForDetailViewTitleLabels];
    self.dayLabel2.font = [UIFont fontWithName:@"steelfish" size:kFontSizeForDetailViewTitleLabels];
    self.dayLabel3.font = [UIFont fontWithName:@"steelfish" size:kFontSizeForDetailViewTitleLabels];
    self.dayLabel4.font = [UIFont fontWithName:@"steelfish" size:kFontSizeForDetailViewTitleLabels];
    self.dayLabel5.font = [UIFont fontWithName:@"steelfish" size:kFontSizeForDetailViewTitleLabels];
    
    self.dayTemp1.font = [UIFont fontWithName:@"steelfish" size:kFontSizeForDetailViewTempLabel];
    self.dayTemp2.font = [UIFont fontWithName:@"steelfish" size:kFontSizeForDetailViewTempLabel];
    self.dayTemp3.font = [UIFont fontWithName:@"steelfish" size:kFontSizeForDetailViewTempLabel];
    self.dayTemp4.font = [UIFont fontWithName:@"steelfish" size:kFontSizeForDetailViewTempLabel];
    self.dayTemp5.font = [UIFont fontWithName:@"steelfish" size:kFontSizeForDetailViewTempLabel];
    
    self.madeWithLoveLabel.font = [UIFont fontWithName:@"steelfish" size:20];
    self.designedByLabel.font = [UIFont fontWithName:@"steelfish" size:20];
    
}

@end
