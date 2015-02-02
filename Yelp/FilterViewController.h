//
//  FilterViewController.h
//  Yelp
//
//  Created by Bishwajit Aich. on 2/1/15.
//  Copyright (c) 2015 codepath. All rights reserved.
//

#import <UIKit/UIKit.h>
@class FilterViewController;
@protocol FilterViewControllerDelegate<NSObject>

- (void) filterViewController:(FilterViewController*) filterViewController filtersDidChange:(NSDictionary*) filters;

@end

@interface FilterViewController : UIViewController
@property (nonatomic, weak) id<FilterViewControllerDelegate> delegate;
@end
