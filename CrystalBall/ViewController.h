//
//  ViewController.h
//  CrystalBall
//
//  Created by José Andrés Alvarez Loáiciga on 3/17/13.
//  Copyright (c) 2013 com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) NSArray *predictionArray;
@property (strong, nonatomic) UIImageView *imageView;
- (void)makePrediction;
@end
