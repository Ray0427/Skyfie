//
//  PageItemController.h
//  BebopPilotingNewAPI
//
//  Created by Ivan on 2016/1/6.
//  Copyright (c) 2016年 Parrot. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PageItemController : UIViewController

@property (nonatomic) NSUInteger itemIndex;
@property (nonatomic, strong) NSString *imageName;

@property (weak, nonatomic) IBOutlet UIImageView *contentImageView;

@end
