//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1FollowControlDelegate-Protocol.h>
#import <T1Twitter/T1TimelinesItemSocialContextViewDelegate-Protocol.h>
#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>
#import <T1Twitter/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, T1AffiliateBadgeView, T1BadgedAvatarView, T1DismissButton, T1FollowsYouView, T1InfoTextView, T1TimelinesItemSocialContextView, T1UserBadger, T1UserBannerImageView, TFNAttributedTextView, TFNRoundedCornerView, TFNSizeThatFitsHelper, TFNTappableHighlightView, TFNTwitterAccount, TFSTwitterScribeContext, UIFont, UIImageView, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol T1UserViewActionControl, T1UserViewActionControlProvider, T1UserViewDelegate, T1UserViewLayoutDelegate, T1UserViewModel;

@interface T1UserView : UIView <T1FollowControlDelegate, UIGestureRecognizerDelegate, T1TimelinesItemSocialContextViewDelegate, TFNLayoutMetricsEnvironment>
{
    UILongPressGestureRecognizer *_longPressRecognizer;
    UITapGestureRecognizer *_muteBadgeTapRecognizer;
    TFNSizeThatFitsHelper *_layoutHelper;
    _Bool _selected;
    _Bool _highlighted;
    _Bool _useAppBackgroundColor;
    _Bool _showBio;
    _Bool _showFollowsYou;
    _Bool _showMuteBadge;
    _Bool _showMuteBadgeForFleets;
    _Bool _socialContextViewShowsBadge;
    _Bool _showAdminTextLabel;
    _Bool _showUnblocked;
    _Bool _showUnmuted;
    _Bool _confirmBlock;
    _Bool _showUsernameLabel;
    _Bool _showDesignatorBadge;
    _Bool _enableTappableSocialProof;
    _Bool _avatarSelectable;
    _Bool _userInfoSelectable;
    _Bool _userBlocked;
    _Bool _expanded;
    _Bool _unread;
    _Bool _topConversationConnectorEnabled;
    _Bool _bottomConversationConnectorEnabled;
    TFNTwitterAccount *_account;
    id <T1UserViewActionControlProvider> _actionControlProvider;
    TFSTwitterScribeContext *_scribeContext;
    T1UserBadger *_userBadger;
    id <T1UserViewModel> _viewModel;
    long long _userCellStyle;
    unsigned long long _userFollowControlType;
    unsigned long long _userFollowControlVariant;
    long long _caretType;
    unsigned long long _bioMaxLines;
    CDUnknownBlockType _caretTapBlock;
    CDUnknownBlockType _avatarTapBlock;
    CDUnknownBlockType _avatarLongPressBlock;
    CDUnknownBlockType _userTapBlock;
    CDUnknownBlockType _userLongPressBlock;
    CDUnknownBlockType _muteBadgePressBlock;
    CDUnknownBlockType _socialTextTapActionBlock;
    CDUnknownBlockType _designatorBadgeTapActionBlock;
    CDUnknownBlockType _followRequestResponseBlock;
    id <T1UserViewDelegate> _delegate;
    UIView *_conversationTopConnectorView;
    UIView *_conversationBottomConnectorView;
    NSString *_renderedProfileBannerURL;
    UIView<T1UserViewActionControl> *_actionControl;
    T1BadgedAvatarView *_avatarView;
    UILabel *_userNameLabel;
    UILabel *_fullNameLabel;
    T1AffiliateBadgeView *_designatorBadge;
    T1FollowsYouView *_followsYouView;
    UILabel *_adminTextLabel;
    TFNAttributedTextView *_bioAttributedTextView;
    T1UserBannerImageView *_bannerImageView;
    UIImageView *_authorBadgeImageView;
    UIImageView *_muteBadgeImageView;
    T1InfoTextView *_infoTextView;
    TFNTappableHighlightView *_userInfoButton;
    T1DismissButton *_caretButton;
    TFNRoundedCornerView *_borderView;
    T1TimelinesItemSocialContextView *_socialContextView;
    struct CGSize _avatarSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) T1TimelinesItemSocialContextView *socialContextView; // @synthesize socialContextView=_socialContextView;
@property(readonly, nonatomic) TFNRoundedCornerView *borderView; // @synthesize borderView=_borderView;
@property(readonly, nonatomic) T1DismissButton *caretButton; // @synthesize caretButton=_caretButton;
@property(readonly, nonatomic) TFNTappableHighlightView *userInfoButton; // @synthesize userInfoButton=_userInfoButton;
@property(readonly, nonatomic) T1InfoTextView *infoTextView; // @synthesize infoTextView=_infoTextView;
@property(readonly, nonatomic) UIImageView *muteBadgeImageView; // @synthesize muteBadgeImageView=_muteBadgeImageView;
@property(readonly, nonatomic) UIImageView *authorBadgeImageView; // @synthesize authorBadgeImageView=_authorBadgeImageView;
@property(readonly, nonatomic) T1UserBannerImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(readonly, nonatomic) TFNAttributedTextView *bioAttributedTextView; // @synthesize bioAttributedTextView=_bioAttributedTextView;
@property(readonly, nonatomic) UILabel *adminTextLabel; // @synthesize adminTextLabel=_adminTextLabel;
@property(readonly, nonatomic) T1FollowsYouView *followsYouView; // @synthesize followsYouView=_followsYouView;
@property(readonly, nonatomic) T1AffiliateBadgeView *designatorBadge; // @synthesize designatorBadge=_designatorBadge;
@property(readonly, nonatomic) UILabel *fullNameLabel; // @synthesize fullNameLabel=_fullNameLabel;
@property(readonly, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(readonly, nonatomic) T1BadgedAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) UIView<T1UserViewActionControl> *actionControl; // @synthesize actionControl=_actionControl;
@property(copy, nonatomic) NSString *renderedProfileBannerURL; // @synthesize renderedProfileBannerURL=_renderedProfileBannerURL;
@property(readonly, nonatomic) UIView *conversationBottomConnectorView; // @synthesize conversationBottomConnectorView=_conversationBottomConnectorView;
@property(readonly, nonatomic) UIView *conversationTopConnectorView; // @synthesize conversationTopConnectorView=_conversationTopConnectorView;
@property(nonatomic) _Bool bottomConversationConnectorEnabled; // @synthesize bottomConversationConnectorEnabled=_bottomConversationConnectorEnabled;
@property(nonatomic) _Bool topConversationConnectorEnabled; // @synthesize topConversationConnectorEnabled=_topConversationConnectorEnabled;
@property(nonatomic) __weak id <T1UserViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize avatarSize; // @synthesize avatarSize=_avatarSize;
@property(nonatomic) _Bool unread; // @synthesize unread=_unread;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic, getter=isUserBlocked) _Bool userBlocked; // @synthesize userBlocked=_userBlocked;
@property(nonatomic, getter=isUserInfoSelectable) _Bool userInfoSelectable; // @synthesize userInfoSelectable=_userInfoSelectable;
@property(nonatomic, getter=isAvatarSelectable) _Bool avatarSelectable; // @synthesize avatarSelectable=_avatarSelectable;
@property(copy, nonatomic) CDUnknownBlockType followRequestResponseBlock; // @synthesize followRequestResponseBlock=_followRequestResponseBlock;
@property(copy, nonatomic) CDUnknownBlockType designatorBadgeTapActionBlock; // @synthesize designatorBadgeTapActionBlock=_designatorBadgeTapActionBlock;
@property(copy, nonatomic) CDUnknownBlockType socialTextTapActionBlock; // @synthesize socialTextTapActionBlock=_socialTextTapActionBlock;
@property(copy, nonatomic) CDUnknownBlockType muteBadgePressBlock; // @synthesize muteBadgePressBlock=_muteBadgePressBlock;
@property(copy, nonatomic) CDUnknownBlockType userLongPressBlock; // @synthesize userLongPressBlock=_userLongPressBlock;
@property(copy, nonatomic) CDUnknownBlockType userTapBlock; // @synthesize userTapBlock=_userTapBlock;
@property(copy, nonatomic) CDUnknownBlockType avatarLongPressBlock; // @synthesize avatarLongPressBlock=_avatarLongPressBlock;
@property(copy, nonatomic) CDUnknownBlockType avatarTapBlock; // @synthesize avatarTapBlock=_avatarTapBlock;
@property(copy, nonatomic) CDUnknownBlockType caretTapBlock; // @synthesize caretTapBlock=_caretTapBlock;
@property(nonatomic) _Bool enableTappableSocialProof; // @synthesize enableTappableSocialProof=_enableTappableSocialProof;
@property(nonatomic) _Bool showDesignatorBadge; // @synthesize showDesignatorBadge=_showDesignatorBadge;
@property(nonatomic) _Bool showUsernameLabel; // @synthesize showUsernameLabel=_showUsernameLabel;
@property(nonatomic) _Bool confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(nonatomic) _Bool showUnmuted; // @synthesize showUnmuted=_showUnmuted;
@property(nonatomic) _Bool showUnblocked; // @synthesize showUnblocked=_showUnblocked;
@property(nonatomic) _Bool showAdminTextLabel; // @synthesize showAdminTextLabel=_showAdminTextLabel;
@property(nonatomic) _Bool socialContextViewShowsBadge; // @synthesize socialContextViewShowsBadge=_socialContextViewShowsBadge;
@property(nonatomic) _Bool showMuteBadgeForFleets; // @synthesize showMuteBadgeForFleets=_showMuteBadgeForFleets;
@property(nonatomic) _Bool showMuteBadge; // @synthesize showMuteBadge=_showMuteBadge;
@property(nonatomic) _Bool showFollowsYou; // @synthesize showFollowsYou=_showFollowsYou;
@property(nonatomic) unsigned long long bioMaxLines; // @synthesize bioMaxLines=_bioMaxLines;
@property(nonatomic) _Bool showBio; // @synthesize showBio=_showBio;
@property(nonatomic) long long caretType; // @synthesize caretType=_caretType;
@property(nonatomic) unsigned long long userFollowControlVariant; // @synthesize userFollowControlVariant=_userFollowControlVariant;
@property(nonatomic) unsigned long long userFollowControlType; // @synthesize userFollowControlType=_userFollowControlType;
@property(nonatomic) _Bool useAppBackgroundColor; // @synthesize useAppBackgroundColor=_useAppBackgroundColor;
@property(nonatomic) long long userCellStyle; // @synthesize userCellStyle=_userCellStyle;
@property(retain, nonatomic) id <T1UserViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) T1UserBadger *userBadger; // @synthesize userBadger=_userBadger;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (unsigned long long)private_infoTextOptions;
- (void)_invalidateLayout;
- (void)tfn_updateBoundsToSizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_t1_updateDesignatorBadge;
- (void)_t1_updateUserBio;
- (id)_userBadgeWithViewModel:(id)arg1;
- (void)_updateUserBadge;
- (void)_updateBackgroundColor;
- (void)_t1_updateCaretAccessibilityPosition;
- (struct CGPoint)accessibilityActivationPoint;
- (void)updateSubviewAccessibility;
- (id)accessibilityLabel;
- (void)_update;
- (void)_t1_updateUserNameLabel;
- (void)_t1_updateMuteBadge;
@property(readonly, nonatomic) UIFont *socialTextFont;
- (void)_updateSocialContextView;
- (_Bool)_viewModelHasSocialText;
- (void)_muteBadgePressAction:(id)arg1;
- (void)_longPressAction:(id)arg1;
- (void)_followRequestResponseAction:(_Bool)arg1 error:(id)arg2;
- (void)_t1_designatorBadgeTapAction;
- (void)_t1_userInfoLongPressAction;
- (void)_t1_userInfoTapAction;
- (void)avatarLongPressAction;
- (void)_avatarTapAction;
- (void)_didTapCaret;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_userMuteDidUpdate:(id)arg1;
- (void)_userDidUpdate:(id)arg1;
- (id)calculatedLayoutMetrics;
- (_Bool)followControlShouldUpdateHomeTimelineOnUnfollow:(id)arg1;
- (void)followControl:(id)arg1 didPerformAction:(unsigned long long)arg2 success:(_Bool)arg3 error:(id)arg4;
- (void)followControlNeedsLayout:(id)arg1;
- (_Bool)followControl:(id)arg1 shouldPerformAction:(unsigned long long)arg2;
- (id)previewConfigurationForSocialContextView:(id)arg1;
- (void)socialContextView:(id)arg1 didTapCaret:(id)arg2;
- (void)socialContextViewDidTap:(id)arg1;
- (void)private_updateActionControlCreateIfNeeded:(_Bool)arg1;
@property(retain, nonatomic) id <T1UserViewActionControlProvider> actionControlProvider; // @synthesize actionControlProvider=_actionControlProvider;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (void)_removeObservers;
@property(nonatomic, getter=isAvatarAccessibilityElement) _Bool avatarAccessibilityElement;
@property(readonly, copy, nonatomic) NSString *designatorString;
@property(readonly, copy, nonatomic) NSString *socialText;
- (void)updateConversationConnectors;
- (void)cleanup;
- (void)dealloc;
@property(nonatomic) __weak id <T1UserViewLayoutDelegate> layoutDelegate;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

