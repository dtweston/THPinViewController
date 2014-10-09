//
//  THPinNumButton.h
//  THPinViewController
//
//  Created by Thomas Heß on 14.4.14.
//  Copyright (c) 2014 Thomas Heß. All rights reserved.
//

@import UIKit;
#import "THPinViewControllerMacros.h"

@interface THPinNumButton : UIButton

@property (nonatomic, readonly, assign) NSUInteger number;
@property (nonatomic, readonly, copy) NSString *letters;
@property (nonatomic, assign) CGFloat borderWidth UI_APPEARANCE_SELECTOR;
@property (nonatomic, strong) UIColor *textColor UI_APPEARANCE_SELECTOR;
@property (nonatomic, strong) UIFont *numberFont UI_APPEARANCE_SELECTOR;
@property (nonatomic, strong) UIFont *textFont UI_APPEARANCE_SELECTOR;

- (instancetype)initWithNumber:(NSUInteger)number letters:(NSString *)letters NS_DESIGNATED_INITIALIZER;

+ (CGFloat)diameter;

@end
