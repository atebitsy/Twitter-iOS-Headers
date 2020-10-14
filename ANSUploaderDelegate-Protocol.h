//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterCrashlytics/NSObject-Protocol.h>

@class ANSUploader, NSError, NSString, NSURLAuthenticationChallenge, NSURLRequest, NSURLResponse, NSURLSession;

@protocol ANSUploaderDelegate <NSObject>
- (void)uploader:(ANSUploader *)arg1 completedRequest:(NSURLRequest *)arg2 withResponse:(NSURLResponse *)arg3 uniqueName:(NSString *)arg4 error:(NSError *)arg5 completionHandler:(void (^)(_Bool, NSError *))arg6;
- (void)uploader:(ANSUploader *)arg1 didFinishUploadWithUniqueName:(NSString *)arg2 error:(NSError *)arg3;
- (NSString *)uploader:(ANSUploader *)arg1 filePathForUniqueName:(NSString *)arg2;

@optional
- (void)uploader:(ANSUploader *)arg1 session:(NSURLSession *)arg2 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg3 completionHandler:(void (^)(long long, NSURLCredential *))arg4;
@end

