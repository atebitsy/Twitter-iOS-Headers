//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVJanusMessage.h>

@class NSString;

@interface PTVJanusTrickleMessage : PTVJanusMessage
{
    int _sdpMLineIndex;
    NSString *_sdpMid;
    NSString *_candidate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *candidate; // @synthesize candidate=_candidate;
@property(readonly, nonatomic) NSString *sdpMid; // @synthesize sdpMid=_sdpMid;
@property(readonly, nonatomic) int sdpMLineIndex; // @synthesize sdpMLineIndex=_sdpMLineIndex;
- (id)JSONDictionary;
- (id)initWithSdpMLineIndex:(int)arg1 sdpMid:(id)arg2 candidate:(id)arg3;

@end

