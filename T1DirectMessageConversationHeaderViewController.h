//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

@class TFNBarButtonItem, UIResponder;

@interface T1DirectMessageConversationHeaderViewController : TFNViewController
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: customNextResponder
    // Error parsing type: , name: conversation
    // Error parsing type: , name: account
    // Error parsing type: , name: $__lazy_storage_$_settingsBarButtonItem
    // Error parsing type: , name: $__lazy_storage_$_detailsToolbar
    // Error parsing type: , name: $__lazy_storage_$_avatarImageViewContainer
    // Error parsing type: , name: $__lazy_storage_$_avatarImageView
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)conversationDidUpdateMetadata:(id)arg1;
- (void)conversationDidBecomeNonDraft:(id)arg1;
- (void)conversationDidTapAvatar;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (void)dealloc;
@property(nonatomic, readonly) UIResponder *nextResponder;
- (void)viewDidLoad;
- (void)didTapSettingsButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccount:(id)arg1 conversation:(id)arg2;
@property(nonatomic, retain) TFNBarButtonItem *settingsBarButtonItem;

@end

