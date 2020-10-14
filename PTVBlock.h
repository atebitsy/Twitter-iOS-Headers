//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PTVSignal;
@protocol OS_dispatch_queue;

@interface PTVBlock : NSObject
{
    _Bool _executed;
    _Bool _finished;
    id _result;
    PTVSignal *_signal;
    CDUnknownBlockType _function;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)block:(CDUnknownBlockType)arg1 queue:(id)arg2;
+ (id)block:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)then:(id)arg1;
- (_Bool)finished;
- (id)result;
- (id)input;
- (void)finish:(id)arg1;
- (void)fire;
- (void)execute;
- (id)init;
- (id)initWithBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

