//
//  TMMonth.m
//  PaymentApp
//
//  Created by Mac on 06.08.16.
//  Copyright © 2016 Mac. All rights reserved.
//

#import "TMMonth.h"
#import "TMCoordinator.h"
#import "TMDataManager.h"

@implementation TMMonth

+ (void)addNewMonth {
    
//        NSCalendar *calendar = [NSCalendar currentCalendar];
//        NSUInteger monthInset = [[TMDataManager sharedManager] getMonthCountInPersistentStore];
//    
//        NSDate *newMonthDate = [calendar dateByAddingUnit:NSCalendarUnitMonth value:monthInset - 1 toDate:[NSDate date] options:nil];
//        NSDateComponents *dateComponents = [calendar components:NSCalendarUnitYear | NSCalendarUnitMonth fromDate:newMonthDate];
//    
//        TMMonth *newMonth = [NSEntityDescription insertNewObjectForEntityForName:@"TMMonth" inManagedObjectContext:[[TMDataManager sharedManager] managedObjectContext]];
//            newMonth.paymentMonth = [NSString stringWithFormat:@"%li", dateComponents.month];
//    
//        [[[TMDataManager sharedManager] managedObjectContext] save:nil];
}

@end
