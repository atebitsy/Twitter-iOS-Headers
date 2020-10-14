//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFNPerformanceMetricDirectory : NSObject
{
    NSString *_rootDirectory;
    NSString *_appVersion;
    NSString *_appVersionDirectory;
}

+ (void)performCleanupForOtherAppVersionsWithRootDirectory:(id)arg1 appVersion:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *appVersionDirectory; // @synthesize appVersionDirectory=_appVersionDirectory;
@property(readonly, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(readonly, nonatomic) NSString *rootDirectory; // @synthesize rootDirectory=_rootDirectory;
- (id)_tfn_filePathForMetricIdentifier:(id)arg1 componentIdentifier:(id)arg2 accountIdentifier:(id)arg3;
- (id)serializedMeasurementForMetricIdentifier:(id)arg1 componentIdentifier:(id)arg2 accountIdentifier:(id)arg3;
- (void)persistSerializedMeasurement:(id)arg1 forMetricIdentifier:(id)arg2 componentIdentifier:(id)arg3 accountIdentifier:(id)arg4;
- (void)performCleanupForRemovedAccountID:(id)arg1;
- (id)initWithRootDirectory:(id)arg1 appVersion:(id)arg2;
- (id)init;

@end

