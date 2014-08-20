//
//  BLCWebBrowserViewController.h
//  BlocBrowser
//
//  Created by Renaldo Webb on 8/7/14.
//  Copyright (c) 2014 Renaldo Webb. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BLCWebBrowserViewController : UIViewController

/**
 Replaces the web view with a fresh one, erasing all history. Also updates the URL field and toolbar buttons appropriately.
 */
- (void) resetWebView;


@end
