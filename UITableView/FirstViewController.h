//
//  FirstViewController.h
//  UITableView
//
//  Created by Rahul Garg on 07/07/14.
//  Copyright (c) 2014 Rahul. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FirstViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>
{
    IBOutlet UITableView *table;
    NSMutableArray *array;
}

@end
