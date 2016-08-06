//
//  TMMonthViewController.h
//  PaymentApp
//
//  Created by Mac on 06.08.16.
//  Copyright © 2016 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TMMonthViewController : UITableViewController

@property (strong, nonatomic) UITableView *mainTable;
@property (strong, nonatomic) NSCalendar *calendar;
@property (strong, nonatomic) NSArray *monthInPersistentStore;

@end
