//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSObject, TFNTwitterAccount;

@protocol T1OnboardingFlow <NSObject>
@property(readonly, nonatomic, getter=isFlowInProgress) _Bool flowInProgress;
@property(readonly, nonatomic) TFNTwitterAccount *account;
- (void)completeFlowAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)removeFlowCompletionObserver:(NSObject *)arg1;
- (void)addFlowCompletionObserver:(NSObject *)arg1 selector:(SEL)arg2;

@optional
@property(readonly, nonatomic) _Bool willViewAccountOnFlowCompletion;
@end

