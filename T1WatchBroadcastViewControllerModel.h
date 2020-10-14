//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/PTVBroadcastWatcherObserver-Protocol.h>
#import <T1Twitter/PTVTwitterIntegrationDelegate-Protocol.h>

@class NSString, NSURL, PTVExternalVideoAccessManager, T1BroadcastingFeatures, T1PeriscopeAccount, TFNTwitterAccount, TFNTwitterLiveEvent, TFNTwitterStatus, TFNTwitterUser, TFSTwitterBroadcast;
@protocol T1WatchBroadcastViewControllerModelDelegate, TFNTwitterCardDataSource;

@interface T1WatchBroadcastViewControllerModel : NSObject <PTVBroadcastWatcherObserver, PTVTwitterIntegrationDelegate>
{
    id <T1WatchBroadcastViewControllerModelDelegate> _delegate;
    TFSTwitterBroadcast *_broadcast;
    TFNTwitterAccount *_account;
    id <TFNTwitterCardDataSource> _cardDataSource;
    TFNTwitterStatus *_status;
    TFNTwitterStatus *_associatedBroadcastStatus;
    TFNTwitterLiveEvent *_liveEvent;
    NSURL *_shareURL;
    TFNTwitterUser *_broadcastingTwitterUser;
    T1PeriscopeAccount *_periscopeAccount;
    PTVExternalVideoAccessManager *_externalVideoAccessManager;
    NSString *_refreshIdentifier;
    T1BroadcastingFeatures *_broadcastingFeatures;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) T1BroadcastingFeatures *broadcastingFeatures; // @synthesize broadcastingFeatures=_broadcastingFeatures;
@property(copy, nonatomic) NSString *refreshIdentifier; // @synthesize refreshIdentifier=_refreshIdentifier;
@property(readonly, nonatomic) PTVExternalVideoAccessManager *externalVideoAccessManager; // @synthesize externalVideoAccessManager=_externalVideoAccessManager;
@property(retain, nonatomic) T1PeriscopeAccount *periscopeAccount; // @synthesize periscopeAccount=_periscopeAccount;
@property(readonly, nonatomic) TFNTwitterUser *broadcastingTwitterUser; // @synthesize broadcastingTwitterUser=_broadcastingTwitterUser;
@property(readonly, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
@property(readonly, nonatomic) TFNTwitterLiveEvent *liveEvent; // @synthesize liveEvent=_liveEvent;
@property(retain, nonatomic) TFNTwitterStatus *associatedBroadcastStatus; // @synthesize associatedBroadcastStatus=_associatedBroadcastStatus;
@property(readonly, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
@property(readonly, nonatomic) id <TFNTwitterCardDataSource> cardDataSource; // @synthesize cardDataSource=_cardDataSource;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) TFSTwitterBroadcast *broadcast; // @synthesize broadcast=_broadcast;
@property(readonly, nonatomic) __weak id <T1WatchBroadcastViewControllerModelDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isUserProfileSheetEnabled;
- (_Bool)isGuestBroadcastingVideoGuestsEnabled;
- (_Bool)isGuestBroadcastingCallInEnabled;
- (void)displayMicrophonePermissionsAlertFrom:(id)arg1;
- (void)displayCameraPermissionsAlertFrom:(id)arg1;
- (id)copyrightViolationLearnMoreURL;
- (void)didRequestToReportMessage:(id)arg1 withReportType:(unsigned long long)arg2 isInScrollbackMode:(_Bool)arg3;
- (void)willPresentUserModalFromMessage:(id)arg1 isInScrollbackMode:(_Bool)arg2;
- (void)willBlockUserForMessage:(id)arg1 isInScrollbackMode:(_Bool)arg2;
- (void)didSelectReplyToMessage:(id)arg1 isInScrollbackMode:(_Bool)arg2;
- (void)didCancelChatMessageActionSheetIsInScrollbackMode:(_Bool)arg1;
- (void)didPresentChatMessageActionSheetIsInScrollbackMode:(_Bool)arg1;
- (void)didTapMessage:(id)arg1 atIndex:(unsigned long long)arg2 inMessages:(id)arg3 isInScrollbackMode:(_Bool)arg4;
- (void)didLeaveScrollbackMode;
- (void)didEnterScrollbackMode;
- (id)_t1_shareURLWithTimecode:(double)arg1;
- (void)shareURLOfBroadcast:(id)arg1 atTimecode:(double)arg2 initialTimecode:(double)arg3 fromRect:(struct CGRect)arg4 inView:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)composeDirectMessageForBroadcast:(id)arg1 atTimecode:(double)arg2 initialTimecode:(double)arg3 fromRect:(struct CGRect)arg4 inView:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)composeTweetForBroadcast:(id)arg1 atTimecode:(double)arg2 initialTimecode:(double)arg3 screenshot:(id)arg4 fromRect:(struct CGRect)arg5 inView:(id)arg6 withCompletion:(CDUnknownBlockType)arg7;
- (void)willDismissShareBroadcastScreenWithoutSharingSelectedTimecode:(double)arg1 initialTimecode:(double)arg2;
- (void)willPresentShareBroadcastScreen;
- (_Bool)shouldShowRetweetButton;
- (_Bool)canShareBroadcast;
- (_Bool)useEdgeTheme;
- (id)retweetGreenColor;
- (id)overrideCopyForPromptingViewerToShareBroadcast;
- (id)blockedTwitterIDs;
- (void)didSetTheaterModeEnabled:(_Bool)arg1;
- (_Bool)shouldHidePeriscopeAppUpsell;
- (id)additionalParametersForStartWatchingLifecycleAPI;
- (void)didSendMessage:(id)arg1;
- (void)loggedInUserBlockedByBroadcasterInBroadcast:(id)arg1;
- (void)deleteBroadcast:(id)arg1;
- (void)deleteStatusForBroadcast:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)didUnblockUser:(id)arg1;
- (void)didBlockUser:(id)arg1;
- (void)retweetBroadcast:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)canRetweetBroadcast:(id)arg1;
- (void)reportBroadcast:(id)arg1;
- (void)didObserveAuthErrorWithInfo:(id)arg1;
- (void)_t1_processBroadcastUnavailable;
- (void)_t1_processBroadcast:(id)arg1;
- (void)_t1_processGetBroadcastResponse:(id)arg1;
- (void)_t1_configureStatusesIfNecessary;
- (void)_t1_didReceiveBroadcastingTwitterUser:(id)arg1;
- (void)_t1_requestBroadcastingTwitterUserIfNecessary;
- (id)ptvBroadcast;
- (id)scribeParameters;
- (_Bool)canBePlayed;
- (id)statusOrAssociatedBroadcastStatus;
- (id)playerSessionProducer;
- (void)setBroadcast:(id)arg1;
- (void)stopRefreshingBroadcast;
- (void)startRefreshingBroadcast;
- (void)_authenticatePeriscopeAccountWithForced:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reauthenticatePeriscopeAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)authenticatePeriscopeAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)externalVideoPlayerDidReceiveShareURL:(id)arg1;
- (void)externalVideoPlayerDidObservePlaybackStateError:(id)arg1;
- (id)presentationScribeParametersForExternalVideoPlayer:(id)arg1;
- (void)dispose;
- (id)tfs_debugStrings;
- (void)dealloc;
- (id)initWithBroadcast:(id)arg1 account:(id)arg2 cardDataSource:(id)arg3 liveEvent:(id)arg4 delegate:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

