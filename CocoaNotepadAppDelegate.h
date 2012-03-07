//
//  CocoaNotepadAppDelegate.h
//  CocoaNotepad
//
//  Created by Shahid Choudhry on 10/04/2011.
//  Copyright 2011 __Shahid Choudhry__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface CocoaNotepadAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
