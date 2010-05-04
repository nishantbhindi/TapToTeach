//
//  WordBankSettingsViewController.h
//  TapToTeach
//
//  Created by Preston Rohner on 4/30/10.
//  Copyright 2010 Cool Tool Apps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TapToTeachAppDelegate.h"
#import "WordBankSettings.h"

@class WordBankViewController;

@interface WordBankSettingsViewController : UITableViewController {
	UISwitch *audioCongrats;
	UISwitch *userName;
	UISwitch *visualCongrats;
	UISlider *numberOfTouchpoints;
	UISlider *touchpointSize;
	
	TapToTeachAppDelegate *appDelegate;
	WordBankSettings *wordBankSettings;
	WordBankViewController *wordBankViewController;
	NSArray *wordBanks;
	UITextField *newWordBankTitle;
}

@property (nonatomic, retain) IBOutlet UISwitch *audioCongrats;
@property (nonatomic, retain) IBOutlet UISwitch *userName;
@property (nonatomic, retain) IBOutlet UISwitch *visualCongrats;
@property (nonatomic, retain) IBOutlet UISlider *numberOfTouchpoints;
@property (nonatomic, retain) IBOutlet UISlider *touchpointSize;
@property (nonatomic, retain) WordBankViewController *wordBankViewController;

- (IBAction)numberOfTouchpointsChanged:(id)sender;
- (IBAction)touchpointSizeChanged:(id)sender;
- (IBAction)numberOfTouchpointsFinishedChanging:(id)sender;

- (IBAction)audioCongratsChanged:(id)sender;
- (IBAction)useNameCongratsChanged:(id)sender;
- (IBAction)visualCongratsChanged:(id)sender;

@end
