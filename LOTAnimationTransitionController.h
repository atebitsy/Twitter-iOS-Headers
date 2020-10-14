//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Lottie/UIViewControllerAnimatedTransitioning-Protocol.h>

@class LOTAnimationView, NSBundle, NSString;

@interface LOTAnimationTransitionController : NSObject <UIViewControllerAnimatedTransitioning>
{
    LOTAnimationView *transitionAnimationView_;
    NSString *fromLayerName_;
    NSString *toLayerName_;
    NSBundle *inBundle_;
    _Bool _applyTransform;
}

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithAnimationNamed:(id)arg1 fromLayerNamed:(id)arg2 toLayerNamed:(id)arg3 applyAnimationTransform:(_Bool)arg4 inBundle:(id)arg5;
- (id)initWithAnimationNamed:(id)arg1 fromLayerNamed:(id)arg2 toLayerNamed:(id)arg3 applyAnimationTransform:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

