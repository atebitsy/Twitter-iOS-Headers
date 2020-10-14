//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterNetworkUtilities/TNLRequestDelegate-Protocol.h>

@class NSString;

@interface TNUURLHTMLTitleRetriever : NSObject <TNLRequestDelegate>
{
}

+ (id)retrieveHTMLTitleForURL:(id)arg1 withTimeout:(double)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)retrieveHTMLTitleForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)internalSharedInstance;
- (void)tnl_requestOperation:(id)arg1 didCompleteWithResponse:(id)arg2;
- (void)tnl_requestOperation:(id)arg1 didReceiveData:(id)arg2;
- (void)tnl_requestOperation:(id)arg1 didReceiveURLResponse:(id)arg2;
- (void)tnl_requestOperation:(id)arg1 didRedirectFromURLRequest:(id)arg2 toURLRequest:(id)arg3;
- (void)tnl_requestOperation:(id)arg1 willRedirectFromRequest:(id)arg2 withResponse:(id)arg3 toRequest:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)retrieveHTMLTitleForURL:(id)arg1 withTimeout:(double)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

