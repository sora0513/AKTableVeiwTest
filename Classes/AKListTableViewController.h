//
//  AKListTableViewController.h
//  AKTableVeiwTest
//
//  Created by tkawano on 5/28/11.
//  Copyright 2011 Fusic. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface AKListTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
@private
	UITableView *tableView_;
	NSArray *items_;
}

@property (nonatomic, retain) UITableView *tableView;
@property(nonatomic, retain) NSArray *items;

@end
