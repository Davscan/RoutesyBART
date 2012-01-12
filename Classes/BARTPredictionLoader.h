//
//  BARTPredictionLoader.h
//

#import <Foundation/Foundation.h>
#import <SystemConfiguration/SystemConfiguration.h>


//Aha - This loads the xml and parses it!!!!! It has two methods:
//1. LoadPredictionXML    
//2. PredictionsForStation which gives us back an array
//3. Hidden Delegate Methods of NSURLConnection

//This is a custom protocol BARTPredictionLoaderDelegate. We can assign a callback delegate method xmlDidFinishLoading, so that we can easily be notified when the xml data has finished lading.
@protocol BARTPredictionLoaderDelegate   
- (void)xmlDidFinishLoading;  
@end


@interface BARTPredictionLoader : NSObject {  //load feed data into this class
    
	id _delegate; //delegate is of type id, as it will be unknown at compile time the type of class that will adopt this protocol. reference to the delegate object. (i.e.: In our example, the object that wants to be informed when a certain activity is complete/event has occurred.)
    
    
	NSMutableData *predictionXMLData;
	NSMutableData *lastLoadedPredictionXMLData;
}

+ (BARTPredictionLoader*)sharedBARTPredictionLoader; //A singleton instance that the application can access from anywhere

//
- (NSArray*)predictionsForStation:(NSString*)stationId;
- (void)loadPredictionXML:(id<BARTPredictionLoaderDelegate>)delegate; 
//The rootViewController class conforms to the <BARTPredictionLoaderDelegate> protocol, passed in as an arguement


@property (nonatomic,retain) NSMutableData *predictionXMLData;
@property (nonatomic,retain) NSMutableData *lastLoadedPredictionXMLData;

@end
