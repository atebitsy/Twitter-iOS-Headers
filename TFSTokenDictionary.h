//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TFSTokenDictionary : NSObject
{
    NSMutableArray *_tokenEntryLinks;
    NSMutableArray *_entries;
}

+ (id)typeaheadTokensWithString:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *entries; // @synthesize entries=_entries;
- (unsigned long long)entryCount;
- (unsigned long long)tokenCount;
- (void)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)replaceEntryAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)allEntries;
- (id)substringEntriesForPartialToken:(id)arg1;
- (id)entriesForPartialToken:(id)arg1;
- (void)regenerateLookupIndex;
- (void)addObject:(id)arg1 forTokens:(id)arg2;
- (id)init;

@end

