//
//  TMCoordinator.m
//  PaymentApp
//
//  Created by Mac on 29.07.16.
//  Copyright © 2016 Mac. All rights reserved.
//

#import "TMCoordinator.h"
#import "TMDataManager.h"

@implementation TMCoordinator


+ (void)createNewObjectForName:(NSString *)name andPhone: (NSString *) phone {
    NSManagedObjectContext *context = [[TMDataManager sharedManager] managedObjectContext];
    TMCoordinator *coordinator = [NSEntityDescription insertNewObjectForEntityForName:@"TMCoordinator" inManagedObjectContext:context];
    coordinator.name = name;
    coordinator.phoneNumber = phone;
    coordinator.paymentAccepted = [NSNumber numberWithBool:NO];
    [[[TMDataManager sharedManager] managedObjectContext] save:nil];

}
 

@end
