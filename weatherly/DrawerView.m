//
//  DrawerView.m
//  Weatherli
//
//  Created by Vinod Lingamsetty on 5/14/16.
//  Copyright (c) 2012 Vinod Lingamsetty. All rights reserved.
//
//
//


#import "DrawerView.h"

CGFloat  kFontSizeForDrawerViewLabels = 30;

@implementation DrawerView

-(id)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        NSArray *arrayOfViews = [[NSBundle mainBundle] loadNibNamed:@"DrawerView"
                                                              owner:nil
                                                            options:nil];
        if ([arrayOfViews count] < 1) return nil;
        
        DrawerView *newView = [arrayOfViews objectAtIndex:0];
        [newView setFrame:frame];
        self = newView;
    }
    return self;
}

- (void)awakeFromNib {
    [super awakeFromNib];
    
    self.humidityLabel.font = [UIFont fontWithName:@"steelfish" size:kFontSizeForDrawerViewLabels];
    self.precipitationLabel.font = [UIFont fontWithName:@"steelfish" size:kFontSizeForDrawerViewLabels];
    self.windLabel.font = [UIFont fontWithName:@"steelfish" size:kFontSizeForDrawerViewLabels];
    self.currentTempLabel.font = [UIFont fontWithName:@"steelfish" size:140];
    
    self.currentTempLabel.text = @"100°";
    self.currentTempLabel.backgroundColor = [UIColor clearColor];
    self.currentTempLabel.textColor = [UIColor whiteColor];
    [self.currentTempImageView setImage:[UIImage imageNamed:@"sun.png"]];


}

@end
