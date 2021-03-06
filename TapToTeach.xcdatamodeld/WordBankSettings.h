//
//  WordBankSettings.h
//  TapToTeach
//
//  Created by Preston Rohner on 5/13/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <CoreData/CoreData.h>

@class WordBank;

@interface WordBankSettings :  NSManagedObject  
{
}

@property (nonatomic, retain) NSNumber * numberOfTouchpoints;
@property (nonatomic, retain) NSNumber * touchpointSize;
@property (nonatomic, retain) NSNumber * giveVisualPrompt;
@property (nonatomic, retain) NSNumber * giveAudioPrompt;
@property (nonatomic, retain) NSString * audioCongratulationsText;
@property (nonatomic, retain) WordBank * lastWordBank;

@end



