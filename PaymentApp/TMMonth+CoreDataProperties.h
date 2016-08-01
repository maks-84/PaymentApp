//
//  TMMonth+CoreDataProperties.h
//  PaymentApp
//
//  Created by Mac on 29.07.16.
//  Copyright © 2016 Mac. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "TMMonth.h"

NS_ASSUME_NONNULL_BEGIN

@interface TMMonth (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *monthNumber;
@property (nullable, nonatomic, retain) NSString *monthName;
@property (nullable, nonatomic, retain) NSSet<TMCoordinator *> *coordinators;

@end

@interface TMMonth (CoreDataGeneratedAccessors)

- (void)addCoordinatorsObject:(TMCoordinator *)value;
- (void)removeCoordinatorsObject:(TMCoordinator *)value;
- (void)addCoordinators:(NSSet<TMCoordinator *> *)values;
- (void)removeCoordinators:(NSSet<TMCoordinator *> *)values;

@end

NS_ASSUME_NONNULL_END
