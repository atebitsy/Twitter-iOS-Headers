//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterAVCore/TAVAnalyticsEvent.h>

#import <TwitterAVCore/TAVAnalyticsClientEvent-Protocol.h>
#import <TwitterAVCore/TAVAnalyticsEventWithScribeParameters-Protocol.h>

@class NSDictionary, NSString, TAVAnalyticsSessionState, TVDIHeartbeatMetrics;
@protocol TAVPlaylistItemKey;

@interface TAVAnalyticsEventVODHeartbeat : TAVAnalyticsEvent <TAVAnalyticsEventWithScribeParameters, TAVAnalyticsClientEvent>
{
    long long _timeSpentWaiting;
    double _indicatedBitrate;
    double _videoDuration;
    long long _startTime;
    long long _endTime;
    long long _numberOfBytesTransferred;
    TVDIHeartbeatMetrics *_heartbeatMetrics;
    long long _audibleDuration;
}

+ (id)private_valueKeys;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long audibleDuration; // @synthesize audibleDuration=_audibleDuration;
@property(readonly, nonatomic) TVDIHeartbeatMetrics *heartbeatMetrics; // @synthesize heartbeatMetrics=_heartbeatMetrics;
@property(readonly, nonatomic) long long numberOfBytesTransferred; // @synthesize numberOfBytesTransferred=_numberOfBytesTransferred;
@property(readonly, nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(readonly, nonatomic) double indicatedBitrate; // @synthesize indicatedBitrate=_indicatedBitrate;
@property(readonly, nonatomic) long long timeSpentWaiting; // @synthesize timeSpentWaiting=_timeSpentWaiting;
- (id)initWithAnalyticsSessionState:(id)arg1 timeSpentWaiting:(long long)arg2 indicatedBitrate:(double)arg3 startTime:(long long)arg4 endTime:(long long)arg5 videoDuration:(double)arg6 numberOfBytesTransferred:(long long)arg7 heartbeatMetrics:(id)arg8 audibleDuration:(long long)arg9;
- (id)initWithPlaylistItemKey:(id)arg1 analyticsSessionState:(id)arg2 timeSpentWaiting:(long long)arg3 indicatedBitrate:(double)arg4 startTime:(long long)arg5 endTime:(long long)arg6 videoDuration:(double)arg7 numberOfBytesTransferred:(long long)arg8 heartbeatMetrics:(id)arg9 audibleDuration:(long long)arg10;
- (void)updateScribeParameters:(id)arg1;
@property(readonly, copy, nonatomic) NSString *clientEventAction;

// Remaining properties
@property(readonly, copy, nonatomic) TAVAnalyticsSessionState *analyticsSessionState;
@property(readonly, copy, nonatomic) NSString *clientEventCategory;
@property(readonly, copy, nonatomic) NSDictionary *clientEventParameters;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) id <TAVPlaylistItemKey> playlistItemKey;
@property(readonly) Class superclass;

@end

