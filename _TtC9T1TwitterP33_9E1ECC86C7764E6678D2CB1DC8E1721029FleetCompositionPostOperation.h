//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSDependentConcurrentOperation.h>

#import <T1Twitter/TFSOperationDependencyResult-Protocol.h>

@class NSError;

@interface _TtC9T1TwitterP33_9E1ECC86C7764E6678D2CB1DC8E1721029FleetCompositionPostOperation : TFSDependentConcurrentOperation <TFSOperationDependencyResult>
{
    // Error parsing type: , name: resultEntry
    // Error parsing type: , name: resultState
    // Error parsing type: , name: resultError
    // Error parsing type: , name: composition
    // Error parsing type: , name: service
    // Error parsing type: , name: commandHandler
}

- (void).cxx_destruct;
- (id)init;
- (void)run;
- (void)cancel;
@property(nonatomic, copy) NSError *resultError;
@property(nonatomic) unsigned long long resultState; // @synthesize resultState;

@end

