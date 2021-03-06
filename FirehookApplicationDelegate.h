//
//  FirehookApplicationDelegate.h
//  firehook
//
//  Created by Tom Taylor on 30/04/2009.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "SkyhookLocationController.h"
#import "CoreLocationController.h"

#import "Location.h"
#import "PreferencesWindowController.h"
#import "FireEagleController.h"
#import "StatusMenuHeaderViewController.h"
#import "RHSystemIdleTimer.h"
#import "Gestalt.h"

@interface FirehookApplicationDelegate : NSObject <NSMenuDelegate, FireEagleControllerDelegate> {
  BaseLocationController *locationController;
	
  PreferencesWindowController *thePreferencesWindowController;
  FireEagleController *theFireEagleController;
  
  RHSystemIdleTimer *systemIdleTimer;
  BOOL isIdle;
	
NSTimer *fireEagleUpdateTimer;
  
  NSStatusItem *theStatusItem;
  NSMenuItem *nearbyItem;
  StatusMenuHeaderViewController *theStatusHeaderViewController;
}

@property (readonly) BaseLocationController *locationController;

- (void)activateStatusMenu;
- (void)locationDidChange:(NSNotification *)notification;

@end
