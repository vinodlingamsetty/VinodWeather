//
//  WeatherManager.h
//  Weatherli
//
//  Created by Vinod Lingamsetty on 5/14/16.
//  Copyright (c) 2012 Vinod Lingamsetty. All rights reserved.
//
//
//


#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "Reachability.h"
#import "LocationManager.h"
#import "WeatherItem+Parse.h"
#import <MapKit/MapKit.h>

@protocol WeatherManagerDelegate <NSObject>
-(void)didRecieveAndParseNewWeatherItem:(WeatherItem*)item;
@end

@interface WeatherManager : NSObject <LocationManagerDelegate>
@property (nonatomic, assign) id <WeatherManagerDelegate>delegate;

+(id)sharedManager;

-(void)startUpdatingLocation;
-(WeatherItem *)currentWeatherItem;


@end
