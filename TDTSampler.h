//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterDiagnosticTools/NSCoding-Protocol.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TDTSampler : NSObject <NSCoding>
{
    NSObject<OS_dispatch_queue> *_samplesQueue;
    NSObject<OS_dispatch_source> *_timer;
    double _takeSampleDuration;
    double _lastSampleTime;
    _Bool _isRunning;
    NSMutableArray *_samples;
    double _samplingInterval;
    unsigned long long _maxSamplesToKeep;
}

+ (unsigned long long)defaultMaxSamplesToKeep;
+ (double)defaultSamplingInterval;
+ (id)samplingQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) unsigned long long maxSamplesToKeep; // @synthesize maxSamplesToKeep=_maxSamplesToKeep;
@property(nonatomic) double samplingInterval; // @synthesize samplingInterval=_samplingInterval;
- (void)_addSample:(id)arg1;
- (void)takeSample;
- (id)detailedSummary;
- (id)summary;
- (id)sample;
- (void)didStop;
- (void)willStart;
- (void)sampleBlock:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *samples; // @synthesize samples=_samples;
- (_Bool)isPeriodic;
- (id)init;

@end

