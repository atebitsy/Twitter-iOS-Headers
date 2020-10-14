//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterCrashlytics/NSObject-Protocol.h>

@class CLSReportsController, CLSSettings, NSError, NSString;

@protocol CLSReportsControllerDelegate <NSObject>
- (NSString *)bundleIdentifierForReportsController:(CLSReportsController *)arg1;
- (NSString *)APIKeyForReportsController:(CLSReportsController *)arg1;
- (CLSSettings *)settingsForReportsController:(CLSReportsController *)arg1;
- (void)reportsControllerDidCompleteAllSubmissions:(CLSReportsController *)arg1;
- (void)reportsController:(CLSReportsController *)arg1 didCompletePackageSubmission:(NSString *)arg2 error:(NSError *)arg3;
@end

