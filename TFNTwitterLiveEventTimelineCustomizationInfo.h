//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>

@class NSString, TFSTwitterEntityImageInfo, UIColor;

@interface TFNTwitterLiveEventTimelineCustomizationInfo : NSObject <NSCopying>
{
    UIColor *_titleColor;
    TFSTwitterEntityImageInfo *_titleBadgeEntity;
    NSString *_titleRGBColorString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *titleRGBColorString; // @synthesize titleRGBColorString=_titleRGBColorString;
@property(readonly, nonatomic) TFSTwitterEntityImageInfo *titleBadgeEntity; // @synthesize titleBadgeEntity=_titleBadgeEntity;
@property(readonly, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
- (_Bool)isEqualToTimelineCustomizationInfo:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)toJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithTitleRGBColorString:(id)arg1 titleBadgeEntity:(id)arg2;
- (id)init;

@end

