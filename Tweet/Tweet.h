//
//  Tweet.h
//  OBSTwitter
//
//  Created by Aleques on 12/11/16.
//  Copyright (c) 2016 Aleques. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Tweet : NSManagedObject

@property (nonatomic, retain) NSString * username;
@property (nonatomic, retain) NSString * text;
@property (nonatomic, retain) NSString * tweetId;

@end
