//
//  git_check_testAppDelegate.h
//  git_check_test
//
//  Created by Nitin Kapoor on 20/03/12.
//  Copyright 2012 Occam Technologies Pvt Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@class git_check_testViewController;

@interface git_check_testAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet git_check_testViewController *viewController;

@end
