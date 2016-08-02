//
//  TMCoordinator+CoreDataProperties.h
//  PaymentApp
//
//  Created by Mac on 02.08.16.
//  Copyright © 2016 Mac. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "TMCoordinator.h"

NS_ASSUME_NONNULL_BEGIN

@interface TMCoordinator (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *createBill;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSNumber *paymentAccepted;
@property (nullable, nonatomic, retain) NSString *phoneNumber;
@property (nullable, nonatomic, retain) NSSet<TMNumber *> *coordinateNumbers;
@property (nullable, nonatomic, retain) NSManagedObject *paymentMonth;

@end

@interface TMCoordinator (CoreDataGeneratedAccessors)

- (void)addCoordinateNumbersObject:(TMNumber *)value;
- (void)removeCoordinateNumbersObject:(TMNumber *)value;
- (void)addCoordinateNumbers:(NSSet<TMNumber *> *)values;
- (void)removeCoordinateNumbers:(NSSet<TMNumber *> *)values;

@end

NS_ASSUME_NONNULL_END
