//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, TFNTwitterAccount;

@interface TFNTwitterMediaAssetPackedSegmentedUploadPerformanceScribeValue : NSObject
{
    unsigned long long _process;
    unsigned long long _action;
    unsigned long long _assetType;
    long long _uploadSource;
    unsigned long long _uploadSourceType;
    double _ingestDuration;
    NSString *_sessionID;
    NSString *_mediaID;
    NSDate *_startDate;
    NSDate *_completeDate;
    TFNTwitterAccount *_account;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSDate *completeDate; // @synthesize completeDate=_completeDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(readonly, copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) double ingestDuration; // @synthesize ingestDuration=_ingestDuration;
@property(readonly, nonatomic) unsigned long long uploadSourceType; // @synthesize uploadSourceType=_uploadSourceType;
@property(readonly, nonatomic) long long uploadSource; // @synthesize uploadSource=_uploadSource;
@property(readonly, nonatomic) unsigned long long assetType; // @synthesize assetType=_assetType;
@property(readonly, nonatomic) unsigned long long action; // @synthesize action=_action;
@property(readonly, nonatomic) unsigned long long process; // @synthesize process=_process;
@property(readonly, nonatomic) NSString *scribeEnvironment;
@property(readonly, nonatomic) NSString *scribeUploadSource;
@property(readonly, nonatomic) NSString *scribeAction;
@property(readonly, nonatomic) NSString *scribeDurationBucket;
@property(readonly, nonatomic) NSString *scribeElement;
@property(readonly, copy, nonatomic) NSString *eventMetadata;
@property(readonly, copy, nonatomic) NSString *eventImpressionID;
@property(readonly, nonatomic) double eventDuration;
@property(readonly, copy, nonatomic) NSString *eventName;
@property(readonly, nonatomic) _Bool shouldScribeToPerftown;
@property(readonly, nonatomic) _Bool isLocalFile;
- (id)initWithContext:(id)arg1 process:(unsigned long long)arg2 action:(unsigned long long)arg3 startDate:(id)arg4 completeDate:(id)arg5 mediaID:(id)arg6;
- (id)initWithAccount:(id)arg1 sessionID:(id)arg2 asset:(id)arg3 uploadSource:(long long)arg4 process:(unsigned long long)arg5 action:(unsigned long long)arg6 startDate:(id)arg7 completeDate:(id)arg8 mediaID:(id)arg9;
- (id)initWithAccount:(id)arg1 sessionID:(id)arg2 assetType:(unsigned long long)arg3 uploadSource:(long long)arg4 uploadSourceType:(unsigned long long)arg5 ingestDuration:(double)arg6 process:(unsigned long long)arg7 action:(unsigned long long)arg8 startDate:(id)arg9 completeDate:(id)arg10 mediaID:(id)arg11;

@end

