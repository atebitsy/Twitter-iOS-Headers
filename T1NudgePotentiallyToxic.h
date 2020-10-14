//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1Nudge-Protocol.h>
#import <T1Twitter/T1NudgeNavigationControllerDelegate-Protocol.h>
#import <T1Twitter/T1NudgePotentiallyToxicMoreInfoDelegate-Protocol.h>
#import <T1Twitter/TFNHapticFeedback-Protocol.h>
#import <T1Twitter/TFNMenuSheetActionAdapterDelegate-Protocol.h>
#import <T1Twitter/TFNModalSheetViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNModalSheetViewControllerLayoutDelegate-Protocol.h>

@class NSString, T1NudgeItemsDataViewController, T1NudgeNavigationController, T1NudgePotentiallyToxicMoreInfo, TFNModalSheetViewController, TFNTwitterAccount, TFNTwitterComposition, UIImpactFeedbackGenerator, UINotificationFeedbackGenerator, UISelectionFeedbackGenerator;
@protocol T1NudgeDelegate;

@interface T1NudgePotentiallyToxic : NSObject <TFNHapticFeedback, TFNMenuSheetActionAdapterDelegate, TFNModalSheetViewControllerDelegate, TFNModalSheetViewControllerLayoutDelegate, T1NudgePotentiallyToxicMoreInfoDelegate, T1NudgeNavigationControllerDelegate, T1Nudge>
{
    _Bool _hasSelectedMenuItem;
    _Bool _isObservingBackgroundNotification;
    UINotificationFeedbackGenerator *_notificationFeedbackGenerator;
    TFNTwitterComposition *_composition;
    TFNTwitterAccount *_account;
    id <T1NudgeDelegate> _delegate;
    TFNModalSheetViewController *_nudgeModalSheetViewController;
    T1NudgeNavigationController *_nudgeNavigationController;
    T1NudgeItemsDataViewController *_nudgeItemsDataViewController;
    T1NudgeItemsDataViewController *_moreInfoItemsDataViewController;
    T1NudgePotentiallyToxicMoreInfo *_moreInfoNudge;
    long long _nudgeCopyStyle;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isObservingBackgroundNotification; // @synthesize isObservingBackgroundNotification=_isObservingBackgroundNotification;
@property(readonly, nonatomic) _Bool hasSelectedMenuItem; // @synthesize hasSelectedMenuItem=_hasSelectedMenuItem;
@property(readonly, nonatomic) long long nudgeCopyStyle; // @synthesize nudgeCopyStyle=_nudgeCopyStyle;
@property(retain, nonatomic) T1NudgePotentiallyToxicMoreInfo *moreInfoNudge; // @synthesize moreInfoNudge=_moreInfoNudge;
@property(retain, nonatomic) T1NudgeItemsDataViewController *moreInfoItemsDataViewController; // @synthesize moreInfoItemsDataViewController=_moreInfoItemsDataViewController;
@property(retain, nonatomic) T1NudgeItemsDataViewController *nudgeItemsDataViewController; // @synthesize nudgeItemsDataViewController=_nudgeItemsDataViewController;
@property(retain, nonatomic) T1NudgeNavigationController *nudgeNavigationController; // @synthesize nudgeNavigationController=_nudgeNavigationController;
@property(retain, nonatomic) TFNModalSheetViewController *nudgeModalSheetViewController; // @synthesize nudgeModalSheetViewController=_nudgeModalSheetViewController;
@property(nonatomic) __weak id <T1NudgeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) TFNTwitterComposition *composition; // @synthesize composition=_composition;
- (id)_t1_cancelButtonString;
- (id)_t1_deleteButtonString;
- (id)_t1_reviseButtonString;
- (id)_t1_quotedStatusItem;
- (id)_t1_activeTextItemWithText:(id)arg1 activeText:(id)arg2 font:(id)arg3 fontColor:(id)arg4;
- (id)_t1_subtitleTextItem;
- (id)_t1_titleTextItem;
- (void)_t1_nudgeControllerDidEnterBackground:(id)arg1;
- (void)_t1_recordNudgeResult:(unsigned long long)arg1;
- (void)_t1_recordNudgeAction:(unsigned long long)arg1 forPage:(id)arg2;
- (void)_t1_recordNudgeAction:(unsigned long long)arg1;
- (double)preferredHeightForModalSheetViewController:(id)arg1 modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets)arg2;
- (void)modalSheetViewController:(id)arg1 willTransitionToLayoutMode:(long long)arg2 withTransitionCoordinator:(id)arg3;
- (void)modalSheetViewControllerDidDismiss:(id)arg1 fromGesture:(_Bool)arg2;
- (void)modalSheetViewControllerWillDismiss:(id)arg1 fromGesture:(_Bool)arg2;
- (void)menuActionSheetAdapter:(id)arg1 didSelectActionItem:(id)arg2 atIndexPath:(id)arg3;
- (void)nudgePotentiallyToxicMoreInfoDidTapGotItButton:(id)arg1;
- (void)nudgeNavigationController:(id)arg1 didTapCloseButton:(id)arg2;
- (void)nudgeNavigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)performHapticFeedback:(unsigned long long)arg1;
- (void)prepareHapticFeedback:(unsigned long long)arg1;
@property(readonly, nonatomic) UINotificationFeedbackGenerator *notificationFeedbackGenerator; // @synthesize notificationFeedbackGenerator=_notificationFeedbackGenerator;
- (void)_t1_nudgeMenuSheetViewControllerDidDismiss;
- (void)_t1_getMoreInfo;
- (void)_t1_sendTweetAnywaysAndRecordAction:(_Bool)arg1;
- (void)_t1_deleteTweet;
- (void)_t1_rethinkTweetAndRecordAction:(_Bool)arg1;
- (_Bool)isNudgePresentingMoreInfoViewController;
- (void)dismissNudgeAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentNudgeFromViewController:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long nudgeType;
- (id)initWithComposition:(id)arg1 account:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property(readonly, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property(readonly) Class superclass;

@end

