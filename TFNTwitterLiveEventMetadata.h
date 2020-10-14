//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSModel-Protocol.h>

@class NSDictionary, NSString, TFNTwitterLiveEventCarousel, TFNTwitterLiveEventScore;

@interface TFNTwitterLiveEventMetadata : NSObject <TFSModel>
{
    NSDictionary *_statusesDictionary;
    NSDictionary *_usersDictionary;
    NSDictionary *_liveEventsDictionary;
    TFNTwitterLiveEventCarousel *_carousel;
    TFNTwitterLiveEventScore *_score;
    double _pollingInterval;
    NSString *_timelineID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *timelineID; // @synthesize timelineID=_timelineID;
@property(readonly, nonatomic) double pollingInterval; // @synthesize pollingInterval=_pollingInterval;
@property(readonly, copy, nonatomic) TFNTwitterLiveEventScore *score; // @synthesize score=_score;
@property(readonly, copy, nonatomic) TFNTwitterLiveEventCarousel *carousel; // @synthesize carousel=_carousel;
@property(readonly, copy, nonatomic) NSDictionary *liveEventsDictionary; // @synthesize liveEventsDictionary=_liveEventsDictionary;
@property(readonly, copy, nonatomic) NSDictionary *usersDictionary; // @synthesize usersDictionary=_usersDictionary;
@property(readonly, copy, nonatomic) NSDictionary *statusesDictionary; // @synthesize statusesDictionary=_statusesDictionary;
- (id)metadataByReplacingStatusesDictionary:(id)arg1 usersDictionary:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 userBuilder:(id)arg2;
- (id)initWithStatusesDictionary:(id)arg1 usersDictionary:(id)arg2 liveEventsDictionary:(id)arg3 carousel:(id)arg4 score:(id)arg5 pollingInterval:(double)arg6 timelineID:(id)arg7;
- (id)init;

@end

