//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSModel-Protocol.h>

@class TFNDirectMessageAddParticipantFailuresResponse, TFNDirectMessageEventsResponse;

@interface TFNDirectMessageCreateResponse : NSObject <TFSModel>
{
    TFNDirectMessageEventsResponse *_eventsResponse;
    TFNDirectMessageAddParticipantFailuresResponse *_addParticipantFailuresResponse;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFNDirectMessageAddParticipantFailuresResponse *addParticipantFailuresResponse; // @synthesize addParticipantFailuresResponse=_addParticipantFailuresResponse;
@property(readonly, nonatomic) TFNDirectMessageEventsResponse *eventsResponse; // @synthesize eventsResponse=_eventsResponse;
- (id)initWithJSONDictionary:(id)arg1 userCache:(id)arg2;

@end

