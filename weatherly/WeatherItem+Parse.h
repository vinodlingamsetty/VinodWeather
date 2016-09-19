//
//  WeatherItem+Parse.h
//  Weatherli
//
//  Created by Vinod Lingamsetty on 5/14/16.
//  Copyright (c) 2012 Vinod Lingamsetty. All rights reserved.
//
//
//

#import "WeatherItem.h"

@interface WeatherItem (Parse)

+(WeatherItem *)itemFromWeatherDictionary:(NSDictionary *)dict;

@end
