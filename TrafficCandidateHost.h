//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TrafficCandidateHost : NSObject
{
    NSString *_hostname;
    NSString *_measurementUrl;
    NSDictionary *_context;
}

+ (id)modelWithResponseDictionary:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *measurementUrl; // @synthesize measurementUrl=_measurementUrl;
@property(readonly, copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryValue;
- (id)initWithHostName:(id)arg1 measurementUrl:(id)arg2 context:(id)arg3;

@end

