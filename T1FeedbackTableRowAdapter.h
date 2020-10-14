//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsTableRowAdapter.h>

#import <T1Twitter/UIScrollViewDelegate-Protocol.h>

@class NSMapTable, NSString, T1FeedbackCell, TFNTwitterAccount;

@interface T1FeedbackTableRowAdapter : TFNItemsTableRowAdapter <UIScrollViewDelegate>
{
    TFNTwitterAccount *_account;
    T1FeedbackCell *_feedbackCell;
    NSMapTable *_dataViewControllerMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *dataViewControllerMap; // @synthesize dataViewControllerMap=_dataViewControllerMap;
@property(retain, nonatomic) T1FeedbackCell *feedbackCell; // @synthesize feedbackCell=_feedbackCell;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (id)dataViewController:(id)arg1 calculatedLayoutMetricsForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (unsigned long long)dataViewController:(id)arg1 sectionBreaksForIndexPath:(id)arg2;
- (void)_scribeRemovalOfDismissibleItem:(id)arg1 fromDataViewController:(id)arg2;
- (void)_scribeUndoDismissalOfDismissibleItem:(id)arg1 inDataViewController:(id)arg2;
- (void)_scribeFeedbackForDismissibleItem:(id)arg1 inController:(id)arg2;
- (id)_scribeParametersForDismissibleItem:(id)arg1;
- (void)_undoDismissOfItem:(id)arg1 inController:(id)arg2;
- (void)_sendFeedbackForDismissibleItemIfNeeded:(id)arg1 feedback:(id)arg2 account:(id)arg3 undo:(_Bool)arg4;
- (void)_scrollingDidEnd:(id)arg1;
- (void)_stopObservingScrollingInDataViewControllerIfNecessary:(id)arg1;
- (void)_startObservingScrollingInDataViewController:(id)arg1;
- (id)_representedStreamObjectForItem:(id)arg1 inStream:(id)arg2;
- (void)_removeDismissibleItem:(id)arg1 fromDataViewController:(id)arg2;
- (id)_dismissingFeedbackSectionControllersInDataViewController:(id)arg1;
- (void)_removeFeedbackItemsFromDataViewControllerIfNecessary:(id)arg1;
- (void)_configureCell:(id)arg1 forFeedbackItem:(id)arg2 withLayoutMetrics:(id)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)dataViewController:(id)arg1 didSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)init;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

