//
//  ViewController.h
//  Web Browser
//
//  Created by iD Student on 6/17/14.
//  Copyright (c) 2014 test. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
- (IBAction)goButton:(id)sender;

@property (weak, nonatomic) IBOutlet UITextField *urlTextfield;
@property (weak, nonatomic) IBOutlet UIWebView *myWebView;
@end
