//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSIndexPath, T1NudgeItem, T1NudgeItemViewAdapter;

@protocol T1NudgeItemViewAdapterDelegate <NSObject>
- (void)nudgeItemAdapter:(T1NudgeItemViewAdapter *)arg1 shouldResizeForItem:(T1NudgeItem *)arg2 atIndexPath:(NSIndexPath *)arg3 fromContextAction:(_Bool)arg4;
@end

