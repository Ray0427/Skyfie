//
//  PageItemController.m
//  BebopPilotingNewAPI
//
//  Created by Ivan on 2016/1/6.
//  Copyright (c) 2016年 Parrot. All rights reserved.
//

#import "PageItemController.h"

@interface PageItemController ()

@end

@implementation PageItemController

@synthesize itemIndex;
@synthesize imageName;
@synthesize contentImageView;

#pragma mark -
#pragma mark View Lifecycle

- (void)viewDidLoad {
    [super viewDidLoad];
    contentImageView.image = [UIImage imageNamed: imageName];
}

#pragma mark -
#pragma mark Content

- (void) setImageName: (NSString *) name
{
    imageName = name;
    contentImageView.image = [UIImage imageNamed: imageName];
}

-(BOOL)prefersStatusBarHidden {
    
    return YES;
    
}

@end
