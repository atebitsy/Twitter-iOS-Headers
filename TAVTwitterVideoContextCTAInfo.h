//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface TAVTwitterVideoContextCTAInfo : NSObject
{
    unsigned long long _type;
    unsigned long long _openWebsiteType;
    NSString *_urlString;
    NSNumber *_appId;
    NSString *_appName;
}

+ (id)withAmplifyVMAPPlaylistCTA:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSNumber *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(nonatomic) unsigned long long openWebsiteType; // @synthesize openWebsiteType=_openWebsiteType;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)description;
- (id)initWatchURLCTANotUrgentWithURLString:(id)arg1;
- (id)initWatchURLCTAWithURLString:(id)arg1;
- (id)initImageOpenURLCTAWithURLString:(id)arg1 openWebsiteType:(unsigned long long)arg2;
- (id)initOpenURLCTAWithURLString:(id)arg1 openWebsiteType:(unsigned long long)arg2;
- (id)initAppStoreCTAWithAppId:(id)arg1 appName:(id)arg2 urlString:(id)arg3;

@end

