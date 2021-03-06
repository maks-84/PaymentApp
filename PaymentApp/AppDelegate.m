//
//  AppDelegate.m
//  PaymentApp
//
//  Created by Mac on 29.07.16.
//  Copyright © 2016 Mac. All rights reserved.
//

#import "AppDelegate.h"
#import "TMCoordinator.h"
#import "TMNumber.h"
#import "TMMonthViewController.h"
#import "TMMonth.h"

@interface AppDelegate ()

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (strong, nonatomic) NSArray *coordinators;

@end

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
   // [self printResult:[self getAllCoordinators]];
    
//    NSLog(@"%@",[NSDate date]);
//    NSDateComponents *comp =
    
    
    
    TMMonthViewController *vc = [[TMMonthViewController alloc] init];
    self.window.rootViewController = vc;
    

   // [TMMonth addNewMonth];
  
    TMMonth *m = [NSEntityDescription insertNewObjectForEntityForName:@"TMMonth" inManagedObjectContext:self.managedObjectContext];
    m.paymentMonth=@"monthhh";
    
    [self.managedObjectContext save:nil];
    
    
    
    
    
    
    
    return YES;
}


-(NSArray *) coordinators {
    return [self getAllCoordinators];
}

-(NSArray *) getAllCoordinators {
    NSFetchRequest *request = [[NSFetchRequest alloc] init];
    NSEntityDescription *description = [NSEntityDescription entityForName:@"TMCoordinator" inManagedObjectContext:self.managedObjectContext];
    [request setEntity:description];

    return [self.managedObjectContext executeFetchRequest:request error:nil];
}

-(void) printResult: (NSArray *) result {
    
    for (id obj in result) {
        if ([obj isKindOfClass:[TMCoordinator class]]) {
            TMCoordinator *coord = obj;
            NSLog(@"%@, %@, %li numbers", coord.name, coord.phoneNumber, [coord.coordinateNumbers count]);
            for (TMNumber *num in coord.coordinateNumbers) {
                NSLog(@"%@ - %@", num.number, num.sum);
            }
        }
    }
}

-(NSManagedObjectContext *)managedObjectContext {
    return [[TMDataManager sharedManager] managedObjectContext];
}

- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
    [self printResult:[self getAllCoordinators]];
}

- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
    
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
    // Saves changes in the application's managed object context before the application terminates.
    [self printResult:[self getAllCoordinators]];
    [[TMDataManager sharedManager] saveContext];
}
@end
