//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TNLParameterCollection;

@interface T1PeopleDiscoveryPivotParameters : NSObject
{
    NSString *_stringValue;
    TNLParameterCollection *_parameterCollection;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) TNLParameterCollection *parameterCollection; // @synthesize parameterCollection=_parameterCollection;
@property(readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (id)init;
- (id)initWithPivotURL:(id)arg1 source:(long long)arg2;

@end

