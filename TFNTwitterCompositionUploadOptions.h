//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>

@class TFNTwitterNudgeExperimentModel;

@interface TFNTwitterCompositionUploadOptions : NSObject <NSCopying>
{
    _Bool _preferToCancelOnBackgroundTaskExpiration;
    TFNTwitterNudgeExperimentModel *_nudgeExperimentModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNTwitterNudgeExperimentModel *nudgeExperimentModel; // @synthesize nudgeExperimentModel=_nudgeExperimentModel;
@property(nonatomic) _Bool preferToCancelOnBackgroundTaskExpiration; // @synthesize preferToCancelOnBackgroundTaskExpiration=_preferToCancelOnBackgroundTaskExpiration;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

