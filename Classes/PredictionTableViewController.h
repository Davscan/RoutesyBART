//
//  PredictionTableViewController.h
//

#import <UIKit/UIKit.h>
#import "Station.h"
#import "PredictionCell.h"

@interface PredictionTableViewController : UITableViewController {
	Station *station;
	NSArray *predictions; //Holds a list of predictions that the table will display
}

- (PredictionCell*)createNewCell;

@property (nonatomic,retain) Station *station;
@property (nonatomic,retain) NSArray *predictions;

@end
