//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFNActivityViewController, TFNLayoutMetrics, UIViewController;

@interface T1ActivityParameters : NSObject
{
    _Bool _shouldReplaceAddWithRemoveBookmark;
    TFNLayoutMetrics *_layoutMetrics;
    UIViewController *_presenterViewController;
    TFNActivityViewController *_activityViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property(nonatomic) _Bool shouldReplaceAddWithRemoveBookmark; // @synthesize shouldReplaceAddWithRemoveBookmark=_shouldReplaceAddWithRemoveBookmark;
@property(retain, nonatomic) UIViewController *presenterViewController; // @synthesize presenterViewController=_presenterViewController;
@property(retain, nonatomic) TFNLayoutMetrics *layoutMetrics; // @synthesize layoutMetrics=_layoutMetrics;

@end

