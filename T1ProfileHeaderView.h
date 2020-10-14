//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1ResizableHeaderView.h>

#import <T1Twitter/T1ImageViewFetchHelperDelegate-Protocol.h>
#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>

@class NSString, T1ProfileActionButtonsView, T1ProfileSummaryView, TFNTwitterAccount, TFNTwitterUserDataSource, UIColor;

@interface T1ProfileHeaderView : T1ResizableHeaderView <T1ImageViewFetchHelperDelegate, TFNLayoutMetricsEnvironment>
{
    _Bool _expanded;
    _Bool _transformed;
    _Bool _showAddAvatarOverlay;
    _Bool _shouldObscureProfile;
    _Bool _bannerless;
    T1ProfileSummaryView *_summaryView;
    T1ProfileActionButtonsView *_actionButtonsView;
    NSString *_headerSubtitle;
    UIColor *_bannerBackgroundColor;
    TFNTwitterAccount *_account;
    TFNTwitterUserDataSource *_userDataSource;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isBannerless) _Bool bannerless; // @synthesize bannerless=_bannerless;
@property(retain, nonatomic) TFNTwitterUserDataSource *userDataSource; // @synthesize userDataSource=_userDataSource;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) UIColor *bannerBackgroundColor; // @synthesize bannerBackgroundColor=_bannerBackgroundColor;
@property(nonatomic) _Bool shouldObscureProfile; // @synthesize shouldObscureProfile=_shouldObscureProfile;
@property(nonatomic) _Bool showAddAvatarOverlay; // @synthesize showAddAvatarOverlay=_showAddAvatarOverlay;
@property(retain, nonatomic) NSString *headerSubtitle; // @synthesize headerSubtitle=_headerSubtitle;
@property(readonly, nonatomic, getter=isTransformed) _Bool transformed; // @synthesize transformed=_transformed;
@property(readonly, nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(readonly, nonatomic) T1ProfileActionButtonsView *actionButtonsView; // @synthesize actionButtonsView=_actionButtonsView;
@property(readonly, nonatomic) T1ProfileSummaryView *summaryView; // @synthesize summaryView=_summaryView;
- (void)t1_fetchHelper:(id)arg1 didUpdateImageFromSource:(long long)arg2 isFinal:(_Bool)arg3;
- (void)t1_fetchHelper:(id)arg1 didLoadInitialImageFromSource:(long long)arg2;
- (_Bool)_t1_shouldAnimateFadeIn;
- (void)setTip_fetchedImage:(id)arg1;
- (id)tip_fetchedImage;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (void)setHeaderSubtitle:(id)arg1 animated:(_Bool)arg2;
- (void)_t1_updateSummaryViewLayoutPositionsForHeaderBannerHeight:(double)arg1;
- (void)_layoutSummaryViewWithDelta:(double)arg1 layoutMetrics:(id)arg2;
- (void)_layoutActionButtonsViewWithDelta:(double)arg1 layoutMetrics:(id)arg2;
- (double)_displayAreaWidth;
- (double)_defaultSummaryY;
- (void)tfn_fontSizeChanged;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (double)resizableHeaderBannerMinimumHeight;
- (id)accessibleNavigationBarElements;
- (double)headerBannerHeightForWidth:(double)arg1 bannerAspectRatio:(double)arg2;
- (void)setLeftBarButtonOptions:(long long)arg1;
- (id)bannerOverlayGradient;
- (id)initWithFrame:(struct CGRect)arg1 bannerless:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

