//
//  TMCoordinator.h
//  PaymentApp
//
//  Created by Mac on 02.08.16.
//  Copyright © 2016 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class TMNumber;

NS_ASSUME_NONNULL_BEGIN

@interface TMCoordinator : NSManagedObject

+ (void)createNewObjectForName:(NSString *)name andPhone: (NSString *) phone;

@end

NS_ASSUME_NONNULL_END

#import "TMCoordinator+CoreDataProperties.h"
