//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeSDK/PTVJanusClientObserver-Protocol.h>

@class NSDate, NSMutableArray, NSString, NSTimer, PTVGuestBroadcastingPeriodicPlaybackStats, PTVGuestCallerController, PTVJanusClient;
@protocol PTVGuestBroadcastingStatsCollectorDelegate;

@interface PTVGuestBroadcastingStatsCollector : NSObject <PTVJanusClientObserver>
{
    PTVGuestBroadcastingStatsCollector *_weakSelf;
    id <PTVGuestBroadcastingStatsCollectorDelegate> _delegate;
    PTVGuestCallerController *_guestCallerController;
    PTVJanusClient *_janusClient;
    NSString *_primaryUserId;
    NSTimer *_periodicStatsTimer;
    NSDate *_periodicPlaybackStatsStartTime;
    NSMutableArray *_videoHandlerStatsCollectors;
    PTVGuestBroadcastingPeriodicPlaybackStats *_previousPeriodicPlaybackStats;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PTVGuestBroadcastingPeriodicPlaybackStats *previousPeriodicPlaybackStats; // @synthesize previousPeriodicPlaybackStats=_previousPeriodicPlaybackStats;
@property(readonly, nonatomic) NSMutableArray *videoHandlerStatsCollectors; // @synthesize videoHandlerStatsCollectors=_videoHandlerStatsCollectors;
@property(readonly, nonatomic) NSDate *periodicPlaybackStatsStartTime; // @synthesize periodicPlaybackStatsStartTime=_periodicPlaybackStatsStartTime;
@property(retain, nonatomic) NSTimer *periodicStatsTimer; // @synthesize periodicStatsTimer=_periodicStatsTimer;
@property(retain, nonatomic) NSString *primaryUserId; // @synthesize primaryUserId=_primaryUserId;
@property(readonly, nonatomic) PTVJanusClient *janusClient; // @synthesize janusClient=_janusClient;
@property(readonly, nonatomic) PTVGuestCallerController *guestCallerController; // @synthesize guestCallerController=_guestCallerController;
@property(nonatomic) __weak id <PTVGuestBroadcastingStatsCollectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didCollectEndOfStreamStats:(id)arg1;
- (void)collectEndOfStreamStatsIfNeeded;
- (void)collectEndOfStreamStatsForHandlerIfNeeded:(id)arg1;
- (void)didCollectPeriodicPlaybackStats:(id)arg1;
- (void)collectPeriodicPlaybackStatsIfNeeded;
- (void)didCollectPeriodicPublishingStats:(id)arg1;
- (void)collectPeriodicPublishingStatsIfNeeded;
- (void)collectPeriodicStats;
- (void)stopCollectingPeriodicStats;
- (void)startCollectingPeriodicStats;
- (void)startOrStopCollectingPeriodicStatsIfNeeded;
- (_Bool)isCollectingPeriodicStats;
- (_Bool)shouldCollectPeriodicStats;
- (void)primaryViewDidChangeToUserWithId:(id)arg1;
- (id)playbackStatsCollectors;
- (_Bool)isCollectingPlaybackStats;
- (id)publishingStatsCollector;
- (void)stopCollectingStatsForVideoHandler:(id)arg1;
- (void)startCollectingStatsForVideoHandler:(id)arg1;
- (id)statsCollectorForVideoHandler:(id)arg1;
- (void)janusClient:(id)arg1 didRemoveHandler:(id)arg2;
- (void)janusClient:(id)arg1 didAddHandler:(id)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 guestCallerController:(id)arg2 janusClient:(id)arg3 primaryUserId:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

