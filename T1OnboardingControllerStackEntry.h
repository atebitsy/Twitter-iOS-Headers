//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, T1OnboardingTaskController;

@interface T1OnboardingControllerStackEntry : NSObject
{
    T1OnboardingTaskController *_taskController;
    NSMutableArray *_subtaskControllerStack;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *subtaskControllerStack; // @synthesize subtaskControllerStack=_subtaskControllerStack;
@property(readonly, nonatomic) T1OnboardingTaskController *taskController; // @synthesize taskController=_taskController;
- (id)initWithTaskController:(id)arg1;

@end

