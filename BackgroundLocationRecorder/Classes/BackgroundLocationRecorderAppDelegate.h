//
//  BackgroundLocationRecorderAppDelegate.h
//  BackgroundLocationRecorder
//
//  Created by UEHARA AKIHIRO on 10/07/12.
//  Copyright Reinforce lab. 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

#import "LocationRecorder.h"

@class MainViewController;

@interface BackgroundLocationRecorderAppDelegate : NSObject <UIApplicationDelegate> {
	
    UIWindow *window;
    MainViewController *mainViewController;
    LocationRecorder *locationRecorder;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet MainViewController *mainViewController;

@property (nonatomic, readonly) LocationRecorder *locationRecorder;


- (NSString *)applicationDocumentsDirectory;

@end

