//
//  Prediction.h
//

#import <Foundation/Foundation.h>

@interface Prediction : NSObject {
	NSString *destination;          //and another github change here
	NSString *estimate;
}

@property (copy) NSString *destination;
@property (copy) NSString *estimate;

@end