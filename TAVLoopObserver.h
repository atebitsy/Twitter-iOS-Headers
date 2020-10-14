//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterAVCore/TAVPlaybackObserver-Protocol.h>

@class TAVPlaybackState;

@interface TAVLoopObserver : NSObject <TAVPlaybackObserver>
{
    CDUnknownBlockType _loopCallback;
    TAVPlaybackState *_previousState;
    long long _loopCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long loopCount; // @synthesize loopCount=_loopCount;
@property(copy, nonatomic) TAVPlaybackState *previousState; // @synthesize previousState=_previousState;
@property(copy, nonatomic) CDUnknownBlockType loopCallback; // @synthesize loopCallback=_loopCallback;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (id)initWithLoopCallback:(CDUnknownBlockType)arg1;

@end

