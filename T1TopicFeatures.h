//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TFNTwitterFeatureSwitches;

@interface T1TopicFeatures : NSObject
{
    id <TFNTwitterFeatureSwitches> _featureSwitches;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TFNTwitterFeatureSwitches> featureSwitches; // @synthesize featureSwitches=_featureSwitches;
- (_Bool)isTopicPeekSearchEnabled;
- (_Bool)isTopicPeekHomeEnabled;
- (_Bool)isTopicLandingPageShareEnabled;
- (_Bool)isTopicsLandingPageEnabled;
- (id)initWithFeatureSwitches:(id)arg1;
- (id)init;

@end

