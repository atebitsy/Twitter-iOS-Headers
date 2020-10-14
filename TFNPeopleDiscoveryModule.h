//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSTwitterScribableItem-Protocol.h>

@class NSDictionary, NSString, TFNPeopleDiscoveryModuleLayout;

@interface TFNPeopleDiscoveryModule : NSObject <TFSTwitterScribableItem>
{
    NSString *_identifier;
    NSString *_name;
    NSString *_layoutIdentifier;
    TFNPeopleDiscoveryModuleLayout *_layout;
    NSString *_token;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *token; // @synthesize token=_token;
@property(readonly, nonatomic) TFNPeopleDiscoveryModuleLayout *layout; // @synthesize layout=_layout;
@property(readonly, copy, nonatomic) NSString *layoutIdentifier; // @synthesize layoutIdentifier=_layoutIdentifier;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSDictionary *scribeItem;
@property(readonly, copy, nonatomic) NSString *scribeItemImpressionID;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)initWithName:(id)arg1 identifier:(id)arg2 layoutIdentifier:(id)arg3 layout:(id)arg4 token:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long isCurrentlyFirstImpression;
@property(nonatomic) unsigned long long isDuplicateContentIDInstance;
@property(readonly, nonatomic) NSString *scribeComponent;
@property(readonly, nonatomic) NSString *scribeElement;
@property(readonly) Class superclass;

@end

