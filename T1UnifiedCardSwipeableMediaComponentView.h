//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNLayoutableView.h>

#import <T1Twitter/T1AutoplayableContainer-Protocol.h>
#import <T1Twitter/T1UnifiedCardCarouselViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1UnifiedCardComponentView-Protocol.h>
#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>

@class NSString, T1UnifiedCardCarouselViewController, TFNTwitterAccount, TFNTwitterUnifiedCard, TFNTwitterUnifiedCardSwipeableMediaComponentModel, TFSTwitterScribeContext, TIPImagePipeline, UIView;
@protocol T1UnifiedCardComponentViewEventDelegate, TFNTwitterUnifiedCardComponentModel;

@interface T1UnifiedCardSwipeableMediaComponentView : TFNLayoutableView <TFNLayoutMetricsEnvironment, T1UnifiedCardComponentView, T1AutoplayableContainer, T1UnifiedCardCarouselViewControllerDelegate>
{
    TFNTwitterUnifiedCard *_unifiedCard;
    id <TFNTwitterUnifiedCardComponentModel> _component;
    TIPImagePipeline *_imagePipeline;
    id <T1UnifiedCardComponentViewEventDelegate> _eventDelegate;
    T1UnifiedCardCarouselViewController *_carouselViewController;
    TFNTwitterAccount *_account;
    double _leadingInset;
    TFSTwitterScribeContext *_scribeContext;
}

+ (id)sharedLayoutDelegate;
- (void).cxx_destruct;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(nonatomic) double leadingInset; // @synthesize leadingInset=_leadingInset;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) T1UnifiedCardCarouselViewController *carouselViewController; // @synthesize carouselViewController=_carouselViewController;
@property(nonatomic) __weak id <T1UnifiedCardComponentViewEventDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
@property(retain, nonatomic) id <TFNTwitterUnifiedCardComponentModel> component; // @synthesize component=_component;
@property(retain, nonatomic) TFNTwitterUnifiedCard *unifiedCard; // @synthesize unifiedCard=_unifiedCard;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (void)carouselViewController:(id)arg1 didDisplayItemAtIndex:(unsigned long long)arg2;
- (id)carouselViewController:(id)arg1 didHapticTouchItemAtIndex:(unsigned long long)arg2;
- (void)carouselViewController:(id)arg1 didSwipeFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)carouselViewController:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2 eventType:(unsigned long long)arg3;
- (void)_t1_removeCarouselViewController;
- (void)addCarouselViewControllerToParent:(id)arg1;
@property(readonly, nonatomic) TFNTwitterUnifiedCardSwipeableMediaComponentModel *model;
@property(readonly, nonatomic) _Bool shouldDelayContainerTouchDownHighlighting;
@property(readonly, nonatomic) UIView *autoplayableContainerView;
- (id)supplementalParamsForEvent:(id)arg1;
- (void)prepareForReuse;
- (void)setupActions;
- (id)t1_accessibilityCustomActions;
- (id)autoplayable;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)accessibilityElementDidBecomeFocused;
- (id)accessibilityLabel;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

