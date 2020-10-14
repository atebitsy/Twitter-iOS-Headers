//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1ErrorDataViewAdapterDelegate-Protocol.h>
#import <T1Twitter/T1FeedbackActionProvider-Protocol.h>
#import <T1Twitter/T1LoadingGapDataViewAdapterDelegate-Protocol.h>
#import <T1Twitter/T1RelevancePromptTableRowAdapterDelegate-Protocol.h>
#import <T1Twitter/T1TimelineMessageEntryTableRowAdapterDelegate-Protocol.h>
#import <T1Twitter/T1URTTimelineFeedbackCoordinatorProvider-Protocol.h>
#import <T1Twitter/T1URTTimelineTombstoneItemViewModelDelegate-Protocol.h>
#import <T1Twitter/T1UpdateIndicatorDelegate-Protocol.h>
#import <T1Twitter/TFNMarkAsViewedDelegate-Protocol.h>
#import <T1Twitter/TFNTimelineDismissedItemDelegate-Protocol.h>
#import <T1Twitter/TFNTooltipDelegate-Protocol.h>
#import <T1Twitter/THPinToTopSubscriptionManagerDelegate-Protocol.h>
#import <T1Twitter/UIActionSheetDelegate-Protocol.h>
#import <T1Twitter/UIDataSourceModelAssociation-Protocol.h>

@class NSNumber, NSString, T1FleetLineHeaderViewController, T1HomeControllerPerformanceMonitor, T1HomeTimelineUIReloadMonitor, T1PromptNavigationHelper, T1ScrollDistanceLogger, T1StatusLiveEngagementManager, T1StatusTableRowAdapter, T1TimelineCoverPresenter, T1URTContentHoistTrackingHelper, T1URTContextTrackingHelper, T1URTTimelineFeedbackCoordinator, T1UpdateIndicator, TFNExpandingButtonItem, TFNItemsSectionTransformer, TFNMarkAsViewedHelper, TFNTwitterAccount, TFNTwitterHomeTimeline, TFSTimer, TFSTwitterScribeContext, THPinToTopSubscriptionManager, TIPImagePipeline;
@protocol T1URTItemVisibilityMonitor;

@interface T1HomeTimelineItemsViewController : TFNItemsDataViewController <TFNMarkAsViewedDelegate, UIActionSheetDelegate, UIDataSourceModelAssociation, T1ErrorDataViewAdapterDelegate, T1TimelineMessageEntryTableRowAdapterDelegate, T1LoadingGapDataViewAdapterDelegate, T1URTTimelineTombstoneItemViewModelDelegate, TFNTimelineDismissedItemDelegate, T1UpdateIndicatorDelegate, T1FeedbackActionProvider, T1RelevancePromptTableRowAdapterDelegate, THPinToTopSubscriptionManagerDelegate, TFNTooltipDelegate, T1URTTimelineFeedbackCoordinatorProvider>
{
    T1ScrollDistanceLogger *_scrollDistanceLogger;
    T1StatusTableRowAdapter *_statusAdapter;
    T1TimelineCoverPresenter *_coverPresenter;
    TFNMarkAsViewedHelper *_markAsViewedHelper;
    _Bool _isLayoutSubviewsDone;
    _Bool _restoredPersistedScrollPosition;
    _Bool _needsPersistedScrollPositionRestore;
    _Bool _loadGapUpwards;
    NSNumber *_nextUpdateRestoreScrollPositionTypeOverride;
    _Bool _needsJumpToTop;
    _Bool _isTopRowVisible;
    TFNItemsSectionTransformer *_sectionTransformer;
    _Bool _shouldNotifyTableUpdatedFromStreamAPIUpdate;
    T1FleetLineHeaderViewController *_fleetsViewController;
    id _readinessPerfToken;
    _Bool _isRestoringPersistedScrollPosition;
    _Bool _didLayoutBarItems;
    _Bool _didScribeEndOfStream;
    TFNTwitterAccount *_account;
    TFNTwitterHomeTimeline *_timeline;
    T1UpdateIndicator *_updateIndicator;
    TFSTwitterScribeContext *_timelineScribeContext;
    T1PromptNavigationHelper *_promptNavigationHelper;
    T1StatusLiveEngagementManager *_livePipelineTweetManager;
    THPinToTopSubscriptionManager *_pinToTopSubscriptionManager;
    TFNExpandingButtonItem *_composeTweetActionButtonItem;
    id <T1URTItemVisibilityMonitor> _itemVisibilityMonitor;
    T1URTContextTrackingHelper *_updateContextTrackingHelper;
    T1URTContentHoistTrackingHelper *_timelineUpdateHoistTrackingHelper;
    T1HomeTimelineUIReloadMonitor *_uiReloadMonitor;
    TFSTimer *_irregularLoadingTimer;
    TIPImagePipeline *_imagePipeline;
    T1HomeControllerPerformanceMonitor *_performanceMonitor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) T1HomeControllerPerformanceMonitor *performanceMonitor; // @synthesize performanceMonitor=_performanceMonitor;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
@property(retain, nonatomic) TFSTimer *irregularLoadingTimer; // @synthesize irregularLoadingTimer=_irregularLoadingTimer;
@property(retain, nonatomic) T1HomeTimelineUIReloadMonitor *uiReloadMonitor; // @synthesize uiReloadMonitor=_uiReloadMonitor;
@property(nonatomic) _Bool didScribeEndOfStream; // @synthesize didScribeEndOfStream=_didScribeEndOfStream;
@property(nonatomic) _Bool didLayoutBarItems; // @synthesize didLayoutBarItems=_didLayoutBarItems;
@property(retain, nonatomic) T1URTContentHoistTrackingHelper *timelineUpdateHoistTrackingHelper; // @synthesize timelineUpdateHoistTrackingHelper=_timelineUpdateHoistTrackingHelper;
@property(retain, nonatomic) T1URTContextTrackingHelper *updateContextTrackingHelper; // @synthesize updateContextTrackingHelper=_updateContextTrackingHelper;
@property(retain, nonatomic) id <T1URTItemVisibilityMonitor> itemVisibilityMonitor; // @synthesize itemVisibilityMonitor=_itemVisibilityMonitor;
@property(retain, nonatomic) TFNExpandingButtonItem *composeTweetActionButtonItem; // @synthesize composeTweetActionButtonItem=_composeTweetActionButtonItem;
@property(readonly, nonatomic) THPinToTopSubscriptionManager *pinToTopSubscriptionManager; // @synthesize pinToTopSubscriptionManager=_pinToTopSubscriptionManager;
@property(readonly, nonatomic) T1StatusLiveEngagementManager *livePipelineTweetManager; // @synthesize livePipelineTweetManager=_livePipelineTweetManager;
@property(readonly, nonatomic) T1PromptNavigationHelper *promptNavigationHelper; // @synthesize promptNavigationHelper=_promptNavigationHelper;
@property(readonly, copy, nonatomic) TFSTwitterScribeContext *timelineScribeContext; // @synthesize timelineScribeContext=_timelineScribeContext;
@property(retain, nonatomic) T1UpdateIndicator *updateIndicator; // @synthesize updateIndicator=_updateIndicator;
@property(readonly, nonatomic) TFNTwitterHomeTimeline *timeline; // @synthesize timeline=_timeline;
@property(readonly, nonatomic) _Bool isRestoringPersistedScrollPosition; // @synthesize isRestoringPersistedScrollPosition=_isRestoringPersistedScrollPosition;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (id)_representedItemsForStreamItem:(id)arg1;
- (_Bool)_shouldAllowTableViewScrolling;
- (_Bool)_isOnlyShowingErrorItem;
- (_Bool)_isEmptyAfterLoading;
- (_Bool)_isEmpty;
- (void)_registerAdaptersAndTransformersThatRequireStream:(id)arg1;
- (void)_setupStreamFromTimeline;
- (void)_loadGap:(id)arg1 withSource:(long long)arg2 loadUpwards:(_Bool)arg3;
- (void)_loadBottomWithSource:(long long)arg1;
- (void)_t1_sanityCheckNonEmptyStreamObjects:(id)arg1;
- (long long)_scribeImpressionPositionForItemAtIndexPath:(id)arg1;
- (id)_scribeParametersFromParameters:(id)arg1 byIncludingPositionForItemAtIndexPath:(id)arg2;
- (id)_statusAtIndexPath:(id)arg1;
- (unsigned long long)_statusOptionsForAdapter:(id)arg1 args:(id)arg2 options:(unsigned long long)arg3;
- (void)_emptyMessagePromptTappedWithScribeContext:(id)arg1;
- (void)markAsViewedHelper:(id)arg1 didViewCells:(id)arg2;
- (void)didRestoreTimelineItem:(id)arg1;
- (void)dismissTimelineItem:(id)arg1 withFeedbackModule:(id)arg2 derivedFromAction:(id)arg3;
- (void)timelineMessageEntryTableRowAdapter:(id)arg1 handleURL:(id)arg2;
- (void)timelineMessageEntryTableRowAdapter:(id)arg1 dismissItem:(id)arg2;
- (id)scribeContextForIndexPath:(id)arg1;
- (id)scribeImpressionParametersForIndexPath:(id)arg1;
- (id)scribeItemForIndexPath:(id)arg1;
- (id)scribeComponentForIndexPath:(id)arg1;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (id)itemsAnimatorSectionsToAnimateFrom:(id)arg1;
- (void)applicationWillEnterForegroundFromBackground:(id)arg1;
- (void)_t1_accountUserDefaultsDidChange:(id)arg1;
- (void)_streamDidUpdateFromAPI:(id)arg1;
- (void)_streamDidUpdateWithDeletedStreamObject:(id)arg1;
- (void)_performIncrementalUpdate:(id)arg1 animated:(_Bool)arg2;
- (void)_streamDidUpdateWithNotification:(id)arg1;
- (_Bool)_shouldPerformIncrementalUpdate:(id)arg1;
- (void)_tweetReported:(id)arg1;
- (void)_streamDidUpdate;
- (void)_outboxChanged:(id)arg1;
- (void)didEndDisplayingCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3 inDataViewController:(id)arg4 withPreviousDataViewAdapter:(id)arg5 options:(id)arg6;
- (void)willDisplayCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForDummyObject:(id)arg2 atIndexPath:(id)arg3;
- (void)relevancePromptTableRowAdapter:(id)arg1 processUpdatesForRelevancePrompt:(id)arg2;
- (void)tombstoneDidTapViewTweetWithTombstoneViewModel:(id)arg1;
- (void)loadingGapDataViewAdapter:(id)arg1 didSelectGapItem:(id)arg2 loadUpwards:(_Bool)arg3;
- (void)errorItemTapped:(id)arg1;
- (void)_restorePersistedScrollPositionIfNeeded;
- (void)_setNeedsPersistedScrollPositionRestore;
- (_Bool)_restorePersistedScrollPosition;
- (void)_persistScrollPosition;
- (id)scrollPositionIdentifierForElementAtIndexPath:(id)arg1 inView:(id)arg2;
- (id)indexPathForElementWithModelIdentifier:(id)arg1 inView:(id)arg2;
- (id)modelIdentifierForElementAtIndexPath:(id)arg1 inView:(id)arg2;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)canShowUpdateIndicator:(id)arg1 withContentNotification:(id)arg2;
- (void)_loadTopWithSource:(long long)arg1;
- (void)loadTop:(id)arg1;
- (_Bool)isLoadingTop;
@property(readonly, nonatomic) T1URTTimelineFeedbackCoordinator *feedbackCoordinator;
- (CDUnknownBlockType)didProvideModerateFeedbackBlockForStatus:(id)arg1;
- (CDUnknownBlockType)didProvideShowLessOftenFeedbackForStatus:(id)arg1;
- (id)negativeFeedbackActionsForStatus:(id)arg1;
- (_Bool)supportsImmediateDismissOfStatus:(id)arg1;
- (void)processImmediateDismissForStatus:(id)arg1;
- (id)t1_actionsViewControllerForStatus:(id)arg1 account:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 doneBlock:(CDUnknownBlockType)arg5;
- (void)pinToTopSubscriptionManagerLoadTop:(id)arg1 source:(long long)arg2;
- (_Bool)pinToTopSubscriptionManagerShouldEnablePinToTop:(id)arg1;
- (void)_t1_processInitialHomeLoadIfNecessaryWithLoadSource:(long long)arg1;
- (void)_t1_showSwitchToastIfNecessaryWithLoadSource:(long long)arg1;
- (void)_t1_showToastForTimelineSwitchWithDuration:(double)arg1;
- (void)_t1_showToastForTimelineSwitch;
- (void)_t1_processManualTimelineVariantSwitch;
- (void)_t1_processAutoSwitchedToTopWithLoadSource:(long long)arg1;
- (void)_t1_checkForAutomaticSwitchToTop;
- (_Bool)t1_showsPeopleAction;
- (_Bool)t1_showsDashAction;
- (void)_t1_cleanupTooltips;
- (void)_t1_triggerImmediateDismissTooltip;
- (id)_t1_registerTooltipForEvent:(id)arg1 text:(id)arg2;
- (void)_t1_initializeTooltips;
- (_Bool)t1_showsActionButton;
- (void)tfn_navigationControllerDidLayoutBarItems;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (void)tooltipDidTap:(id)arg1;
- (_Bool)tooltipShouldPresent:(id)arg1;
- (_Bool)flashesScrollIndicatorsOnUpdate;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)createScrollPerformanceMetricsWithDelegate:(id)arg1;
- (void)_t1_initializeFleets;
- (void)viewDidLoad;
- (void)setNeedsUpdate:(_Bool)arg1;
- (id)_updatedSections;
- (id)_emptyContentMessage;
- (void)_update;
- (void)update:(_Bool)arg1;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithAccount:(id)arg1 timeline:(id)arg2;
- (id)initWithCollectionViewLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

