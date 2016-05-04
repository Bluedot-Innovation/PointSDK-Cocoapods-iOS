/****
 *    BDLocation.h
 *
 *    Copyright (C) 2015 Bluedot Innovation.  All rights reserved.
 */

#import <CoreGraphics/CoreGraphics.h>
#import "BDGeospatialUnits.h"
#import "BDPDeepCopy.h"

@class BDPoint;

#ifdef BDPlatformApple
@class CLLocation;
#endif

/**
*  Represents a recorded, geographic location; combining a geographic @ref BDPointSDK "point" with an altitude, as well as a known
*  accuracy in metres.
*/
@interface BDLocation : NSObject <BDPDeepCopy>

#ifdef BDPlatformApple
/**
 *  Initialisation methods for to creation a location.
 */
- (instancetype)initWithCLLocation: (CLLocation*)coreLocation;
#endif

- (instancetype)initWithLatitude: (BDLocationDegrees)latitude
                       longitude: (BDLocationDegrees)longitude
                        altitude: (BDLocationDistance)altitude
                        accuracy: (BDLocationAccuracy)accuracy
                altitudeAccuracy: (BDLocationAccuracy)altitudeAccuracy
                           speed: (BDLocationSpeed)speed;

/**
 * The accuracy, in metres, to which this location is known.  Sometimes referred to as the 'horizontal accuracy' or just 'error'.
 */
@property (nonatomic) BDLocationAccuracy  accuracy;

/**
 * The altitude accuracy, in metres, to which this location is known.  Sometimes referred to as the 'vertical accuracy' or just 'error'.
 */
@property (nonatomic) BDLocationAccuracy  altitudeAccuracy;

/**
 * The geographic location of this location, over the surface of the earth, independent of it's altitude.
 */
@property (nonatomic) BDPoint  *point;

/**
 * The altitude of this geographic location in metres.
 */
@property (nonatomic) BDLocationDistance  altitude;

/**
 * The speed of the device at the point of the location.
 */
@property (nonatomic) BDLocationSpeed  speed;

/**
 * Publicly available methods for evaluating locations.
 */
- (BOOL)isEqual: (id)other;
- (BOOL)isEqualToLocation: (BDLocation *)location;
- (NSUInteger)hash;

@end

