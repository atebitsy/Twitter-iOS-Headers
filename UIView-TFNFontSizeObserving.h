//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TFNUI/TFNDynamicColorViewSource-Protocol.h>

@class NSArray, NSString, UIViewController;

@interface UIView (TFNFontSizeObserving) <TFNDynamicColorViewSource>
+ (void)_tfn_registerForIntrinsicContentSizeObserving:(_Bool)arg1;
+ (void)tfn_unregisterForIntrinsicContentSizeObserving;
+ (void)tfn_registerForIntrinsicContentSizeObserving;
+ (void)tfn_dispatchInversionMonitorForApplication:(id)arg1 withExceptionBlock:(CDUnknownBlockType)arg2;
+ (_Bool)tfn_defaultShouldFlipForRightToLeftTransform;
+ (_Bool)tfn_isRightToLeftTransformSystemActive;
+ (void)_tfn_executeSwizzles;
+ (void)tfn_deactivateRightToLeftTransformSystem;
+ (void)tfn_activateRightToLeftTransformSystem;
+ (struct UIEdgeInsets)tfn_standardSystemSafeAreaInsets:(id)arg1 forInterfaceOrientation:(long long)arg2 statusBarHidden:(_Bool)arg3;
+ (struct UIEdgeInsets)tfn_systemSafeAreaInsets:(id)arg1;
+ (_Bool)tfn_isStatusBarHidden:(id)arg1;
+ (void)tfn_addKeyframeWithRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 curve:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4;
+ (void)tfn_animateWithDuration:(double)arg1 curve:(unsigned long long)arg2 delay:(double)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)tfn_animateWithDuration:(double)arg1 curve:(unsigned long long)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)tfn_animateWithDuration:(double)arg1 curve:(unsigned long long)arg2 animations:(CDUnknownBlockType)arg3;
+ (void)tfn_addKeyframeWithRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 animations:(CDUnknownBlockType)arg3;
+ (void)tfn_animateWithDuration:(double)arg1 delay:(double)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)tfn_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)tfn_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2;
+ (void)tfn_performWithoutAnimation:(CDUnknownBlockType)arg1;
+ (_Bool)tfn_hasActiveAnimationContext;
+ (id)tfn_instanceFromNIB;
- (void)tfn_fontSizeChanged;
- (id)tfn_autolayoutContentViewVariantConstraints;
- (void)setTfn_autolayoutContentViewVariantConstraints:(id)arg1;
@property(retain, nonatomic) UIView *tfn_autolayoutContentView;
@property(retain, nonatomic) NSArray *tfn_autolayoutContentViews;
- (void)tfn_removePointerInteraction;
- (void)tfn_setupPointerInteractionsWithStyleProvider:(CDUnknownBlockType)arg1;
- (void)tfn_setupHoverPointerInteractionsWithTintMode:(long long)arg1;
- (void)tfn_setupRoundRectCursorPointerInteractionsWithMargin:(struct CGSize)arg1;
- (void)tfn_setupCirclePointerInteractionsWithMargin:(double)arg1;
- (void)tfn_previewingStateDidChange;
@property(readonly, nonatomic) long long tfn_previewingState;
- (void)_tfn_setIntrinsicContentSizeInvalidationRecursionGuardActive:(_Bool)arg1;
- (_Bool)_tfn_isIntrinsicContentSizeInvalidationRecursionGuardActive;
- (void)_tfn_recursionGuardedInvalidateIntrinsicContentSize;
- (_Bool)_tfn_invalidateIntrinsicContentSizeRecursively;
- (void)_tfn_observableInvalidateIntrinsicContentSize;
- (_Bool)tfn_terminatesInvalidateIntrinsicContentSizeRecursion;
- (void)tfn_invalidateIntrinsicContentSizeRecursively;
- (void)tfn_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
@property(readonly, nonatomic) UIView *dynamicColorView;
- (id)_tfn_findBadInvertViewWithSuperviewFlip:(_Bool)arg1;
- (void)_tfn_transformIfRequired;
- (void)_tfn_transformIfRequiredWithSuperviewFlip:(_Bool)arg1;
- (_Bool)_tfn_willDisplayFlipped:(_Bool)arg1;
- (void)tfn_useAutoLayoutWithSemanticContentAttributeForRightToLeftTransform;
- (void)tfn_private_appendRightToLeftTransformInfo:(id)arg1;
- (id)tfn_rightToLeftTransformDebugString;
- (_Bool)_tfn_isFlippedForRightToLeftTransformWithSuperviewFlip:(_Bool)arg1;
@property(readonly, nonatomic) _Bool tfn_isFlippedForRightToLeftTransform;
@property(nonatomic) _Bool tfn_shouldFlipForRightToLeftTransform;
- (id)tfn_private_shouldFlipForSemanticContentAttribute;
@property(nonatomic) _Bool tfn_applyRightToLeftTransform;
- (void)tfn_private_setSemanticContentAttribute:(long long)arg1;
- (void)tfn_private_setTranslatesAutoresizingMaskIntoConstraints:(_Bool)arg1;
- (void)tfn_private_rightToLeftTransform_didMoveToSuperview;
- (id)_tfn_viewControllerExecutionContextFirstResponder;
- (void)tfn_pinToLayoutGuide:(id)arg1 withEdgeInsets:(struct UIEdgeInsets)arg2;
- (void)tfn_pinToLayoutGuide:(id)arg1;
- (void)tfn_updateAccessibilityIgnoresInvertColorsOnViewTree;
@property(readonly, nonatomic) NSArray *tfn_ancestry;
- (id)tfn_centerEmbedInStackViewWithAxis:(long long)arg1;
- (id)tfn_centerEmbedInStackViewWithAxis:(long long)arg1 distribution:(long long)arg2;
- (void)tfn_setCompressionResistanceAndHuggingRequired;
- (void)tfn_addFullSizeSubview:(id)arg1;
- (void)tfn_addAutoLayoutSubviews:(id)arg1 withConstraints:(id)arg2;
- (void)tfn_addAutoLayoutSubviews:(id)arg1;
- (void)tfn_addAutoLayoutSubview:(id)arg1;
- (struct CGRect)_tfn_systemSafeAreaWithStatusBarHidden:(_Bool)arg1 getWindow:(out id *)arg2;
- (struct CGRect)tfn_expandRect:(struct CGRect)arg1 toFillAdjacentSystemSafeArea:(unsigned long long)arg2;
- (struct UIEdgeInsets)tfn_systemSafeAreaInsetsWithStatusBarHidden:(_Bool)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets tfn_systemSafeAreaInsets;
@property(readonly, nonatomic) _Bool tfn_navigationControllerBackGestureEnabled;
- (void)tfn_flipSelfAndCorrectChildrenIfRTL;
- (void)tfn_flipXAxisIfRTL;
@property(nonatomic, getter=tfn_isHidden) _Bool tfn_hidden;
- (_Bool)tfn_isInvisible;
- (id)_tfn_blurEffectView;
- (void)_tfn_discardBlur;
- (id)_tfn_createBlurWithStyle:(long long)arg1;
@property(nonatomic) long long tfn_blurStyle;
@property(nonatomic) double tfn_blur;
- (id)tfn_snapshotAfterAnimations;
- (id)tfn_snapshot;
- (id)tfn_snapshotAfterScreenUpdates:(_Bool)arg1;
- (_Bool)tfn_isInViewHierarchyAndViewFrameContainsPoint:(struct CGPoint)arg1;
- (_Bool)tfn_isInPopover;
- (_Bool)tfn_isDescendantOfViewOfType:(Class)arg1;
- (id)tfn_firstViewOfClass:(Class)arg1;
- (void)tfn_applyOnViewTree:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) UIViewController *tfn_viewController;
- (void)tfn_animateBounce;
- (void)tfn_updateBoundsToSizeThatFits:(struct CGSize)arg1;
@property(nonatomic) struct CGRect tfn_frameFromCenterAndBounds;
- (void)setLayoutMetrics:(id)arg1;
- (void)_tfn_dynamicColor_didMoveToSuperview;
- (void)_tfn_dynamicColor_willMoveToSuperview:(id)arg1;
- (id)_tfn_barButtonItemHostBar;
- (_Bool)tfn_barButtonItemPointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

