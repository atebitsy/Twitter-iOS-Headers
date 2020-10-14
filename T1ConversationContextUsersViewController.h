//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1UsersViewController.h>

#import <T1Twitter/TFNModalSheetViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNModalSheetViewControllerLayoutDelegate-Protocol.h>

@class NSString, UIBarButtonItem, UIViewController;

@interface T1ConversationContextUsersViewController : T1UsersViewController <TFNModalSheetViewControllerDelegate, TFNModalSheetViewControllerLayoutDelegate>
{
    UIBarButtonItem *_doneButton;
    UIViewController *_hostViewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
@property(readonly, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
- (double)preferredHeightForModalSheetViewController:(id)arg1 modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets)arg2;
- (void)modalSheetViewController:(id)arg1 willTransitionToLayoutMode:(long long)arg2 withTransitionCoordinator:(id)arg3;
- (void)private_done:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (id)initWithHostViewController:(id)arg1 conversationContext:(id)arg2 profileHeaderButtonGroup:(long long)arg3 account:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

