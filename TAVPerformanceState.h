//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterAVCore/NSCopying-Protocol.h>
#import <TwitterAVCore/NSMutableCopying-Protocol.h>

@class NSArray, NSString;

@interface TAVPerformanceState : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_variantUri;
    NSString *_variantPlaylistType;
    double _variantIndicatedBitrate;
    double _variantObservedBitrate;
    double _variantAverageAudioBitrate;
    double _variantAverageVideoBitrate;
    double _variantSwitchBitrate;
    double _sessionObservedMinBitrate;
    double _sessionObservedMaxBitrate;
    double _sessionTransferDuration;
    long long _sessionNumberOfBytesTransferred;
    long long _sessionMediaRequestsWWAN;
    long long _sessionMediaRequestsWIFI;
    long long _sessionNumberOfDroppedVideoFrames;
    long long _sessionNumberOfStalls;
    NSArray *_itemLoadedTimeRanges;
    double _itemPreferredForwardBufferDuration;
    double _itemPreferredPeakBitrate;
    struct CGSize _itemPreferredMaximumResolution;
    struct CGSize _itemPresentationSize;
}

+ (id)performanceStateWithPreviousPerformanceState:(id)arg1 accessLogEvents:(id)arg2 loadedTimeRanges:(id)arg3 preferredForwardBufferDuration:(double)arg4 preferredPeakBitRate:(double)arg5 preferredMaximumResolution:(struct CGSize)arg6 presentationSize:(struct CGSize)arg7;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize itemPresentationSize; // @synthesize itemPresentationSize=_itemPresentationSize;
@property(nonatomic) struct CGSize itemPreferredMaximumResolution; // @synthesize itemPreferredMaximumResolution=_itemPreferredMaximumResolution;
@property(nonatomic) double itemPreferredPeakBitrate; // @synthesize itemPreferredPeakBitrate=_itemPreferredPeakBitrate;
@property(nonatomic) double itemPreferredForwardBufferDuration; // @synthesize itemPreferredForwardBufferDuration=_itemPreferredForwardBufferDuration;
@property(copy, nonatomic) NSArray *itemLoadedTimeRanges; // @synthesize itemLoadedTimeRanges=_itemLoadedTimeRanges;
@property(nonatomic) long long sessionNumberOfStalls; // @synthesize sessionNumberOfStalls=_sessionNumberOfStalls;
@property(nonatomic) long long sessionNumberOfDroppedVideoFrames; // @synthesize sessionNumberOfDroppedVideoFrames=_sessionNumberOfDroppedVideoFrames;
@property(nonatomic) long long sessionMediaRequestsWIFI; // @synthesize sessionMediaRequestsWIFI=_sessionMediaRequestsWIFI;
@property(nonatomic) long long sessionMediaRequestsWWAN; // @synthesize sessionMediaRequestsWWAN=_sessionMediaRequestsWWAN;
@property(nonatomic) long long sessionNumberOfBytesTransferred; // @synthesize sessionNumberOfBytesTransferred=_sessionNumberOfBytesTransferred;
@property(nonatomic) double sessionTransferDuration; // @synthesize sessionTransferDuration=_sessionTransferDuration;
@property(nonatomic) double sessionObservedMaxBitrate; // @synthesize sessionObservedMaxBitrate=_sessionObservedMaxBitrate;
@property(nonatomic) double sessionObservedMinBitrate; // @synthesize sessionObservedMinBitrate=_sessionObservedMinBitrate;
@property(nonatomic) double variantSwitchBitrate; // @synthesize variantSwitchBitrate=_variantSwitchBitrate;
@property(nonatomic) double variantAverageVideoBitrate; // @synthesize variantAverageVideoBitrate=_variantAverageVideoBitrate;
@property(nonatomic) double variantAverageAudioBitrate; // @synthesize variantAverageAudioBitrate=_variantAverageAudioBitrate;
@property(nonatomic) double variantObservedBitrate; // @synthesize variantObservedBitrate=_variantObservedBitrate;
@property(nonatomic) double variantIndicatedBitrate; // @synthesize variantIndicatedBitrate=_variantIndicatedBitrate;
@property(copy, nonatomic) NSString *variantPlaylistType; // @synthesize variantPlaylistType=_variantPlaylistType;
@property(copy, nonatomic) NSString *variantUri; // @synthesize variantUri=_variantUri;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithAggregateValuesFromState:(id)arg1;
- (id)mergeAggregateValuesWithState:(id)arg1;
- (id)init;
- (id)initWithVariantUri:(id)arg1 variantPlaylistType:(id)arg2 variantIndicatedBitrate:(double)arg3 variantObservedBitrate:(double)arg4 variantAverageAudioBitrate:(double)arg5 variantAverageVideoBitrate:(double)arg6 variantSwitchBitrate:(double)arg7 sessionObservedMinBitrate:(double)arg8 sessionObservedMaxBitrate:(double)arg9 sessionTransferDuration:(double)arg10 sessionNumberOfBytesTransferred:(long long)arg11 sessionMediaRequestsWWAN:(long long)arg12 sessionMediaRequestsWIFI:(long long)arg13 sessionNumberOfDroppedVideoFrames:(long long)arg14 sessionNumberOfStalls:(long long)arg15 itemLoadedTimeRanges:(id)arg16 itemPreferredForwardBufferDuration:(double)arg17 itemPreferredPeakBitrate:(double)arg18 itemPreferredMaximumResolution:(struct CGSize)arg19 itemPresentationSize:(struct CGSize)arg20;

@end

