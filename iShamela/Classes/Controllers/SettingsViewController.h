//
//  SettingsViewController.h
//  iShamela
//
//  Created by Suhendra Ahmad on 4/4/11.
//  Copyright 2011 Aza Studios. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface SettingsViewController : UIViewController < UITableViewDelegate, UITableViewDataSource>{
	//UISwitch *enable3G;
	UITableView *aTableView;
	NSMutableArray *settings;
	
}

@property (nonatomic, retain) IBOutlet UITableView *aTableView;
//@property (nonatomic, retain) IBOutlet UISwitch *enable3G;

//(IBAction) saveSetting:(id)sender;
//(IBAction) switch3G:(id)sender; 

@end
