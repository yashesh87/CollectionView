//
//  MasterViewController.h
//  CollectionView
//
//  Created by Yashesh Chauhan on 11/09/12.
//  Copyright (c) 2012 Yashesh Chauhan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MasterViewController : UICollectionViewController{
    
    NSMutableArray *arrRecords;
    int noOfSection;
}

@property (nonatomic, retain) NSMutableArray *arrRecords;

@end
