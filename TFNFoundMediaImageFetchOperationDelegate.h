//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TIPImageFetchDelegate-Protocol.h>

@class NSString, TFNFoundMediaFetchOptions;

@interface TFNFoundMediaImageFetchOperationDelegate : NSObject <TIPImageFetchDelegate>
{
    TFNFoundMediaFetchOptions *_options;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _firstFrameCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType firstFrameCallback; // @synthesize firstFrameCallback=_firstFrameCallback;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) TFNFoundMediaFetchOptions *options; // @synthesize options=_options;
- (void)_didCompleteFetchFinalImage:(id)arg1 error:(id)arg2;
- (void)_didUpdateOperation:(id)arg1 withProgress:(float)arg2 error:(id)arg3;
- (void)tip_imageFetchOperation:(id)arg1 didFailToLoadFinalImage:(id)arg2;
- (void)tip_imageFetchOperation:(id)arg1 didLoadFinalImage:(id)arg2;
- (void)tip_imageFetchOperation:(id)arg1 didLoadFirstAnimatedImageFrame:(id)arg2 progress:(float)arg3;
- (void)tip_imageFetchOperation:(id)arg1 didUpdateProgress:(float)arg2;
- (void)tip_imageFetchOperationDidStart:(id)arg1;
- (id)initWithOptions:(id)arg1 firstFrameCallback:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

