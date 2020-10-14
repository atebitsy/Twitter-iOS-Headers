//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeSDK/PTVImageLoaderSource-Protocol.h>

@class NSString;
@protocol PTVProfileImageEntity;

@interface PTVImageLoaderEntitySource : NSObject <PTVImageLoaderSource>
{
    id <PTVProfileImageEntity> _profileImageEntity;
    unsigned long long _formatType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long formatType; // @synthesize formatType=_formatType;
@property(readonly, nonatomic) id <PTVProfileImageEntity> profileImageEntity; // @synthesize profileImageEntity=_profileImageEntity;
- (void)performLoad:(id)arg1 withCachePolicy:(long long)arg2;
- (id)context;
- (_Bool)isEqualToEntitySource:(id)arg1;
- (_Bool)isEqualToSource:(id)arg1;
- (id)initWithProfileImageEntity:(id)arg1 formatType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

