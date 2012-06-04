//
//  XJPetalView.h
//  XJWaterfallView
//
//  Created by Xiantao Jiao on 4/24/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface XJPetalView : UIView
- (id) initWithReuseIdentifier:(NSString*)reuseIdentifier;

@property (nonatomic, copy, readonly) NSString* reuseIdentifier;
@property (nonatomic, strong, readonly) UIImageView* imageView;

- (void) prepareForReuse;
@end