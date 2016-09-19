//
//  WeatherViewController.h
//  Weatherli
//
//  Created by Vinod Lingamsetty on 5/14/16.
//  Copyright (c) 2012 Vinod Lingamsetty. All rights reserved.
//
//
//


#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "WeatherManager.h"

@interface WeatherViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate, WeatherManagerDelegate>

@end
