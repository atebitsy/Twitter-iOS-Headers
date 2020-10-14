//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TIPImageFetchOperation, TNLRequestOperation;
@protocol TFSTwitterAPICommandCancellable;

@interface TFNFoundMediaFetchOperation : NSObject
{
    TNLRequestOperation *_requestOperation;
    TIPImageFetchOperation *_imageFetchOperation;
    id <TFSTwitterAPICommandCancellable> _cancellableCommandOperation;
}

+ (id)_fetchImageContainerForImage:(id)arg1 imagePipeline:(id)arg2 animated:(_Bool)arg3 withOptions:(id)arg4 firstFrameCallback:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)fetchAnimatedGIFImageForImage:(id)arg1 imagePipeline:(id)arg2 withOptions:(id)arg3 firstFrameCallback:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)fetchImageForImage:(id)arg1 imagePipeline:(id)arg2 withOptions:(id)arg3 firstFrameCallback:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)cancelFetchOperation:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <TFSTwitterAPICommandCancellable> cancellableCommandOperation; // @synthesize cancellableCommandOperation=_cancellableCommandOperation;
@property(readonly, nonatomic) TIPImageFetchOperation *imageFetchOperation; // @synthesize imageFetchOperation=_imageFetchOperation;
@property(readonly, nonatomic) TNLRequestOperation *requestOperation; // @synthesize requestOperation=_requestOperation;
- (id)initWithCancellableCommandOperation:(id)arg1;
- (id)initWithImageFetchOperation:(id)arg1;
- (id)initWithRequestOperation:(id)arg1;

@end

