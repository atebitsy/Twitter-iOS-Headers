//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface TFNDimBackgroundTransitionEffect : NSObject
{
    UIView *_backgroundView;
    UIView *_presentingView;
    double _transitionPercentComplete;
    long long _effectStyle;
}

- (void).cxx_destruct;
@property(nonatomic) long long effectStyle; // @synthesize effectStyle=_effectStyle;
@property(nonatomic) double transitionPercentComplete; // @synthesize transitionPercentComplete=_transitionPercentComplete;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) UIView *presentingView; // @synthesize presentingView=_presentingView;
- (void)dealloc;
- (id)init;
- (id)initWithPresentingView:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1;

@end

