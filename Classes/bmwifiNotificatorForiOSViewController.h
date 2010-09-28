//
//  bmwifiNotificatorForiOSViewController.h
//  bmwifiNotificatorForiOS
//
//  Created by Shota Fukumori on 9/28/2010.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RegexKitLite.h"

@interface bmwifiNotificatorForiOSViewController : UIViewController {
	IBOutlet UILabel *labelBattery;
	IBOutlet UILabel *labelLevel;
	IBOutlet UILabel *labelCarrier;
	IBOutlet UILabel *labelNetwork;
	IBOutlet UILabel *labelStatus;
	NSUserDefaults *pref;
}

-(BOOL) isBwAvailable;
-(BOOL) login;
-(NSMutableDictionary*) getInformation;
-(IBAction)reloadInformation: (id) sender;


@end

