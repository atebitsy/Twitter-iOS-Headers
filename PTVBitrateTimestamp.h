//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface PTVBitrateTimestamp : NSObject
{
    int _bitrate;
    NSDate *_startDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) int bitrate; // @synthesize bitrate=_bitrate;
- (id)initWithBitrate:(int)arg1 startDate:(id)arg2;

@end

