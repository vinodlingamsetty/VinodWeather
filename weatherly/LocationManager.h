//
//  LocationGetter.h
//  Weatherli
//
//  Created by Vinod Lingamsetty on 5/14/16.
//  Copyright (c) 2012 Vinod Lingamsetty. All rights reserved.
//
//
//


#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@protocol LocationManagerDelegate <NSObject>
- (void) didLocateNewUserLocation:(CLLocation *)location;
@end

@interface LocationManager : NSObject <CLLocationManagerDelegate>
@property (nonatomic, assign) id <LocationManagerDelegate>delegate;

+ (id)sharedManager;
- (void)startUpdates;

@end
