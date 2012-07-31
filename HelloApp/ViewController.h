//
//  ViewController.h
//  HelloApp
//
//  Created by Timothy Wright on 7/31/12.
//  Copyright (c) 2012 Timothy Wright. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *helloTextField;
@property (weak, nonatomic) IBOutlet UILabel *helloLabel;
- (IBAction)helloButtonPressed:(UIButton *)sender;

@end
