//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TFNTwitterMomentCapsuleBadge;

@interface TFNTwitterMomentCapsuleCTA : NSObject
{
    NSString *_text;
    NSString *_uri;
    TFNTwitterMomentCapsuleBadge *_badge;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFNTwitterMomentCapsuleBadge *badge; // @synthesize badge=_badge;
@property(readonly, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithText:(id)arg1 uri:(id)arg2 badge:(id)arg3;

@end

