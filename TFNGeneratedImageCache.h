//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TIPImageAdditionalCache-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface TFNGeneratedImageCache : NSObject <TIPImageAdditionalCache>
{
    NSMutableDictionary *_cacheRegistry;
    NSObject<OS_dispatch_queue> *_cacheRegistryQueue;
}

- (void).cxx_destruct;
- (void)tip_retrieveImageForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerCache:(id)arg1 forScheme:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

