//
//  DetailViewController.h
//  testGit
//
//  Created by Bo on 16/4/15.
//  Copyright © 2016年 Bo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

