//
//  TMAddCoordinatorViewController.m
//  PaymentApp
//
//  Created by Mac on 01.08.16.
//  Copyright © 2016 Mac. All rights reserved.
//

#import "TMAddCoordinatorViewController.h"
#import "TMCoordinator.h"

@interface TMAddCoordinatorViewController ()

@end

@implementation TMAddCoordinatorViewController

- (IBAction)addCoordinatorAction:(UIButton *)sender {
    
    NSString *coordinatorName = self.addCoordinatorNameTextField.text;
    NSString *coordinatorPhone = self.addCoordinatorPhoneTextEdit.text;
 
    [TMCoordinator createNewObjectForName:coordinatorName andPhone:coordinatorPhone];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
