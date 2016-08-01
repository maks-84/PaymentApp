//
//  TMCoordinator.h
//  PaymentApp
//
//  Created by Mac on 29.07.16.
//  Copyright © 2016 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

NS_ASSUME_NONNULL_BEGIN

@interface TMCoordinator : NSManagedObject

+ (void)createNewObjectForName:(NSString *)name andPhone: (NSString *) phone;

@end

NS_ASSUME_NONNULL_END

#import "TMCoordinator+CoreDataProperties.h"
