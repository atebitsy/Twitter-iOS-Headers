//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface TFNHashflag : NSObject
{
    NSString *_hashtag;
    NSURL *_imageURL;
    NSArray *_animations;
    double _startTime;
    double _endTime;
}

+ (id)placeholder;
- (void).cxx_destruct;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, copy, nonatomic) NSArray *animations; // @synthesize animations=_animations;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *hashtag; // @synthesize hashtag=_hashtag;
- (_Bool)isActiveOnDate:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)initWithHashtag:(id)arg1 imageURL:(id)arg2 animations:(id)arg3 startTime:(double)arg4 endTime:(double)arg5;

@end

