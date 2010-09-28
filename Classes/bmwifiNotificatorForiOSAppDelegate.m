//
//  bmwifiNotificatorForiOSAppDelegate.m
//  bmwifiNotificatorForiOS
//
//  Created by Shota Fukumori on 9/28/2010.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import "bmwifiNotificatorForiOSAppDelegate.h"
#import "bmwifiNotificatorForiOSViewController.h"

@implementation bmwifiNotificatorForiOSAppDelegate

@synthesize window;
@synthesize viewController;


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {    
    
    // Override point for customization after app launch    
    [window addSubview:viewController.view];
    [window makeKeyAndVisible];
	
	return YES;
}


- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}


@end
