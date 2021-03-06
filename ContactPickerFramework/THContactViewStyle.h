//
//  THContactViewStyle
//  ContactPicker
//
//  Created by Dmitry Vorobjov on 12/6/12.
//  Copyright (c) 2012 Tristan Himmelman. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface THContactViewStyle : NSObject

@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, strong) UIColor *gradientTop;
@property (nonatomic, strong) UIColor *gradientBottom;
@property (nonatomic, strong) UIColor *borderColor;
@property (nonatomic, assign) CGFloat borderWidth;
@property (nonatomic, assign) CGFloat cornerRadiusFactor;

- (id)initWithTextColor:(UIColor *)textColor
            gradientTop:(UIColor *)gradientTop
         gradientBottom:(UIColor *)gradientBottom
            borderColor:(UIColor *)borderColor
            borderWidth:(CGFloat)borderWidth
     cornerRadiusFactor:(CGFloat)cornerRadiusFactor;

- (id)initWithTextColor:(UIColor *)textColor
		backgroundColor:(UIColor *)backgroundColor
	 cornerRadiusFactor:(CGFloat)cornerRadiusFactor;

- (BOOL)hasNonWhiteBackground;

@end
