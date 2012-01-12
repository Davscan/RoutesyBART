//
//  Station.h
//

#import <Foundation/Foundation.h>

@interface Station : NSObject {
	NSString *stationId;                   //A full set of instance variables to store its data
	NSString *name;
	float latitude;
	float longitude;
	float distance;
}

@property (copy) NSString *stationId;      //A series of accessor methods for those ivars
@property (copy) NSString *name;
@property float latitude;
@property float longitude;
@property float distance;

@end
