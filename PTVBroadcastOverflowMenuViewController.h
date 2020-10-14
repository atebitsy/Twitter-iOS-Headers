//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PeriscopeSDK/PTVBroadcastOverflowMenuViewDelegate-Protocol.h>

@class NSArray, NSString, PTVBroadcastController, UIView;
@protocol PTVBroadcastOverflowMenuViewControllerDelegate, PTVCustomTwitterViewDelegate;

@interface PTVBroadcastOverflowMenuViewController : UIViewController <PTVBroadcastOverflowMenuViewDelegate>
{
    PTVBroadcastController *_broadcastController;
    NSArray *_menuItemsToShow;
    id <PTVBroadcastOverflowMenuViewControllerDelegate> _delegate;
    long long _participantCount;
    id <PTVCustomTwitterViewDelegate> _customTwitterViewDelegate;
    _Bool _hasClickableHashTags;
    UIView *_profileBanner;
}

+ (id)overflowMenuWithBroadcastController:(id)arg1 menuItemsToShow:(id)arg2 delegate:(id)arg3 twitterViewDelegate:(id)arg4 hasClickableHashTags:(_Bool)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *profileBanner; // @synthesize profileBanner=_profileBanner;
- (void)menuItemPressed:(id)arg1;
- (void)constructButtons;
- (void)updateParticipantCount:(long long)arg1;
- (id)menuView;
- (id)initWithBroadcastController:(id)arg1 menuItemsToShow:(id)arg2 hasClickableHashTags:(_Bool)arg3 delegate:(id)arg4 customTwitterViewDelegate:(id)arg5;
- (void)broadcastOverflowMenuTitleViewDidTapHashtag:(id)arg1;
- (void)broadcastOverflowMenuViewDidTapEmptySpace:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

