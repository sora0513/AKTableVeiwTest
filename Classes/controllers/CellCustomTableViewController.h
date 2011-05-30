//
//  CellCustomTableViewController.h
//  AKTableVeiwTest
//
//  Created by tkawano on 5/28/11.
//  Copyright 2011 Fusic. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface CellCustomTableViewController : UITableViewController {
@private
	NSArray *dataSource_;
	NSMutableArray *images_;
}

@property (nonatomic, retain) NSArray *dataSource;
@property (nonatomic, retain) NSMutableArray *images;

@end
