//
//  WebBrowserAppDelegate.h
//  WebBrowser
//
//  Created by Nicholas Young on 1/16/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface WebBrowserAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
