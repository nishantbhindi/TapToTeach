//
//  ActivitiesViewController.h
//  TapToTeach
//
//  Created by Preston Rohner on 5/17/10.
//  Copyright 2010 Cool Tool Apps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TapToTeachAppDelegate.h"

@class WordBankViewController;
@class ActivityViewController;
@class CleanUpViewController;

@interface ActivitiesViewController : UIViewController {

	TapToTeachAppDelegate *appDelegate;
	UILabel *welcomeLabel;
	UIButton *infoButton;
	UIPopoverController *popover;
	WordBankViewController *wordBankViewController;
	CleanUpViewController *cleanUpViewController;
}

@property (nonatomic, retain) IBOutlet UILabel *welcomeLabel;
@property (nonatomic, retain) IBOutlet UIButton *infoButton;

- (IBAction)buttonPressedForWordBank:(id)sender;
- (IBAction)buttonPressedForCleanUp:(id)sender;
- (void)loadViewController:(ActivityViewController **)ctrl withNibAndClassName:(NSString *)nibAndClassName;
- (IBAction)infoButtonPressed:(id)sender;

@end
