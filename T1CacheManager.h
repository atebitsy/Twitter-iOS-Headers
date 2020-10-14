//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface T1CacheManager : NSObject
{
    _Bool _started;
}

+ (id)sharedManager;
@property(nonatomic, getter=isStarted) _Bool started; // @synthesize started=_started;
- (void)_t1_reportPurgeWithReason:(unsigned long long)arg1 cacheMetrics:(id)arg2;
- (void)_t1_purgeCachesAndReportMetricsWithReason:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_t1_wrapInBackgroundTask:(CDUnknownBlockType)arg1;
- (void)_t1_applicationDidEnterBackground;
- (void)_t1_applicationDidReceiveMemoryWarning;
- (void)stop;
- (void)start;
- (id)init;
- (void)dealloc;
- (id)initPrivate;

@end

