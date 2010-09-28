//
//  bmwifiNotificatorForiOSAppDelegate.h
//  bmwifiNotificatorForiOS
//
//  Created by Shota Fukumori on 9/28/2010.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class bmwifiNotificatorForiOSViewController;

@interface bmwifiNotificatorForiOSAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    bmwifiNotificatorForiOSViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet bmwifiNotificatorForiOSViewController *viewController;

@end

