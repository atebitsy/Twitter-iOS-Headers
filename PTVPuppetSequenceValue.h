//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVPuppetValue.h>

@class NSArray, NSMutableArray;

@interface PTVPuppetSequenceValue : PTVPuppetValue
{
    NSMutableArray *_values;
    long long _numberOfCompletedLoops;
    double _startTimeOfLatestLoop;
    _Bool _zeroDurationLoopDetected;
    long long _repeatCount;
}

+ (id)puppetValueFromDictionary:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long repeatCount; // @synthesize repeatCount=_repeatCount;
- (_Bool)shouldRepeat;
@property(nonatomic) _Bool repeats;
- (double)doubleValue;
- (_Bool)step:(double)arg1;
- (void)advanceTo:(double)arg1;
- (id)currentValue;
- (void)removeValueAtIndex:(long long)arg1;
- (void)insertValue:(id)arg1 atIndex:(long long)arg2;
- (void)removeValue:(id)arg1;
- (void)appendValue:(id)arg1;
@property(readonly, nonatomic) NSArray *values;
- (_Bool)referencesPuppetValueNamed:(id)arg1;
- (void)resetValues;
- (void)reset;
- (long long)state;

@end

