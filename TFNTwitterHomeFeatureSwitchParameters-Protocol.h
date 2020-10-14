//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@protocol TFNTwitterHomeFeatureSwitchParameters <NSObject>
@property(nonatomic, getter=isVisibilityByItemPathTrackingEnabled) _Bool visibilityByItemPathTrackingEnabled;
@property(nonatomic, getter=isConsecutiveAdDedupPreventionEnabled) _Bool consecutiveAdDedupPreventionEnabled;
@property(nonatomic, getter=isAsyncPrefetchRequestEnabled) _Bool asyncPrefetchRequestEnabled;
@property(nonatomic, getter=isHomeConversationHoistingPreventionEnabled) _Bool homeConversationHoistingPreventionEnabled;
@property(nonatomic, getter=isEmptyChunkClearingEnabled) _Bool emptyChunkClearingEnabled;
@property(nonatomic, getter=isModuleItemTreeDisplayTreesEnabled) _Bool moduleItemTreeDisplayTreesEnabled;
@property(nonatomic, getter=isThreadedHomeConversationsEnabled) _Bool threadedHomeConversationsEnabled;
@property(nonatomic, getter=isTopCursorPrefetchEnabled) _Bool topCursorPrefetchEnabled;
@property(nonatomic, getter=isLatestHomeTimelineOptionAvailable) _Bool latestHomeTimelineOptionAvailable;
@property(readonly, nonatomic) unsigned long long clientDedupingMaxRecentCacheEntries;
@property(readonly, nonatomic) _Bool isClientDedupingUsingImpressionCacheEnabled;
@property(readonly, nonatomic) long long progressiveAPISegmentSize;
@property(readonly, nonatomic, getter=isProgressiveAPIEnabled) _Bool progressiveAPIEnabled;
@property(readonly, nonatomic) unsigned long long homeRequestMaxSeenIDs;
@end

