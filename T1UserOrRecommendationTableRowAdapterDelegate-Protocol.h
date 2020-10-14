//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSDictionary, NSError, NSIndexPath, T1UserOrRecommendationTableRowAdapter, TFNDataViewController, TFSTwitterUserReference;
@protocol T1UserViewActionControlProvider;

@protocol T1UserOrRecommendationTableRowAdapterDelegate <NSObject>

@optional
- (id <T1UserViewActionControlProvider>)userRowAdapter:(T1UserOrRecommendationTableRowAdapter *)arg1 actionControlProviderForDataViewController:(TFNDataViewController *)arg2 item:(id)arg3 options:(NSDictionary *)arg4 indexPath:(NSIndexPath *)arg5;
- (_Bool)userRowAdapter:(T1UserOrRecommendationTableRowAdapter *)arg1 shouldShowBioForUserReference:(TFSTwitterUserReference *)arg2;
- (_Bool)userRowAdapter:(T1UserOrRecommendationTableRowAdapter *)arg1 isCheckmarkInteractionEnabledForUserReference:(TFSTwitterUserReference *)arg2;
- (_Bool)userRowAdapter:(T1UserOrRecommendationTableRowAdapter *)arg1 isCheckedForUserReference:(TFSTwitterUserReference *)arg2;
- (long long)userRowAdapter:(T1UserOrRecommendationTableRowAdapter *)arg1 caretTypeForItem:(id)arg2 withOptions:(NSDictionary *)arg3;
- (void)userRowAdapter:(T1UserOrRecommendationTableRowAdapter *)arg1 didTapCaretForItem:(id)arg2 withOptions:(NSDictionary *)arg3 sender:(id)arg4;
- (void)userRowAdapter:(T1UserOrRecommendationTableRowAdapter *)arg1 didChangeChecked:(_Bool)arg2 forUserReference:(TFSTwitterUserReference *)arg3;
- (void)userRowAdapter:(T1UserOrRecommendationTableRowAdapter *)arg1 didPerformAction:(unsigned long long)arg2 forItem:(id)arg3 withOptions:(NSDictionary *)arg4 success:(_Bool)arg5 error:(NSError *)arg6;
@end

