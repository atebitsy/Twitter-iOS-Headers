//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterGraphicsFilters/NSObject-Protocol.h>

@class NSString, TGFFilterRenderContext;

@protocol TGFFilter <NSObject>
@property(readonly, nonatomic) float inertAdjustmentValue;
@property(readonly, nonatomic) float defaultAdjustmentValue;
@property(readonly, nonatomic) float maxAdjustmentValue;
@property(readonly, nonatomic) float minAdjustmentValue;
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)apply:(TGFFilterRenderContext *)arg1;

@optional
- (_Bool)isSupportedOnCurrentDevice;
@end

