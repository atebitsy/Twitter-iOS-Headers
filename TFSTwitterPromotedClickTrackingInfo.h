//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSTwitterCore/NSCoding-Protocol.h>

@class NSDictionary;

@interface TFSTwitterPromotedClickTrackingInfo : NSObject <NSCoding>
{
    NSDictionary *_urlParams;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *urlParams; // @synthesize urlParams=_urlParams;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithURLParameters:(id)arg1;
- (id)init;

@end

