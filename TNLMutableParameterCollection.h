//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterNetworkLayer/TNLParameterCollection.h>

@interface TNLMutableParameterCollection : TNLParameterCollection
{
}

- (void)removeAllParameters;
- (void)setParameterValue:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)addParametersFromParameterCollection:(id)arg1;
- (void)addParametersFromParameterCollection:(id)arg1 combineRepeatingKeys:(_Bool)arg2;
- (void)addParametersFromDictionary:(id)arg1 withFormattingMode:(long long)arg2 combineRepeatingKeys:(_Bool)arg3 forKey:(id)arg4;
- (void)addParametersDirectlyFromDictionary:(id)arg1 combineRepeatingKeys:(_Bool)arg2;
- (void)addParametersFromURL:(id)arg1 parsingParameterTypes:(long long)arg2 options:(long long)arg3;
- (void)addParametersFromURL:(id)arg1 parsingParameterTypes:(long long)arg2;
- (void)addParametersWithURLEncodedString:(id)arg1 options:(long long)arg2;
- (void)addParametersWithURLEncodedString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParameterCollection:(id)arg1;
- (id)initWithURL:(id)arg1 parsingParameterTypes:(long long)arg2 options:(long long)arg3;
- (id)initWithDictionary:(id)arg1;
- (id)initWithURLEncodedString:(id)arg1 options:(long long)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end

