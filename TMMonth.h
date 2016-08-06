//
//  TMMonth.h
//  PaymentApp
//
//  Created by Mac on 06.08.16.
//  Copyright © 2016 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class TMCoordinator;

NS_ASSUME_NONNULL_BEGIN

@interface TMMonth : NSManagedObject

+ (void)addNewMonth;

@end

NS_ASSUME_NONNULL_END

#import "TMMonth+CoreDataProperties.h"
