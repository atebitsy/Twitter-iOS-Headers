//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1TweetComposeSocialContextTextViewDelegate-Protocol.h>

@class NSString, T1AvatarImageView, T1ComposeRichTextView, T1PersistentComposeAccountView, T1TweetComposeSocialContextTextView, TFNButtonBarView, TFNLegacyButton, TFNPlaceholderTextView, TFNTwitterAccount, UIFont, UITapGestureRecognizer;
@protocol T1PersistentComposeViewDelgate;

@interface T1PersistentComposeView : UIView <T1TweetComposeSocialContextTextViewDelegate>
{
    _Bool _showsOnlyPlaceholder;
    _Bool _richTextViewScrollDisabled;
    _Bool _replySocialContextHidden;
    _Bool _buttonsHidden;
    id <T1PersistentComposeViewDelgate> _delegate;
    T1ComposeRichTextView *_richTextView;
    NSString *_replySocialContextText;
    TFNButtonBarView *_buttonBarView;
    TFNTwitterAccount *_account;
    UIView *_hidingKeyboardGapView;
    UIView *_topBorder;
    UIView *_containerView;
    T1AvatarImageView *_avatarImageView;
    T1PersistentComposeAccountView *_accountView;
    T1TweetComposeSocialContextTextView *_replySocialContextTextView;
    TFNPlaceholderTextView *_placeholderTextView;
    TFNLegacyButton *_fullComposeButton;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(readonly, nonatomic) TFNLegacyButton *fullComposeButton; // @synthesize fullComposeButton=_fullComposeButton;
@property(readonly, nonatomic) TFNPlaceholderTextView *placeholderTextView; // @synthesize placeholderTextView=_placeholderTextView;
@property(readonly, nonatomic) T1TweetComposeSocialContextTextView *replySocialContextTextView; // @synthesize replySocialContextTextView=_replySocialContextTextView;
@property(readonly, nonatomic) T1PersistentComposeAccountView *accountView; // @synthesize accountView=_accountView;
@property(readonly, nonatomic) T1AvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) UIView *topBorder; // @synthesize topBorder=_topBorder;
@property(readonly, nonatomic) UIView *hidingKeyboardGapView; // @synthesize hidingKeyboardGapView=_hidingKeyboardGapView;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic, getter=isButtonsHidden) _Bool buttonsHidden; // @synthesize buttonsHidden=_buttonsHidden;
@property(readonly, nonatomic) TFNButtonBarView *buttonBarView; // @synthesize buttonBarView=_buttonBarView;
@property(nonatomic, getter=isReplySocialContextHidden) _Bool replySocialContextHidden; // @synthesize replySocialContextHidden=_replySocialContextHidden;
@property(copy, nonatomic) NSString *replySocialContextText; // @synthesize replySocialContextText=_replySocialContextText;
@property(nonatomic, getter=isRichTextViewScrollDisabled) _Bool richTextViewScrollDisabled; // @synthesize richTextViewScrollDisabled=_richTextViewScrollDisabled;
@property(readonly, nonatomic) T1ComposeRichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(nonatomic) _Bool showsOnlyPlaceholder; // @synthesize showsOnlyPlaceholder=_showsOnlyPlaceholder;
@property(nonatomic) __weak id <T1PersistentComposeViewDelgate> delegate; // @synthesize delegate=_delegate;
- (void)socialContextTextView:(id)arg1 didTapText:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)_t1_accountsDidChange:(id)arg1;
- (void)_t1_action_didTapfullComposeButton:(id)arg1;
- (void)_t1_gesture_handleTap:(id)arg1;
- (double)_t1_private_estimatedOneLineTextViewHeight;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)didMoveToWindow;
- (void)setBackgroundColor:(id)arg1;
- (id)calculatedLayoutMetrics;
- (void)_t1_private_updateAccountAndNameView;
- (void)_t1_private_updateAvatarImageView;
- (void)_t1_private_updateTextViewTextContainerInsets;
- (void)_t1_private_updateFullComposeButton;
- (void)_t1_private_updateReplySocialContextTextView;
@property(readonly, nonatomic) UIView *replySocialContextView;
- (void)_t1_private_updateButtonBarView;
- (void)_t1_private_updateRichTextViewScrollEnabled;
- (void)_t1_private_updatePlaceholderTextViewHidden;
@property(copy, nonatomic) NSString *placeholderText;
@property(retain, nonatomic) UIFont *placeholderTextFont;
- (void)_t1_accountViewTapped:(id)arg1;
- (void)_t1_avatarImageTapped:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

