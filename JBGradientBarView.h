//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer;
@protocol JBGradientBarViewDataSource;

@interface JBGradientBarView : UIView
{
    id <JBGradientBarViewDataSource> _dataSource;
    CAGradientLayer *_gradientLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) __weak id <JBGradientBarViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)setFrame:(struct CGRect)arg1;
- (void)construct;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

