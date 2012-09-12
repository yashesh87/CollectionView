//
//  UserInfo.h
//  CollectionView
//
//  Created by Yashesh Chauhan on 11/09/12.
//  Copyright (c) 2012 Yashesh Chauhan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UserInfo : NSObject{
    
    
}

@property (nonatomic, readwrite) BOOL isMale;
@property (nonatomic, readwrite) BOOL isNotification;

- (id) initWithMale:(BOOL)male isNotification:(BOOL )notification;
@end
