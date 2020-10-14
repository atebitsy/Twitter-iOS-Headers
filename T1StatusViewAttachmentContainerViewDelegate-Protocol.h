//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1CardViewDelegate-Protocol.h>
#import <T1Twitter/T1StatusPhotoVideoForwardViewDelegate-Protocol.h>
#import <T1Twitter/T1UnifiedCardComponentViewEventDelegate-Protocol.h>
#import <T1Twitter/T1UserRecommendationViewDataSource-Protocol.h>

@class T1CardViewEvent, T1CardViewLayoutState, T1StatusViewAttachmentContainerView, T1StatusViewEvent, T1TombstoneView, T1URTRichTextStatusEventInteractionHandler, T1UnifiedCardViewLayoutState, T1UserRecommendationView, T1UserRecommendationViewLayoutState, TFNLayoutMetrics, TFNPreviewConfiguration, TFNTwitterAccount, UIView;
@protocol T1StatusViewModel;

@protocol T1StatusViewAttachmentContainerViewDelegate <T1StatusPhotoVideoForwardViewDelegate, T1UserRecommendationViewDataSource, T1CardViewDelegate, T1UnifiedCardComponentViewEventDelegate>
- (void)didCreateTombstoneViewWithInteractionHandler:(T1URTRichTextStatusEventInteractionHandler *)arg1;
- (void)didTapActionOnTombstoneView:(T1TombstoneView *)arg1;
- (TFNPreviewConfiguration *)quotedStatusView:(UIView *)arg1 didSendEvent:(T1StatusViewEvent *)arg2;
- (void)didLongPressOnQuotedStatusView:(UIView *)arg1;
- (void)didTapOnQuotedStatusView:(UIView *)arg1;
- (void)didProfileTapOnUserRecommendationView:(T1UserRecommendationView *)arg1 cardEvent:(T1CardViewEvent *)arg2;
- (struct CGSize)mediaForwardImageDownloadSizeForViewModel:(id <T1StatusViewModel>)arg1 options:(unsigned long long)arg2 account:(TFNTwitterAccount *)arg3 layoutMetrics:(TFNLayoutMetrics *)arg4 attachmentType:(unsigned long long)arg5;
- (long long)cardDisplayModeForOptions:(unsigned long long)arg1;
- (T1UnifiedCardViewLayoutState *)unifiedCardViewLayoutStateForLayoutState:(id)arg1;
- (T1CardViewLayoutState *)cardViewLayoutStateForLayoutState:(id)arg1;
- (T1UserRecommendationViewLayoutState *)userRecommendationViewLayoutStateForLayoutState:(id)arg1;
- (id)quotedStatusViewLayoutStateForLayoutState:(id)arg1;

@optional
- (TFNPreviewConfiguration *)attachmentContainerView:(T1StatusViewAttachmentContainerView *)arg1 previewConfigurationForLocation:(struct CGPoint)arg2;
@end

