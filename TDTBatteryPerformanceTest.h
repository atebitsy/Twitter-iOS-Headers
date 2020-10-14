//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterDiagnosticTools/TDTPerformanceTest.h>

@class NSString, TDTBatterySampler;

@interface TDTBatteryPerformanceTest : TDTPerformanceTest
{
    TDTBatterySampler *_batterySampler;
    NSString *_runId;
    _Bool _isSubsequentRun;
    double _batteryDeltaThreshold;
    double _batterySamplingInterval;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double batterySamplingInterval; // @synthesize batterySamplingInterval=_batterySamplingInterval;
@property(readonly, nonatomic) double batteryDeltaThreshold; // @synthesize batteryDeltaThreshold=_batteryDeltaThreshold;
- (void)takeSample;
- (void)restartWithParameters:(id)arg1;
- (void)stop;
- (void)start;
- (double)_totalSamplingTime;
- (void)_saveBatteryMonitorState;
- (id)_runFilePath;
- (void)_finishedSampling;
- (void)_batterySampleAdded;
- (_Bool)_batteryDeltaAboveThreshold;
- (void)dealloc;
- (id)initWithParameters:(id)arg1;
- (id)init;

@end

