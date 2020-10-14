//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSDatabase/TFSDatabase.h>

@class NSOperationQueue, NSString, TFSDatabaseConnection, TFSDatabaseStateQueue, TFSDatabaseUIApplicationLink;
@protocol TFSDatabaseExpiringActivityManager;

@interface TFSDatabaseOnDisk : TFSDatabase
{
    NSString *_path;
    NSOperationQueue *_writeOperationQueue;
    TFSDatabaseUIApplicationLink *_applicationLink;
    id <TFSDatabaseExpiringActivityManager> _expiringActivityManager;
    TFSDatabaseConnection *_writeConnection;
}

+ (id)_tfs_underlyingWriteQueue;
+ (id)statistics;
+ (id)_tfs_mutableStatistics;
- (void).cxx_destruct;
@property(retain, nonatomic) TFSDatabaseConnection *writeConnection; // @synthesize writeConnection=_writeConnection;
@property(retain, nonatomic) id <TFSDatabaseExpiringActivityManager> expiringActivityManager; // @synthesize expiringActivityManager=_expiringActivityManager;
@property(retain, nonatomic) TFSDatabaseUIApplicationLink *applicationLink; // @synthesize applicationLink=_applicationLink;
@property(readonly, nonatomic) NSOperationQueue *writeOperationQueue; // @synthesize writeOperationQueue=_writeOperationQueue;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void)_tfs_enqueueTransactionWithBlock:(CDUnknownBlockType)arg1 qos:(id)arg2;
- (void)close;
- (void)flush;
- (void)enqueueWriteTransactionWithLog:(id)arg1 block:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)performTransactionWithLog:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_tfs_applicationWillResignActive:(id)arg1;
- (void)_tfs_applicationDidBecomeActive:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1 applicationLink:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) TFSDatabaseStateQueue *stateQueue; // @dynamic stateQueue;

@end

