//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface T1FoundMediaConfiguration : NSObject
{
    _Bool _trendingEnabled;
    NSString *_provider;
    long long _imageFormat;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isTrendingEnabled) _Bool trendingEnabled; // @synthesize trendingEnabled=_trendingEnabled;
@property(readonly, nonatomic) long long imageFormat; // @synthesize imageFormat=_imageFormat;
@property(readonly, copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithProvider:(id)arg1 trendingEnabled:(_Bool)arg2 imageFormat:(long long)arg3;
- (id)init;

@end

