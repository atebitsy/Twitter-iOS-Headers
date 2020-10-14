//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1DirectMessageAbstractConversationEntryCell.h>

@class T1DirectMessageAvatarImageView, T1DirectMessageConversationJoinedEntryViewModel, T1UserFacepileView, TFNAttributedTextView, UITapGestureRecognizer, UIView;

@interface T1DirectMessageConversationJoinedEntryCell : T1DirectMessageAbstractConversationEntryCell
{
    UITapGestureRecognizer *_tapGestureRecognizer;
    _Bool _isNewJoinedGroupLayoutEnabled;
    TFNAttributedTextView *_introductionTextView;
    TFNAttributedTextView *_messageTextView;
    T1DirectMessageAvatarImageView *_avatarImageView;
    T1UserFacepileView *_facepileView;
    UIView *_facepileContainerView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isNewJoinedGroupLayoutEnabled; // @synthesize isNewJoinedGroupLayoutEnabled=_isNewJoinedGroupLayoutEnabled;
@property(retain, nonatomic) UIView *facepileContainerView; // @synthesize facepileContainerView=_facepileContainerView;
@property(retain, nonatomic) T1UserFacepileView *facepileView; // @synthesize facepileView=_facepileView;
@property(retain, nonatomic) T1DirectMessageAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) TFNAttributedTextView *messageTextView; // @synthesize messageTextView=_messageTextView;
@property(retain, nonatomic) TFNAttributedTextView *introductionTextView; // @synthesize introductionTextView=_introductionTextView;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)_refreshContent;
- (void)_recreateFacepileViewWithUsers:(id)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_cleanup;
- (void)alternateLayout;
- (void)_configureFacepileView;
- (void)_avatarImageViewLongPressed:(id)arg1;
- (void)_avatarImageViewTapped:(id)arg1;
- (void)layoutSubviews;
- (void)setEntryViewModel:(id)arg1;
@property(readonly, nonatomic) T1DirectMessageConversationJoinedEntryViewModel *joinedEntryViewModel;
- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

