//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1StatusInlineActionsView;

@protocol T1StatusInlineActionsViewDelegate <NSObject>
- (void)inlineActionsView:(T1StatusInlineActionsView *)arg1 didTapInlineActionWithType:(unsigned long long)arg2;

@optional
- (void)inlineActionsView:(T1StatusInlineActionsView *)arg1 didLongPressInlineActionWithType:(unsigned long long)arg2;
@end

