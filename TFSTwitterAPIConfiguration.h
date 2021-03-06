//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSTwitterAPI/TFSTwitterAPIConfiguration-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURLCache, TFSTwitterAPIGraphQLConfiguration;
@protocol OS_dispatch_queue, TFSTwitterAPIURLBaseProvider;

@interface TFSTwitterAPIConfiguration : NSObject <TFSTwitterAPIConfiguration>
{
    NSDictionary *_optionalStatusParametersDictionary;
    NSDictionary *_optionalUserParametersDictionary;
    NSArray *_additionalContentDecoders;
    NSArray *_additionalContentEncoders;
    TFSTwitterAPIGraphQLConfiguration *_graphQLConfiguration;
    NSObject<OS_dispatch_queue> *_urlCacheQueue;
    NSString *_cardsPlatformIdentifier;
    id <TFSTwitterAPIURLBaseProvider> _URLBaseProvider;
    NSURLCache *_URLCache;
}

+ (void)_tfs_mergeCommaSeparatedEntriesInDictionariesWithKey:(id)arg1 sourceDictionary:(id)arg2 destinationDictionary:(id)arg3;
+ (void)_tfs_mergeEntriesInDictionariesWithKey:(id)arg1 sourceDictionary:(id)arg2 destinationDictionary:(id)arg3;
+ (void)_tfs_mergeEntriesInDictionary:(id)arg1 name:(id)arg2 toDictionary:(id)arg3;
+ (id)mergedCommaSeparatedParameters:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) TFSTwitterAPIGraphQLConfiguration *graphQLConfiguration; // @synthesize graphQLConfiguration=_graphQLConfiguration;
@property(readonly, nonatomic) id <TFSTwitterAPIURLBaseProvider> URLBaseProvider; // @synthesize URLBaseProvider=_URLBaseProvider;
@property(readonly, copy, nonatomic) NSString *cardsPlatformIdentifier; // @synthesize cardsPlatformIdentifier=_cardsPlatformIdentifier;
- (id)configurationWithAdditionalStatusParameters:(id)arg1 graphQLConfiguration:(id)arg2;
- (id)additionalContentEncoders;
- (id)additionalContentDecoders;
- (id)momentsParametersDictionary;
- (id)cardsParametersDictionary;
- (id)userParametersDictionary;
- (id)statusParametersDictionary;
@property(readonly, nonatomic) NSURLCache *URLCache; // @synthesize URLCache=_URLCache;
- (id)initWithCardsPlatformIdentifier:(id)arg1 URLBaseProvider:(id)arg2 graphQLConfiguration:(id)arg3 URLCacheProvider:(CDUnknownBlockType)arg4 optionalStatusParametersDictionary:(id)arg5 optionalUserParametersDictionary:(id)arg6 additionalContentDecoders:(id)arg7 additionalContentEncoders:(id)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

