//
//  DeleteTableViewController.h
//  AKTableVeiwTest
//
//  Created by tkawano on 5/30/11.
//  Copyright 2011 Fusic. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface DeleteTableViewController : UITableViewController {
@private
	NSMutableArray *dataSource_;
}

@property (nonatomic, retain) NSMutableArray *dataSource;

@end
