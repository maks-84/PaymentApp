//
//  TMDataManager.h
//  PaymentApp
//
//  Created by Mac on 29.07.16.
//  Copyright © 2016 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
//#import "TMMonth.h"

@interface TMDataManager : NSObject

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;


+(TMDataManager *)sharedManager;
-(NSArray *) getMonthInPersistentStore;
-(NSUInteger) getMonthCountInPersistentStore;
- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;



@end
