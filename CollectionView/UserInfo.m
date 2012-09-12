//
//  UserInfo.m
//  CollectionView
//
//  Created by Yashesh Chauhan on 11/09/12.
//  Copyright (c) 2012 Yashesh Chauhan. All rights reserved.
//

#import "UserInfo.h"

@implementation UserInfo
@synthesize isMale;
@synthesize isNotification;

- (id) initWithMale:(BOOL)male isNotification:(BOOL )notification{
    
    if (self = [super init]) {
        self.isMale = male;
        self.isNotification = notification;
    }
    return self;
    
}
@end
