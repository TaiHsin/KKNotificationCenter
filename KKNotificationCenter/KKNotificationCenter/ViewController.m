//
//  ViewController.m
//  KKNotificationCenter
//
//  Created by TaiHsinLee on 2019/2/10.
//  Copyright © 2019 TaiHsinLee. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(localeDidChange:)
                                                 name:NSCurrentLocaleDidChangeNotification
                                               object:nil];
}


@end
