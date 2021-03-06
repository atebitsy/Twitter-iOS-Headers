//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface TNUHTMLTagParser : NSObject
{
    _Bool _valid;
    const char *_tagMap;
    NSData *_cachedPreviousChunk;
    unsigned long long _encoding;
    NSString *_tag;
    unsigned long long _maximumCacheSize;
    NSString *_parsedTagText;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *parsedTagText; // @synthesize parsedTagText=_parsedTagText;
@property(readonly, nonatomic) unsigned long long maximumCacheSize; // @synthesize maximumCacheSize=_maximumCacheSize;
@property(readonly, copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) unsigned long long encoding; // @synthesize encoding=_encoding;
- (id)_parseWithData:(id)arg1 parsedFinalLength:(unsigned long long *)arg2;
- (_Bool)_validateTagAndEncoding;
- (_Bool)continueParseWithData:(id)arg1 cacheExceeded:(_Bool *)arg2;
- (_Bool)continueParseWithData:(id)arg1;
- (id)initForTag:(id)arg1 stringEncoding:(unsigned long long)arg2 maximumCacheSize:(unsigned long long)arg3;
- (id)initForTag:(id)arg1 stringEncoding:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long currentCacheSize;

@end

