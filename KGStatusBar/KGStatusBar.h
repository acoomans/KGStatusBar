//
//  KGStatusBar.h
//
//  Created by Kevin Gibbon on 2/27/13.
//  Copyright 2013 Kevin Gibbon. All rights reserved.
//  @kevingibbon
//

#import <UIKit/UIKit.h>

@interface KGStatusBar : UIView

+ (KGStatusBar*)sharedView;
+ (void)showWithStatus:(NSString*)status;
+ (void)showErrorWithStatus:(NSString*)status;
+ (void)showSuccessWithStatus:(NSString*)status;
+ (void)dismiss;

@property (nonatomic, assign, readonly) BOOL hidden;

- (void)showWithStatus:(NSString *)status
              barColor:(UIColor*)barColor
            labelColor:(UIColor*)labelColor
             textColor:(UIColor*)textColor;

@end
