//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterAVCore/NSCopying-Protocol.h>
#import <TwitterAVCore/NSObject-Protocol.h>

@class TAVAnalyticsSessionState;
@protocol TAVPlaylistItemKey;

@protocol TAVAnalyticsEventProtocol <NSCopying, NSObject>
@property(readonly, copy, nonatomic) TAVAnalyticsSessionState *analyticsSessionState;
@property(readonly, copy, nonatomic) id <TAVPlaylistItemKey> playlistItemKey;
@end

