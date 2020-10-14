//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

#import <TFNUI/UIGestureRecognizerDelegate-Protocol.h>
#import <TFNUI/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, TFNNavigationController, UIColor, UIPanGestureRecognizer, UIScreenEdgePanGestureRecognizer;

@interface TFNNavigationControllerTransitionAnimator : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning, UIGestureRecognizerDelegate>
{
    TFNNavigationController *_navigationController;
    _Bool _completingInteractivePop;
    _Bool _interactive;
    _Bool _suppressDimming;
    long long _operation;
    UIScreenEdgePanGestureRecognizer *_interactivePopGestureRecognizer;
    UIPanGestureRecognizer *_interactivePopPanGestureRecognizer;
    double _animationDuration;
    UIColor *_backgroundViewOverlayColor;
    double _maximumAlpha;
}

- (void).cxx_destruct;
@property(nonatomic) double maximumAlpha; // @synthesize maximumAlpha=_maximumAlpha;
@property(retain, nonatomic) UIColor *backgroundViewOverlayColor; // @synthesize backgroundViewOverlayColor=_backgroundViewOverlayColor;
@property(nonatomic) _Bool suppressDimming; // @synthesize suppressDimming=_suppressDimming;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive; // @synthesize interactive=_interactive;
@property(readonly, nonatomic) UIPanGestureRecognizer *interactivePopPanGestureRecognizer; // @synthesize interactivePopPanGestureRecognizer=_interactivePopPanGestureRecognizer;
@property(readonly, nonatomic) UIScreenEdgePanGestureRecognizer *interactivePopGestureRecognizer; // @synthesize interactivePopGestureRecognizer=_interactivePopGestureRecognizer;
@property(nonatomic) long long operation; // @synthesize operation=_operation;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_pan:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)_tfn_crashWithException:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 containerView:(id)arg4 isInteractive:(_Bool)arg5;
- (void)_animatePopTransition:(id)arg1;
- (void)_animatePushTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)setBackgroundViewOverlayColor:(id)arg1 maximumAlpha:(double)arg2;
- (double)transitionDuration:(id)arg1;
- (void)dealloc;
- (id)initWithNavigationController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

