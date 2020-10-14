//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TBCPeriscopeAuthenticator-Protocol.h>
#import <T1Twitter/TNLRequestDelegate-Protocol.h>

@class NSString, TNLRequestOperation;

@interface TBCPeriscopeCommandServiceAuthenticator : NSObject <TNLRequestDelegate, TBCPeriscopeAuthenticator>
{
    TNLRequestOperation *_periscopeAPIOperation;
}

- (void).cxx_destruct;
- (void)authenticatePeriscopeAccountWithJWT:(id)arg1 direct:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)tnl_requestOperation:(id)arg1 didCompleteWithResponse:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

