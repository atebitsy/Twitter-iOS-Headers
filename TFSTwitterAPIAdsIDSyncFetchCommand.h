//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithResponseModelBuilder.h>

@class NSDictionary;

@interface TFSTwitterAPIAdsIDSyncFetchCommand : TFSTwitterAPICommandWithResponseModelBuilder
{
    NSDictionary *_idSyncData;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *idSyncData; // @synthesize idSyncData=_idSyncData;
- (id)request;
- (id)initWithAccountID:(id)arg1 idSyncData:(id)arg2 context:(id)arg3 source:(unsigned long long)arg4 responseModelBuilder:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

