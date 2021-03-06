//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSTwitterScribableItem-Protocol.h>

@class NSDictionary, NSString;

@interface TFNTwitterMomentScribableItem : NSObject <TFSTwitterScribableItem>
{
    NSString *_momentID;
    NSString *_contextualID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *contextualID; // @synthesize contextualID=_contextualID;
@property(readonly, nonatomic) NSString *momentID; // @synthesize momentID=_momentID;
@property(readonly, copy, nonatomic) NSDictionary *scribeItem;
@property(readonly, copy, nonatomic) NSString *scribeItemImpressionID;
- (id)initWithMomentID:(id)arg1 contextualID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long isCurrentlyFirstImpression;
@property(nonatomic) unsigned long long isDuplicateContentIDInstance;
@property(readonly, nonatomic) NSString *scribeComponent;
@property(readonly, nonatomic) NSString *scribeElement;
@property(readonly) Class superclass;

@end

