//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1ToastContentViewable-Protocol.h>
#import <T1Twitter/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSString, T1AvatarImageView, TFNButton, UIImageView, UILabel, UIStackView, UITapGestureRecognizer;
@protocol T1ToastContentViewDelegate, T1ToastViewModel;

@interface T1ToastDefaultContentView : UIView <UIGestureRecognizerDelegate, T1ToastContentViewable>
{
    _Bool _shouldAnimateAlternateActionButton;
    _Bool _isAnimatingProgressView;
    id <T1ToastContentViewDelegate> _delegate;
    UIImageView *_iconView;
    UIImageView *_thumbnailImageView;
    T1AvatarImageView *_avatarView;
    UILabel *_messageLabel;
    UILabel *_detailLabel;
    TFNButton *_alternateActionButton;
    UIView *_progressView;
    NSArray *_progressViewBeginningConstraints;
    NSArray *_progressViewEndingConstraints;
    UIView *_iconContainerView;
    UIView *_labelContainerView;
    UIStackView *_mainContainerStackView;
    UIView *_buttonContainerView;
    UIStackView *_containerStackView;
    NSArray *_staticConstraints;
    NSArray *_dynamicConstraints;
    id <T1ToastViewModel> _toast;
    UITapGestureRecognizer *_primaryActionTapRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *primaryActionTapRecognizer; // @synthesize primaryActionTapRecognizer=_primaryActionTapRecognizer;
@property(retain, nonatomic) id <T1ToastViewModel> toast; // @synthesize toast=_toast;
@property(retain, nonatomic) NSArray *dynamicConstraints; // @synthesize dynamicConstraints=_dynamicConstraints;
@property(retain, nonatomic) NSArray *staticConstraints; // @synthesize staticConstraints=_staticConstraints;
@property(retain, nonatomic) UIStackView *containerStackView; // @synthesize containerStackView=_containerStackView;
@property(retain, nonatomic) UIView *buttonContainerView; // @synthesize buttonContainerView=_buttonContainerView;
@property(retain, nonatomic) UIStackView *mainContainerStackView; // @synthesize mainContainerStackView=_mainContainerStackView;
@property(retain, nonatomic) UIView *labelContainerView; // @synthesize labelContainerView=_labelContainerView;
@property(retain, nonatomic) UIView *iconContainerView; // @synthesize iconContainerView=_iconContainerView;
@property(retain, nonatomic) NSArray *progressViewEndingConstraints; // @synthesize progressViewEndingConstraints=_progressViewEndingConstraints;
@property(retain, nonatomic) NSArray *progressViewBeginningConstraints; // @synthesize progressViewBeginningConstraints=_progressViewBeginningConstraints;
@property(nonatomic) _Bool isAnimatingProgressView; // @synthesize isAnimatingProgressView=_isAnimatingProgressView;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) TFNButton *alternateActionButton; // @synthesize alternateActionButton=_alternateActionButton;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) T1AvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) _Bool shouldAnimateAlternateActionButton; // @synthesize shouldAnimateAlternateActionButton=_shouldAnimateAlternateActionButton;
@property(nonatomic) __weak id <T1ToastContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_t1_alternateActionButtonTapped:(id)arg1;
- (void)_t1_primaryActionTapped:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_t1_updateProgressViewConstraints;
- (void)didPresentContentViewWithInterval:(double)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1 toast:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 toast:(id)arg2 imagePipeline:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

