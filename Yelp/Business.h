//
//  Business.h
//  Yelp
//
//  Created by Bishwajit Aich. on 1/31/15.
//  Copyright (c) 2015 codepath. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Business : NSObject

@property (strong, nonatomic) NSString* imageUrl;
@property (strong, nonatomic) NSString* ratingImageUrl;
@property (strong, nonatomic) NSString* name;
@property (assign, nonatomic) CGFloat distance;
@property (assign, nonatomic) NSInteger numberReviews;
@property (strong, nonatomic) NSString* address;
@property (strong, nonatomic) NSString* categories;

+ (NSArray*) getBusinesses:(NSArray*) businesses;

@end
