//
//  DetailViewController.h
//  CollectionView
//
//  Created by RainCreatives on 11/09/12.
//  Copyright (c) 2012 RainCreatives. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
