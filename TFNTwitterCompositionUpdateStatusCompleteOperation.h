//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSDependentConcurrentOperation.h>

#import <T1Twitter/TFNTwitterCompositionUpdateStatusDependency-Protocol.h>
#import <T1Twitter/TFNTwitterCompositionUpdateStatusStateDependency-Protocol.h>

@class NSError, NSString, TFNTwitterComposition, TFNTwitterCompositionUploadContext, TFNTwitterStatus;

@interface TFNTwitterCompositionUpdateStatusCompleteOperation : TFSDependentConcurrentOperation <TFNTwitterCompositionUpdateStatusDependency, TFNTwitterCompositionUpdateStatusStateDependency>
{
    TFNTwitterStatus *_status;
    unsigned long long _updateStatusState;
    NSError *_updateStatusError;
    TFNTwitterComposition *_composition;
    TFNTwitterCompositionUploadContext *_context;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFNTwitterCompositionUploadContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) TFNTwitterComposition *composition; // @synthesize composition=_composition;
@property(retain) NSError *updateStatusError; // @synthesize updateStatusError=_updateStatusError;
@property unsigned long long updateStatusState; // @synthesize updateStatusState=_updateStatusState;
@property(retain) TFNTwitterStatus *status; // @synthesize status=_status;
- (void)_tfn_main_didFailCompositionUpload;
- (void)_tfn_main_updateReplyChainInReplyToStatusInfo;
- (void)_tfn_main_didCompleteCompositionUpload;
- (void)_tfn_main_run;
- (void)run;
- (id)initWithComposition:(id)arg1 context:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

