//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVDIAnalyticsScribe/TAVAnalyticsScribeClientEventParametersBuilder-Protocol.h>

@class NSString, TVDIAnalyticsScribeParametersBuilderConfiguration;

@interface TVDIAnalyticsScribeClientEventThriftParametersBuilder : NSObject <TAVAnalyticsScribeClientEventParametersBuilder>
{
    TVDIAnalyticsScribeParametersBuilderConfiguration *_configuration;
}

+ (id)base64StringFromThrift:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) TVDIAnalyticsScribeParametersBuilderConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)clientMediaEventWithEvent:(id)arg1 playlistMetadata:(id)arg2;
- (id)playerStateWithIsMuted:(_Bool)arg1 volume:(float)arg2 deviceVolume:(float)arg3;
- (id)playingMediaStateWithIsAd:(_Bool)arg1 mediaURL:(id)arg2 mediaTimecodeMillis:(id)arg3 ownerID:(id)arg4 broadcastState:(long long)arg5 targetBroadcastId:(id)arg6;
- (id)mediaMetadataWithTargetBroadcastId:(id)arg1 ownerID:(id)arg2;
- (id)broadcastMediaStateWithTargetBroadcastId:(id)arg1 broadcastState:(long long)arg2;
- (long long)videoTypeWithIsAd:(_Bool)arg1;
- (id)sessionStateWithItemType:(id)arg1 itemId:(id)arg2 contentVideoIdentifier:(id)arg3 sessionId:(id)arg4 videoAdsPassthroughData:(id)arg5 hostEventId:(id)arg6 targetEventId:(id)arg7 liveVideoEventTweetId:(id)arg8;
- (id)tweetIdWithItemType:(id)arg1 itemId:(id)arg2 liveVideoEventTweetId:(id)arg3;
- (id)liveEventIdentifierWithItemType:(id)arg1 itemId:(id)arg2 hostEventId:(id)arg3 targetEventId:(id)arg4;
- (id)contentVideoIdentifier:(id)arg1;
- (_Bool)isSupportedEventType:(id)arg1;
- (id)eventTypeWithEvent:(id)arg1;
- (void)assertNoError:(id)arg1;
- (id)addEncodedThriftEvent:(id)arg1 toScribeParameters:(id)arg2;
- (id)scribeParametersForEvent:(id)arg1 playlistMetadata:(id)arg2;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

