//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVViewController.h>

#import <PeriscopeSDK/LHLSLogListener-Protocol.h>
#import <PeriscopeSDK/MFMailComposeViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVAmplifyProgramsViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVBroadcastDetailsViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVBroadcastModerationReportViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVBroadcastOverflowMenuViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVBroadcastOverflowViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVBroadcastPublisherDelegate-Protocol.h>
#import <PeriscopeSDK/PTVBroadcastViewDelegate-Protocol.h>
#import <PeriscopeSDK/PTVChangeExpirationActionSheetControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVChatControllerObserver-Protocol.h>
#import <PeriscopeSDK/PTVCopyrightViolationViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVFileRecordDelegate-Protocol.h>
#import <PeriscopeSDK/PTVFocusIndicatorDelegate-Protocol.h>
#import <PeriscopeSDK/PTVGiftingContributorsTableViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVGuestCallerControllerObserver-Protocol.h>
#import <PeriscopeSDK/PTVGuestPublishingViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVLocationServicesDelegate-Protocol.h>
#import <PeriscopeSDK/PTVManageGuestCallersViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVModalPresentationManagerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVOverflowViewControllerAppearanceDelegate-Protocol.h>
#import <PeriscopeSDK/PTVPhoneCallObserver-Protocol.h>
#import <PeriscopeSDK/PTVPipelineContainerViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVPublishingViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVReadOnlyModalViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVScreenshotObserverDelegate-Protocol.h>
#import <PeriscopeSDK/PTVShareBroadcastCoordinatorDelegate-Protocol.h>
#import <PeriscopeSDK/PTVSketchInputViewDelegate-Protocol.h>
#import <PeriscopeSDK/PTVTypeAheadSuggestionsTableViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVUserModalFollowshipChangeDelegate-Protocol.h>
#import <PeriscopeSDK/PTVVideoOverlayViewControllerBroadcasterDelegate-Protocol.h>
#import <PeriscopeSDK/PTVVideoOverlayViewControllerCameraDelegate-Protocol.h>
#import <PeriscopeSDK/PTVVideoOverlayViewControllerChatDelegate-Protocol.h>
#import <PeriscopeSDK/PTVVideoReplayDelegate-Protocol.h>

@class CLLocation, NSArray, NSDate, NSObject, NSString, NSTimer, PTVAccessBroadcaster, PTVAsyncLog, PTVBroadcast, PTVBroadcastPublisher, PTVChatController, PTVCreateBroadcastAnalyticsManager, PTVFocusIndicator, PTVGuestPublishingViewController, PTVLocationServices, PTVPipelineContainerViewController, PTVPublishingViewController, PTVScreenshotObserver, PTVShareBroadcastCoordinator, PTVSignal, PTVSketchPaletteViewController, PTVSketchTouchInterpreter, PTVTwitterAuthenticationModel, PTVTypeAheadSuggestionsTableViewController, PTVVideoOverlayViewController, PTVWorkClientWithCompletion, UIImage, UIViewController;
@protocol PTVBroadcastViewControllerDelegate, PTVCustomTwitterViewDelegate, PTVLoggedInUserProtocol, PTVModalPresentationManagerDelegate, PTVPaletteViewController, PTVTwitterCameraBroadcastStateDelegate, PTVTwitterIntegrationDelegate;

@interface PTVBroadcastViewController : PTVViewController <PTVPublishingViewControllerDelegate, PTVLocationServicesDelegate, PTVFocusIndicatorDelegate, PTVVideoOverlayViewControllerCameraDelegate, PTVVideoReplayDelegate, MFMailComposeViewControllerDelegate, PTVBroadcastPublisherDelegate, PTVScreenshotObserverDelegate, PTVBroadcastDetailsViewControllerDelegate, PTVChangeExpirationActionSheetControllerDelegate, PTVChatControllerObserver, PTVBroadcastOverflowViewControllerDelegate, PTVOverflowViewControllerAppearanceDelegate, PTVAmplifyProgramsViewControllerDelegate, PTVGiftingContributorsTableViewControllerDelegate, PTVGuestPublishingViewControllerDelegate, PTVManageGuestCallersViewControllerDelegate, PTVGuestCallerControllerObserver, PTVPhoneCallObserver, PTVCopyrightViolationViewControllerDelegate, PTVPipelineContainerViewControllerDelegate, PTVBroadcastModerationReportViewControllerDelegate, PTVFileRecordDelegate, PTVShareBroadcastCoordinatorDelegate, PTVTypeAheadSuggestionsTableViewControllerDelegate, PTVVideoOverlayViewControllerBroadcasterDelegate, PTVUserModalFollowshipChangeDelegate, PTVVideoOverlayViewControllerChatDelegate, LHLSLogListener, PTVReadOnlyModalViewControllerDelegate, PTVBroadcastViewDelegate, PTVModalPresentationManagerDelegate, PTVSketchInputViewDelegate, PTVBroadcastOverflowMenuViewControllerDelegate>
{
    NSString *_authToken;
    NSString *_authSecret;
    _Bool _isVisible;
    NSString *_startingBroadcastTitle;
    PTVTypeAheadSuggestionsTableViewController *_suggestedHashtagsTableViewController;
    PTVLocationServices *_locationManager;
    struct CLLocationCoordinate2D _lastKnownCoordinate;
    PTVFocusIndicator *_focusIndicator;
    _Bool _hasSeenLowSpaceWarning;
    PTVBroadcastViewController *_weakSelf;
    _Bool _hasHandledBroadcastStateChangeToOffline;
    _Bool _hasStartedBroadcastCreationProcessBefore;
    int _bytesPerSecond;
    _Bool _waitingForCaptureSession;
    _Bool _waitingToCreateBroadcast;
    _Bool _started;
    unsigned long long _speedTestRetryCount;
    long long _speedTestSizeInBytes;
    double _speedTestDuration;
    NSDate *_timeSinceCreateAttempt;
    unsigned long long _lastKnownLocationMessageNTPTime;
    NSDate *_timeLastKnownLocationWasSent;
    PTVPublishingViewController *_storedPublishingViewController;
    PTVGuestPublishingViewController *_storedGuestPublishingViewController;
    _Bool _isRecordingBroadcast;
    _Bool _hasAutoSavedToCameraRoll;
    NSDate *_startRecordingBroadcastDate;
    NSDate *_stopRecordingBroadcastDate;
    PTVWorkClientWithCompletion *_workClientDelegateForFetchingBlockedUser;
    PTVShareBroadcastCoordinator *_shareBroadcastCoordinator;
    PTVScreenshotObserver *_screenshotObserver;
    _Bool _didSaveBroadcastToCameraRoll;
    NSObject<PTVTwitterCameraBroadcastStateDelegate> *_twitterCameraBroadcastStateDelegate;
    unsigned long long _replayRetryCount;
    _Bool _broadcastIsOnline;
    _Bool _isVideoConnected;
    _Bool _isGuestBroadcastingSelected;
    _Bool _isApplicationResignActive;
    _Bool _isApplicationInBackground;
    _Bool _isDeviceOnThePhone;
    _Bool _isAudioScopeSelected;
    _Bool _useLargeChatFont;
    _Bool _performingSpeedTest;
    _Bool _creatingBroadcast;
    _Bool _rtmpConnectSuccess;
    _Bool _hasPresentedCopyrightViolationInterstitial;
    _Bool _shouldHideStatusBar;
    _Bool _viewWillAppearHasBeenCalled;
    _Bool _broadcastControlsDrawerIsOpen;
    _Bool _isDraggingDownSwipeToDismissView;
    id <PTVBroadcastViewControllerDelegate> _delegate;
    PTVPipelineContainerViewController *_pipelineContainerViewController;
    PTVBroadcastPublisher *_publisher;
    PTVAsyncLog *_publishingLogs;
    NSArray *_inviteeUserIDsPrePublish;
    unsigned long long _broadcastingCamera;
    PTVVideoOverlayViewController *_videoOverlayViewController;
    id <PTVCustomTwitterViewDelegate> _customTwitterViewDelegate;
    CLLocation *_twitterLocation;
    NSString *_twitterLocationDisplayname;
    UIImage *_twitterAvatar;
    NSString *_twitterPlaceholderString;
    UIImage *_twitterLocationPinImage;
    NSString *_twitterPrependedText;
    unsigned long long _twitterRemainingCharacterLimit;
    NSArray *_twitterInviteeUserIDsPrePublish;
    id <PTVModalPresentationManagerDelegate> _modalDelegate;
    NSTimer *_hashtagSuggestionsTooltipTimer;
    NSTimer *_stopBroadcastFromBackgroundTimer;
    NSTimer *_emailLogsTimer;
    NSDate *_rtmpBeginConnectDate;
    long long _rtmpConnectTimeMS;
    PTVSignal *_stopBroadcastSignal;
    NSString *_publishingRegion;
    NSTimer *_throttleLocationReportingTimer;
    PTVSketchTouchInterpreter *_sketchTouchInterpreter;
    PTVSketchPaletteViewController *_sketchPalette;
    UIViewController<PTVPaletteViewController> *_presentedPalette;
    unsigned long long _audioScopeColorIndex;
    NSArray *_recordedClips;
}

+ (Class)ShareBroadcastCoordinatorClass;
+ (id)VideoOverlayViewControllerWithPublisher:(id)arg1 ChatSectionViewController:(id)arg2;
+ (unsigned long long)BroadcastingCameraWithCameraType:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isDraggingDownSwipeToDismissView; // @synthesize isDraggingDownSwipeToDismissView=_isDraggingDownSwipeToDismissView;
@property(nonatomic) _Bool broadcastControlsDrawerIsOpen; // @synthesize broadcastControlsDrawerIsOpen=_broadcastControlsDrawerIsOpen;
@property(nonatomic) _Bool viewWillAppearHasBeenCalled; // @synthesize viewWillAppearHasBeenCalled=_viewWillAppearHasBeenCalled;
@property(readonly, nonatomic) _Bool shouldHideStatusBar; // @synthesize shouldHideStatusBar=_shouldHideStatusBar;
@property(retain) NSArray *recordedClips; // @synthesize recordedClips=_recordedClips;
@property(nonatomic) _Bool hasPresentedCopyrightViolationInterstitial; // @synthesize hasPresentedCopyrightViolationInterstitial=_hasPresentedCopyrightViolationInterstitial;
@property(nonatomic) unsigned long long audioScopeColorIndex; // @synthesize audioScopeColorIndex=_audioScopeColorIndex;
@property(retain, nonatomic) UIViewController<PTVPaletteViewController> *presentedPalette; // @synthesize presentedPalette=_presentedPalette;
@property(retain, nonatomic) PTVSketchPaletteViewController *sketchPalette; // @synthesize sketchPalette=_sketchPalette;
@property(retain, nonatomic) PTVSketchTouchInterpreter *sketchTouchInterpreter; // @synthesize sketchTouchInterpreter=_sketchTouchInterpreter;
@property(retain, nonatomic) NSTimer *throttleLocationReportingTimer; // @synthesize throttleLocationReportingTimer=_throttleLocationReportingTimer;
@property(retain, nonatomic) NSString *publishingRegion; // @synthesize publishingRegion=_publishingRegion;
@property(retain, nonatomic) PTVSignal *stopBroadcastSignal; // @synthesize stopBroadcastSignal=_stopBroadcastSignal;
@property(nonatomic) _Bool rtmpConnectSuccess; // @synthesize rtmpConnectSuccess=_rtmpConnectSuccess;
@property(nonatomic) long long rtmpConnectTimeMS; // @synthesize rtmpConnectTimeMS=_rtmpConnectTimeMS;
@property(retain, nonatomic) NSDate *rtmpBeginConnectDate; // @synthesize rtmpBeginConnectDate=_rtmpBeginConnectDate;
@property(retain, nonatomic) NSTimer *emailLogsTimer; // @synthesize emailLogsTimer=_emailLogsTimer;
@property(retain, nonatomic) NSTimer *stopBroadcastFromBackgroundTimer; // @synthesize stopBroadcastFromBackgroundTimer=_stopBroadcastFromBackgroundTimer;
@property(retain, nonatomic) NSTimer *hashtagSuggestionsTooltipTimer; // @synthesize hashtagSuggestionsTooltipTimer=_hashtagSuggestionsTooltipTimer;
@property(nonatomic) _Bool creatingBroadcast; // @synthesize creatingBroadcast=_creatingBroadcast;
@property(nonatomic) _Bool performingSpeedTest; // @synthesize performingSpeedTest=_performingSpeedTest;
@property(nonatomic) __weak id <PTVModalPresentationManagerDelegate> modalDelegate; // @synthesize modalDelegate=_modalDelegate;
@property(retain, nonatomic) NSArray *twitterInviteeUserIDsPrePublish; // @synthesize twitterInviteeUserIDsPrePublish=_twitterInviteeUserIDsPrePublish;
@property(nonatomic) unsigned long long twitterRemainingCharacterLimit; // @synthesize twitterRemainingCharacterLimit=_twitterRemainingCharacterLimit;
@property(copy, nonatomic) NSString *twitterPrependedText; // @synthesize twitterPrependedText=_twitterPrependedText;
@property(retain, nonatomic) UIImage *twitterLocationPinImage; // @synthesize twitterLocationPinImage=_twitterLocationPinImage;
@property(copy, nonatomic) NSString *twitterPlaceholderString; // @synthesize twitterPlaceholderString=_twitterPlaceholderString;
@property(retain, nonatomic) UIImage *twitterAvatar; // @synthesize twitterAvatar=_twitterAvatar;
@property(copy, nonatomic) NSString *twitterLocationDisplayname; // @synthesize twitterLocationDisplayname=_twitterLocationDisplayname;
@property(retain, nonatomic) CLLocation *twitterLocation; // @synthesize twitterLocation=_twitterLocation;
@property(nonatomic) __weak id <PTVCustomTwitterViewDelegate> customTwitterViewDelegate; // @synthesize customTwitterViewDelegate=_customTwitterViewDelegate;
@property(nonatomic) _Bool useLargeChatFont; // @synthesize useLargeChatFont=_useLargeChatFont;
@property(nonatomic) _Bool isAudioScopeSelected; // @synthesize isAudioScopeSelected=_isAudioScopeSelected;
@property(nonatomic) _Bool isDeviceOnThePhone; // @synthesize isDeviceOnThePhone=_isDeviceOnThePhone;
@property(nonatomic) _Bool isApplicationInBackground; // @synthesize isApplicationInBackground=_isApplicationInBackground;
@property(nonatomic) _Bool isApplicationResignActive; // @synthesize isApplicationResignActive=_isApplicationResignActive;
@property(nonatomic) _Bool isGuestBroadcastingSelected; // @synthesize isGuestBroadcastingSelected=_isGuestBroadcastingSelected;
@property(readonly, nonatomic) PTVVideoOverlayViewController *videoOverlayViewController; // @synthesize videoOverlayViewController=_videoOverlayViewController;
@property(nonatomic) _Bool isVideoConnected; // @synthesize isVideoConnected=_isVideoConnected;
@property(nonatomic) unsigned long long broadcastingCamera; // @synthesize broadcastingCamera=_broadcastingCamera;
@property(retain, nonatomic) NSArray *inviteeUserIDsPrePublish; // @synthesize inviteeUserIDsPrePublish=_inviteeUserIDsPrePublish;
@property(readonly, nonatomic) PTVAsyncLog *publishingLogs; // @synthesize publishingLogs=_publishingLogs;
@property(readonly, nonatomic) PTVBroadcastPublisher *publisher; // @synthesize publisher=_publisher;
@property(readonly, nonatomic) PTVPipelineContainerViewController *pipelineContainerViewController; // @synthesize pipelineContainerViewController=_pipelineContainerViewController;
@property(nonatomic) _Bool broadcastIsOnline; // @synthesize broadcastIsOnline=_broadcastIsOnline;
@property(nonatomic) __weak id <PTVBroadcastViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateStatusBarAnimated:(_Bool)arg1;
- (_Bool)shouldStatusBarBeVisible;
- (void)lhls_logWithLevel:(long long)arg1 file:(id)arg2 line:(int)arg3 message:(id)arg4;
- (void)didObserveAuthErrorWithInfo:(id)arg1;
- (void)presentBlockedUsersFromModerationReportViewController:(id)arg1;
- (void)presentSettingsFromModerationReportViewController:(id)arg1;
- (_Bool)canPresentSettingsFromModerationReportViewController:(id)arg1;
- (void)moderationReportViewController:(id)arg1 didSelectUser:(id)arg2;
- (_Bool)shouldFetchBroadcastRegularly;
- (void)updateAudioVisualizerProfileImage;
- (_Bool)isCurrentlyBroadcastingAudioScope;
- (void)updateAudioScopeVisualizerIfNeeded;
- (void)determineAudioScopePreBroadcastState;
@property(readonly, nonatomic) _Bool isAudioScopeSupported;
- (void)broadcastViewDidPressAudioScope;
- (void)dimissCopyrightViolationViewController:(id)arg1 shouldLeaveBroadcast:(_Bool)arg2;
- (void)dismissPresentedViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentCopyrightViolationInterstitialIfNeeded;
- (void)didDetectCopyrightViolation;
- (void)broadcasterDidAddGuestCallerSession:(id)arg1;
- (void)broadcasterDidCompleteCountdownForGuestCallerSession:(id)arg1;
- (void)broadcasterWillCancelCountdownForGuestCallerSession:(id)arg1;
- (void)broadcasterWillAcceptGuestCallerSession:(id)arg1 fromScreen:(id)arg2;
- (void)broadcasterDidInviteViewersToCallIn;
- (void)manageGuestCallersViewController:(id)arg1 didSelectViewer:(id)arg2;
- (void)dismissManageGuestCallers;
- (void)presentManageGuestCallers;
- (void)presentManageGuestCallersFromMenuViewController:(id)arg1;
- (void)commitOrDeleteGuestBroadcastingControllerAfterStartingBroadcast;
- (void)determineGuestBroadcastingPreBroadcastState:(_Bool)arg1;
- (_Bool)isGuestBroadcastingSupported;
- (void)seekVideoToPosition:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didUpdatePlaybackPointFrom:(id)arg1;
- (void)presentAmplifyProgramsFromMenuViewController:(id)arg1;
- (void)acceptAsGuestButtonPressedForUserID:(id)arg1 withGuestSessionState:(unsigned long long)arg2;
- (void)addAsGuestFromModalWithUserId:(id)arg1;
- (void)didUnblockUser:(id)arg1;
- (void)didBlockUser:(id)arg1;
- (void)followStatusDidChange:(id)arg1 isNowFollowing:(_Bool)arg2;
- (id)modalForUserWithID:(id)arg1 modalDelegate:(id)arg2 configureBlock:(CDUnknownBlockType)arg3;
- (void)presentModalForUser:(id)arg1;
- (void)presentContextualMenuForUser:(id)arg1;
- (void)willPresentOverflowMenu:(id)arg1;
- (void)presentOverflowMenu;
- (id)presentedOverflowMenu;
- (void)overflowViewControllerDidSelectDismiss:(id)arg1;
- (void)presentOverflowViewWithRootController:(id)arg1;
- (void)screenshotObserverDidObserveUserTakeScreenshot:(id)arg1;
- (id)shareBroadcastCoordinator;
- (void)presentShareActionSheetWithShareHighlightSelected:(_Bool)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)emailBroadcasterLogsIfNeeded;
- (void)reportPostBroadcastAnalyticsIfNeeded;
- (void)trackDidStartCameraAnalytics;
- (void)trackVideoDidConnectAnalytics;
- (void)uploadBroadcasterMetrics;
- (id)vidManStats;
- (void)printAndStoreLogEntry:(id)arg1;
- (void)collectRTMPConnectStatsIfNeeded;
- (void)showInformationalChatMessage:(id)arg1;
- (void)associateTweetIDWithCurrentBroadcast:(id)arg1 amplifyProgramID:(id)arg2;
@property(retain, nonatomic) PTVTwitterAuthenticationModel *twitterAuthenticationModel;
@property(nonatomic) __weak id <PTVTwitterIntegrationDelegate> twitterIntegrationDelegate;
- (void)updateBroadcastViewersAndStatsIfNeeded;
- (void)stopTrackingLocation;
- (_Bool)startTrackingLocationIfCapable;
- (void)sendLastKnownLocationMessage;
- (_Bool)shouldThrottleSendingLocationMessages;
- (_Bool)shareLocationEnabled;
- (void)locationManagerDidChangeAuthorizationStatus:(int)arg1;
- (void)locationManagerFailedWithError:(id)arg1;
- (void)standardUpdateUserLocation:(struct CLLocationCoordinate2D)arg1 heading:(double)arg2;
- (void)sketchInputView:(id)arg1 didPinchToScale:(double)arg2 velocity:(double)arg3;
- (void)didDoubleTapSketchInputView:(id)arg1;
- (void)sketchInputView:(id)arg1 didEndStrokeWithTouches:(id)arg2;
- (void)sketchInputView:(id)arg1 didReceiveStrokeTouches:(id)arg2;
- (void)sketchInputView:(id)arg1 didBeginStrokeWithTouches:(id)arg2;
- (void)sketchInputView:(id)arg1 didChangeToSketchColor:(id)arg2;
- (void)sketchInputView:(id)arg1 didRequestColorWithTouches:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)sketchInputViewDidFinishDrawing:(id)arg1;
- (void)hideSketchPaletteIfVisible;
- (void)showSketchPaletteIfHidden;
- (void)didRequestSwitchboard;
- (void)didRequestSketch;
- (_Bool)canSketch;
- (void)toggleBroadcastHiddenStateFromMenu:(id)arg1;
- (void)leavePaletteMode:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enterPaletteModeWithPadding:(double)arg1 disableInteraction:(_Bool)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissPalette;
- (void)presentPaletteAboveBroadcast:(id)arg1;
- (void)presentPalette:(id)arg1;
- (void)replayControllerDidReachEndOfVideo;
- (void)replayControllerDidCancelScrubbing;
- (void)replayControllerDidFinishScrubbingAtSeekTime:(double)arg1;
- (void)replayControllerWillBeginScrubbing;
- (void)pauseReplay;
- (void)playReplay;
- (void)getBroadcastReplayDataFailedWithError:(id)arg1;
- (void)getBroadcastReplayDataSucceededWithVideoAccess:(id)arg1;
- (void)getBroadcastReplayData;
- (id)replayVideoViewController;
- (void)executeLowSpaceWarning;
- (void)outOfSpace;
- (void)saveBroadcastToCameraRollCompletedWithError:(id)arg1 shouldNotifyUserOfErrors:(_Bool)arg2;
- (void)saveBroadcastToCameraRoll;
- (void)autoSaveToCameraRollIfNeeded;
- (void)makeCameraRollAvailable;
- (_Bool)canSaveBroadcastToCameraRoll;
- (void)stopRecordingBroadcast:(_Bool)arg1;
- (void)startRecordingBroadcast;
- (void)deleteBroadcastCompletedWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)deleteBroadcastFromServer;
- (_Bool)shouldBlockForceStopBroadcast;
- (void)forceStopBroadcast;
- (void)didStopBroadcastRemotelyWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)stopBroadcastRemotely;
- (void)stopBroadcast:(_Bool)arg1;
- (void)disconnectChat;
- (void)connectChat;
- (void)disconnectVideo;
- (void)connectVideo;
- (void)replayAvailabilityStateDidChange:(unsigned long long)arg1;
- (void)broadcastStateChangedToOffline;
- (void)determineBroadcastViewState;
- (void)determinePoorConnectionState;
- (void)inBackgroundOrOnPhoneStateChanged;
- (void)didDisconnectIncomingPhoneCall;
- (void)didAcceptIncomingPhoneCall;
- (void)didReceiveIncomingPhoneCall;
- (void)presentModerationReport;
- (void)presentBroadcastEditFromMenuViewController:(id)arg1;
- (void)presentBroadcastDetailsFromMenuViewController:(id)arg1;
- (void)presentBroadcastEdit;
- (void)presentBroadcastDetails;
- (void)broadcastPreferredImageURLDidChange;
- (void)broadcastStateDidChange;
- (void)clearPreBroadcastKeyboardTitleAccessoryView;
- (void)showTypeAheadSuggestionTooltipForSuggestion:(id)arg1 withNCharactersOverLimit:(unsigned long long)arg2;
- (id)broadcastTitleWithSuggestion:(id)arg1 replacingRange:(struct _NSRange)arg2;
- (_Bool)willSuggestionExceedMaxBroadcastTitleLength:(id)arg1 ifReplacingRange:(struct _NSRange)arg2;
- (void)didSelectSuggestion:(id)arg1 replacingRange:(struct _NSRange)arg2 fromKeyboardAccessoryView:(id)arg3;
- (void)didScrollSuggestionsFromKeyboardAccessoryView:(id)arg1;
- (void)didClearSuggestionsFromKeyboardAccessoryView:(id)arg1;
- (void)didLoadSuggestionsFromKeyboardAccessoryView:(id)arg1;
- (void)createSuggestedHashTagModelIfNeeded;
- (_Bool)shouldDisableSuggestedHashtagsFeature;
- (void)removeTwitterLocation;
- (void)promptDisableLocation:(id)arg1;
- (id)preferredLanguages;
- (void)uploadBroadcastThumbnailFailedWithError:(id)arg1;
- (_Bool)uploadBroadcastThumbnailIfSufficientBandwidth;
- (long long)contentType;
- (id)placeholderText;
- (unsigned long long)chatType;
- (_Bool)isPublicHiddenBroadcast;
- (_Bool)isPrivateBroadcast;
- (id)audienceChannelIDs;
- (id)audienceUserIDs;
- (void)updateBroadcastIfNeeded;
- (void)startBroadcastFailedWithError:(id)arg1;
- (void)startBroadcastSucceeded;
- (void)startBroadcastWithTitle:(id)arg1 isSharingPreciseLocation:(_Bool)arg2;
- (void)setStartBroadcastButtonState:(unsigned long long)arg1;
- (void)determineStartBroadcastState;
- (void)createBroadcastFailed:(id)arg1 duration:(double)arg2 withError:(id)arg3;
- (void)createBroadcastSucceeded:(id)arg1 withDuration:(double)arg2;
- (_Bool)shouldShareLocationIfKnown;
- (_Bool)shouldBroadcastUseCommentModeration;
- (void)createBroadcast;
- (void)speedTestDidError:(id)arg1 sizeInBytes:(long long)arg2 testDuration:(double)arg3;
- (void)speedTestFailedWithSizeInBytes:(long long)arg1 testDuration:(double)arg2;
- (void)speedTestPassedWithSizeInBytes:(long long)arg1 testDuration:(double)arg2;
- (void)evaluateSpeedTestResult;
- (void)speedTestCompletedWithSizeInBytes:(long long)arg1 testDuration:(double)arg2;
- (_Bool)didSpeedTestPass;
- (void)_performSpeedTest;
- (void)performSpeedTest;
- (void)didRestartBroadcastCreationProcess;
- (void)restartBroadcastCreationProcess;
- (void)skipBroadcastCreationProcessAndRecoverPublishingIfNeeded;
- (void)startBroadcastCreationProcessForFirstTime;
- (id)publishingProtocol;
- (unsigned short)publishingPort;
- (void)updateCameraZoomWithVelocity:(double)arg1;
- (void)selectNextCameraPosition;
- (_Bool)hasMultiplePhoneCameras;
- (_Bool)canChangeCamera;
- (void)startCameraIfNeeded;
- (void)didSelectDismiss;
- (void)publishingAccessDidChange;
- (void)didChangeBroadcast;
- (void)setPublishingAccess:(id)arg1;
- (_Bool)encrypted;
@property(readonly, nonatomic) _Bool sparkles;
- (_Bool)cameFromTwitter;
- (id)sourcePipelineIfLoaded;
- (id)sourcePipeline;
- (id)guestPublishingCoordinator;
- (id)guestPublishingViewController;
@property(readonly, nonatomic) PTVPublishingViewController *publishingViewController;
- (id)broadcastView;
@property(readonly, nonatomic) NSString *publishingHost;
- (id)chatSectionCompositeView;
- (id)guestCallerController;
@property(readonly, nonatomic) PTVChatController *chatController;
@property(readonly, nonatomic) PTVBroadcast *broadcast;
- (double)replayDuration;
- (double)currentReplayTimeInterval;
- (id)programDateTime;
- (unsigned long long)ntpForNow;
- (unsigned long long)ntpForCurrentFrame;
@property(readonly, nonatomic) PTVCreateBroadcastAnalyticsManager *createBroadcastAnalyticsManager;
@property(readonly, nonatomic) PTVAccessBroadcaster *publishingAccess;
- (void)logEventWithFormat:(id)arg1;
- (void)logEvent:(id)arg1;
- (_Bool)shouldUploadBroadcastingLogs;
@property(readonly, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser;
- (void)phoneCallMonitorDidDisconnectIncomingPhoneCall:(id)arg1;
- (void)phoneCallMonitorDidAcceptIncomingPhoneCall:(id)arg1;
- (void)phoneCallMonitorDidReceiveIncomingPhoneCall:(id)arg1;
- (void)releasePublishingViewController;
- (id)initWithDelegate:(id)arg1 modalDelegate:(id)arg2 startingBroadcastTitle:(id)arg3 publisher:(id)arg4 locationManager:(id)arg5 pipelineContainerViewController:(id)arg6 useLargeChatFont:(_Bool)arg7 twitterCameraBroadcastStateDelegate:(id)arg8;
- (void)readOnlyModalViewControllerDidSelectDismiss:(id)arg1;
- (void)sendChat:(id)arg1 keyboardLanguage:(id)arg2;
- (void)copyrightViolationViewControllerDidSelectDismiss:(id)arg1;
- (void)copyrightViolationViewControllerDidSelectHasBroadcastingRights:(id)arg1;
- (void)copyrightViolationViewControllerDidConfirmViolation:(id)arg1;
- (void)guestPublishingViewController:(id)arg1 didCollectEndOfStreamStats:(id)arg2;
- (void)guestPublishingViewController:(id)arg1 didCollectPeriodicPlaybackStats:(id)arg2;
- (void)guestPublishingViewController:(id)arg1 didCollectPeriodicPublishingStats:(id)arg2;
- (void)didReceiveGuestPublishingLogEntry:(id)arg1;
- (void)guestPublishingViewControllerDidSetPrimaryView:(id)arg1;
- (void)guestPublishingViewController:(id)arg1 didTapUsernameOfUser:(id)arg2;
- (void)guestPublishingViewControllerDidRequestCameraFlip:(id)arg1;
- (void)guestPublishingViewController:(id)arg1 didUpdateCameraPreviewRect:(struct CGRect)arg2;
- (void)guestPublishingViewControllerCameraStartDidComplete:(id)arg1;
- (void)amplifyProgramsViewController:(id)arg1 didChangeAmplifyProgram:(id)arg2;
- (void)changeExpirationActionSheetControllerDidSelectDeleteBroadcast:(id)arg1;
- (void)changeExpirationActionSheetControllerDidSelectDontAutoDelete:(id)arg1;
- (void)manageGuestCallersViewController:(id)arg1 didBlockUser:(id)arg2;
- (void)broadcastDetailsViewController:(id)arg1 didSelectViewer:(id)arg2;
- (void)overflowMenuDidTapEmptySpace:(id)arg1;
- (_Bool)overflowMenu:(id)arg1 shouldEnableMenuItem:(id)arg2;
- (void)overflowMenu:(id)arg1 didSelectMenuItem:(id)arg2;
- (void)overflowViewController:(id)arg1 willDisappearWithAnimationDuration:(double)arg2;
- (void)overflowViewController:(id)arg1 willAppearWithAnimationDuration:(double)arg2;
- (_Bool)giftingContributorsViewControllerShouldShowFollowButtons:(id)arg1;
- (void)giftingContributorsViewController:(id)arg1 didSelectContributor:(id)arg2;
- (void)videoOverlayViewControllerDidSelectAudioScopeButton:(id)arg1;
- (void)videoOverlayViewControllerDidTapOnContributors:(id)arg1 withContributorWatcher:(id)arg2 presentUserIDs:(id)arg3;
- (void)broadcasterDidRequestShare;
- (void)broadcasterDidRequestFollow;
- (void)reportBroadcasterBlockToTwitterAfterFetchingUserWithID:(id)arg1;
- (void)videoOverlayViewController:(id)arg1 didSelectShowSurvey:(id)arg2;
- (void)videoOverlayViewControllerDidSelectBroadcastCallInList:(id)arg1;
- (void)videoOverlayViewControllerReplayDidSelectPauseReplay:(id)arg1;
- (void)videoOverlayViewControllerReplayDidSelectPlayReplay:(id)arg1;
- (void)videoOverlayViewControllerDidSelectReadOnly:(id)arg1;
- (void)videoOverlayViewControllerDidSelectModerationReport:(id)arg1;
- (void)videoOverlayViewControllerDidSelectEditBroadcast:(id)arg1;
- (void)videoOverlayViewControllerDidSelectShowBroadcastDetails:(id)arg1;
- (void)videoOverlayViewControllerDidSelectOverflowMenu:(id)arg1;
- (void)videoOverlayViewControllerDidSelectShareBroadcast:(id)arg1 shareHighlightSelectedByDefault:(_Bool)arg2;
- (void)videoOverlayViewControllerDidSelectShareScreenshot:(id)arg1 sourceViewForActivityViewController:(id)arg2;
- (void)videoOverlayViewControllerDidSelectPrivacySettings:(id)arg1;
- (void)broadcasterDidSelectUnMuteGuestUser:(id)arg1;
- (void)broadcasterDidSelectMuteGuestUser:(id)arg1;
- (void)broadcasterDidReportUserFromMessage:(id)arg1 reportType:(unsigned long long)arg2;
- (void)videoOverlayViewControllerDidChangeMessage:(id)arg1;
- (void)broadcasterDidSelectReportGuestUser:(id)arg1;
- (void)broadcasterDidUnblockUser:(id)arg1;
- (void)broadcasterDidBlockUserFromMessage:(id)arg1;
- (void)broadcasterDidBlockUser:(id)arg1;
- (void)presentUserModalForUserId:(id)arg1 configureBlock:(CDUnknownBlockType)arg2;
- (void)presentBroadcast:(id)arg1 withWatchContext:(id)arg2 inCollection:(id)arg3;
- (_Bool)displayGuestBroadcastingOnBoardingModalIfNeededWithScaleAnimation:(_Bool)arg1;
- (void)didChangeGuestBroadcastingSelectedStateAndCanShowOnBoardingModal:(_Bool)arg1;
- (void)broadcastViewDidCompleteSwipeToDismiss:(id)arg1 withVelocity:(struct CGPoint)arg2;
- (void)broadcastViewDidCancelSwipeToDismiss:(id)arg1;
- (void)broadcastViewDidUpdateSwipeToDismiss:(id)arg1 withOffset:(struct CGPoint)arg2;
- (void)broadcastViewDidCloseBroadcastControlsDrawer:(id)arg1;
- (void)broadcastViewDidOpenBroadcastControlsDrawer:(id)arg1;
- (void)broadcastViewDidChangeAudioVisualizerOffset;
- (void)broadcastViewDidPressAcceptGuestBroadcasting;
- (void)broadcastViewDidPressAcceptGifts;
- (_Bool)broadcastViewShouldAllowSwipeToDismissFromTouch:(id)arg1;
- (_Bool)broadcastViewShouldAcceptDismissGesture;
- (void)broadcastViewDidChangeSelectionOfBroadcastTitleTextView:(id)arg1;
- (void)broadcastViewDidEditBroadcastTitle;
- (void)broadcastViewDidPressBackToSourceButton;
- (void)broadcastViewDidChangeChatType:(unsigned long long)arg1;
- (void)determineWillShareOnTwitterStateAndDisplayTooltipIfNeeded:(_Bool)arg1;
- (void)broadcastViewDidPressShareTwitter;
- (void)broadcastViewDidPressAudienceSelector;
- (void)startBroadcastWithStatus:(id)arg1 locationShared:(_Bool)arg2;
- (_Bool)locationServicesChangedTo:(_Bool)arg1;
- (id)broadcastViewTapToFlipRecognizer;
- (_Bool)broadcastViewIsTheaterModeActive;
- (void)broadcastViewDidTapScreen:(struct CGPoint)arg1;
- (void)broadcastViewDidPressAudioScope:(_Bool)arg1;
- (void)broadcastViewDidPressMute:(_Bool)arg1;
- (void)broadcastViewDidPressLeaveBroadcastingButton:(id)arg1;
- (void)broadcastViewDidPressStopBroadcastingButton:(id)arg1;
- (void)broadcastViewDidPressFlipCamera:(unsigned long long)arg1;
- (void)broadcastViewDidSelectDismiss:(id)arg1;
- (void)chatController:(id)arg1 messageWasUnmuted:(id)arg2;
- (void)chatController:(id)arg1 messageWasMuted:(id)arg2;
- (void)chatController:(id)arg1 didSendMessage:(id)arg2;
- (void)chatController:(id)arg1 didReceiveBroadcastViewersAndStats:(id)arg2;
- (void)chatController:(id)arg1 didReceiveChatRoomPresenceEvent:(id)arg2;
- (void)chatController:(id)arg1 didReceiveBlockMessage:(id)arg2;
- (void)chatController:(id)arg1 didReceiveQueuedMessage:(id)arg2 deliveryQueueSize:(unsigned long long)arg3;
- (void)broadcastController:(id)arg1 didObserveAuthErrorWithInfo:(id)arg2;
- (_Bool)broadcastPublisherShouldUploadLogs:(id)arg1;
- (_Bool)broadcastControllerShouldFetchBroadcastRegularly:(id)arg1;
- (void)broadcastControllerDidDetectCopyrightViolation:(id)arg1;
- (void)broadcastController:(id)arg1 didUpdatePlaybackPointFrom:(id)arg2;
- (void)broadcastControllerBroadcastPreferredImageURLDidChange:(id)arg1;
- (void)broadcastControllerBroadcastStateDidChange:(id)arg1;
- (void)broadcastControllerDidChangeBroadcast:(id)arg1;
- (_Bool)broadcastController:(id)arg1 didReceiveMessage:(id)arg2 isForReplay:(_Bool)arg3;
- (id)broadcastController:(id)arg1 deliveryDateForMessage:(id)arg2 isForReplay:(_Bool)arg3;
- (double)broadcastControllerReplayDuration:(id)arg1;
- (double)broadcastControllerCurrentReplayTimeInterval:(id)arg1;
- (id)broadcastControllerProgramDateTime:(id)arg1;
- (unsigned long long)broadcastControllerNTPForNow:(id)arg1;
- (unsigned long long)broadcastControllerNTPForCurrentFrame:(id)arg1;
- (void)nextAudioScopeBackdropColor;
- (void)didDoubleTapToFlipCamera;
- (void)adjustCameraZoom:(double)arg1 velocity:(double)arg2;
- (void)focusIndicatorDidFinishAnimating:(id)arg1;
- (void)setVideoRect:(struct CGRect)arg1;
- (void)didChangeLocalAudioSource:(_Bool)arg1 isUsingHeadphones:(_Bool)arg2;
- (void)onCameraTypeChange:(long long)arg1;
- (void)captureSessionDidStart;
- (void)didStartBroadcastCamera;
- (void)onConnectionFailure;
- (void)pipelineContainerViewControllerAudioPresentStateDidChange:(id)arg1;
- (void)pipelineContainerViewControllerPublishingStateDidChange:(id)arg1;
- (void)avCaptureSessionWasInterrupted:(id)arg1;
- (void)unobserveCaptureSessionsInterruptions;
- (void)observeCaptureSessionsInterruptions;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (_Bool)shouldLoad;
- (void)ptv_keyboardWillHideWithFrame:(struct CGRect)arg1 curve:(long long)arg2 duration:(float)arg3;
- (void)ptv_keyboardWillShowWithFrame:(struct CGRect)arg1 curve:(long long)arg2 duration:(float)arg3;
- (void)didUpdateGuestViewsMargins;
- (void)didUpdateChatSectionBottomBarHeight;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

