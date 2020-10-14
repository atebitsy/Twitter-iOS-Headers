//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>

@class TFNLayoutMetrics;
@protocol T1FlexibleLayoutItem;

@interface T1FlexibleLayoutFrameArguments : NSObject <NSCopying>
{
    _Bool _forSizing;
    TFNLayoutMetrics *_layoutMetrics;
    id <T1FlexibleLayoutItem> _previousItem;
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _contentSpacing;
    struct UIEdgeInsets _previousContentSpacing;
    struct CGRect _previousContentBounds;
    struct CGRect _layoutBounds;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forSizing; // @synthesize forSizing=_forSizing;
@property(nonatomic) struct CGRect layoutBounds; // @synthesize layoutBounds=_layoutBounds;
@property(nonatomic) struct CGRect previousContentBounds; // @synthesize previousContentBounds=_previousContentBounds;
@property(retain, nonatomic) id <T1FlexibleLayoutItem> previousItem; // @synthesize previousItem=_previousItem;
@property(nonatomic) struct UIEdgeInsets previousContentSpacing; // @synthesize previousContentSpacing=_previousContentSpacing;
@property(nonatomic) struct UIEdgeInsets contentSpacing; // @synthesize contentSpacing=_contentSpacing;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) TFNLayoutMetrics *layoutMetrics; // @synthesize layoutMetrics=_layoutMetrics;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

