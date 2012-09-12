//
//  CollectionViewCell.h
//  CollectionView
//
//  Created by Yashesh Chauhan on 11/09/12.
//  Copyright (c) 2012 Yashesh Chauhan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CollectionViewCell : UICollectionViewCell{
 
    IBOutlet UIImageView *imgProfile;
    IBOutlet UIImageView *imgNotification;
    IBOutlet UILabel     *lblTitle;
    
}

@property (nonatomic, retain) IBOutlet UIImageView *imgProfile;
@property (nonatomic, retain) IBOutlet UIImageView *imgNotification;
@property (nonatomic, retain) IBOutlet UILabel     *lblTitle;

@end
