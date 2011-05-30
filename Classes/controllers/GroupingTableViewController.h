//
//  GroupingTableViewController.h
//  AKTableVeiwTest
//
//  Created by tkawano on 5/28/11.
//  Copyright 2011 Fusic. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface GroupingTableViewController : UITableViewController {
@private
	NSArray *keys_;
	NSDictionary *dataSource_;
}

@property (nonatomic, retain) NSArray *keys;
@property (nonatomic, retain) NSDictionary *dataSource;

@end
