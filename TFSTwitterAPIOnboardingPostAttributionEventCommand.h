//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithResponseModelBuilder.h>

@class NSDictionary, NSString;

@interface TFSTwitterAPIOnboardingPostAttributionEventCommand : TFSTwitterAPICommandWithResponseModelBuilder
{
    _Bool _isFirstOpen;
    NSString *_eventString;
    NSString *_referringLinkURL;
    NSDictionary *_headerFields;
    NSDictionary *_bodyFields;
}

- (void).cxx_destruct;
- (id)request;
- (id)initWithContext:(id)arg1 accountID:(id)arg2 event:(long long)arg3 referringLinkURL:(id)arg4 headerFields:(id)arg5 bodyFields:(id)arg6 source:(unsigned long long)arg7 responseModelBuilder:(id)arg8 completionBlock:(CDUnknownBlockType)arg9;

@end

