//
//  AppDelegate.h
//  PaymentApp
//
//  Created by Mac on 29.07.16.
//  Copyright © 2016 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TMDataManager.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

-(void) addNewCoordinatorWithName: (NSString *)name andPhones: (NSString *)phone;

@end

