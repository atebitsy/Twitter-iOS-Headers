//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterNetworkLayer/TNLRequestConfiguration.h>

@interface TNLRequestConfiguration (TNUServiceHTTPConfiguration)
+ (id)configurationForBackgroundRetriableRequest;
+ (id)configurationForBackgroundRetriableRequestWithTotalTimeout:(double)arg1;
+ (id)configurationForForegroundRetriableRequest;
+ (id)configurationForForegroundRetriableRequestWithTotalTimeout:(double)arg1;
+ (id)configurationForForegroundRetriableRequestWithTotalPermittedRetryCount:(unsigned long long)arg1;
+ (id)configurationForForegroundRetriableRequestWithTotalPermittedRetryCount:(unsigned long long)arg1 totalTimeout:(double)arg2;
+ (id)configurationWithServiceHTTPConfiguration:(id)arg1;
- (id)updatedConfigurationWithHTTPRequestConfiguration:(id)arg1;
@end

