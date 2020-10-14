//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterDebuggableStream-Protocol.h>
#import <T1Twitter/TFNTwitterGenericTimelineStream-Protocol.h>

@class NSArray, NSDictionary, NSString, TFNTwitterComposition, TFNTwitterFeedbackAction, TFNTwitterRelevancePrompt, TFNTwitterStatus, TFNTwitterUser;
@protocol TFNTwitterScribeImpressionCache, TFNTwitterSuggestsModuleWhoToFollowBlender, TFNTwitterURTTimelineItem;

@protocol TFNTwitterHomeTimelineStream <TFNTwitterGenericTimelineStream, TFNTwitterDebuggableStream>
- (void)processUpdatesForRelevancePrompt:(TFNTwitterRelevancePrompt *)arg1 associatedWithEntryId:(NSString *)arg2;
- (void)showTombstone:(id <TFNTwitterURTTimelineItem>)arg1 toReplaceStatusWithID:(long long)arg2;
- (void)didTapTombstoneViewTweetOnStreamObject:(id)arg1;
- (void)showTweetPromptOnStatus:(TFNTwitterStatus *)arg1;
- (void)removeAllStreamObjects;
- (void)removeContentRelatedToUser:(TFNTwitterUser *)arg1;
- (void)restoreDismissedStreamObject:(id)arg1;
- (void)dismissStreamObject:(id)arg1 viaFeedbackAction:(TFNTwitterFeedbackAction *)arg2;
- (_Bool)removeStreamObject:(id)arg1 viaFeedbackAction:(TFNTwitterFeedbackAction *)arg2;
- (void)addStreamObject:(id)arg1;
- (void)processUpdatedStreamObject:(id)arg1 animated:(_Bool)arg2;
- (_Bool)hasRealData;
- (_Bool)hasUnreadItems;
- (void)didViewStreamObjects:(NSArray *)arg1;
@property(nonatomic, readonly) _Bool hasCompletedApplicationLaunchLoadTopRequest;
- (NSString *)scribePage;
- (void)loadNewerWithSource:(long long)arg1 topCursor:(NSString *)arg2 completion:(void (^)(void))arg3;
- (NSString *)topCursor;
- (TFNTwitterStatus *)newestStatus;
- (_Bool)loadTopFromStatusPosting:(TFNTwitterComposition *)arg1;
@property(nonatomic, readonly) NSArray *itemsToBeSerialized;
@property(nonatomic, copy) NSDictionary *scrollPositionState;
@property(nonatomic, readonly) id <TFNTwitterScribeImpressionCache> impressionCache;
@property(nonatomic, retain) id <TFNTwitterSuggestsModuleWhoToFollowBlender> whoToFollowBlender;
@end

