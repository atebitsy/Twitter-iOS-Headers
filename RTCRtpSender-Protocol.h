//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebRTC/NSObject-Protocol.h>

@class NSString, RTCMediaStreamTrack, RTCRtpParameters;
@protocol RTCDtmfSender;

@protocol RTCRtpSender <NSObject>
@property(readonly, nonatomic) id <RTCDtmfSender> dtmfSender;
@property(copy, nonatomic) RTCMediaStreamTrack *track;
@property(copy, nonatomic) RTCRtpParameters *parameters;
@property(readonly, nonatomic) NSString *senderId;
@end

