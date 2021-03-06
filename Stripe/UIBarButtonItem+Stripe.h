//
//  UIBarButtonItem+Stripe.h
//  Stripe
//
//  Created by Jack Flintermann on 5/18/16.
//  Copyright © 2016 Stripe, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class STPTheme;

@interface UIBarButtonItem (Stripe)

- (void)stp_setTheme:(STPTheme *)theme;

@end

NS_ASSUME_NONNULL_END

void linkUIBarButtonItemCategory(void);
