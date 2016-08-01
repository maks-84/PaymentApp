//
//  TMCoordinator+CoreDataProperties.h
//  PaymentApp
//
//  Created by Mac on 29.07.16.
//  Copyright © 2016 Mac. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "TMCoordinator.h"

NS_ASSUME_NONNULL_BEGIN

@interface TMCoordinator (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSString *phoneNumber;
@property (nullable, nonatomic, retain) NSNumber *paymentAccepted;
@property (nullable, nonatomic, retain) NSString *createBill;
@property (nullable, nonatomic, retain) NSSet<NSManagedObject *> *coordinateNumbers;

@end

@interface TMCoordinator (CoreDataGeneratedAccessors)

- (void)addCoordinateNumbersObject:(NSManagedObject *)value;
- (void)removeCoordinateNumbersObject:(NSManagedObject *)value;
- (void)addCoordinateNumbers:(NSSet<NSManagedObject *> *)values;
- (void)removeCoordinateNumbers:(NSSet<NSManagedObject *> *)values;

@end

NS_ASSUME_NONNULL_END
