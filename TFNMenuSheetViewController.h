//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <TFNUI/TFNMenuActionAdapterDelegate-Protocol.h>
#import <TFNUI/TFNModalSheetViewControllerDelegate-Protocol.h>
#import <TFNUI/TFNModalSheetViewControllerLayoutDelegate-Protocol.h>
#import <TFNUI/TFNPopoverSourceSpecification-Protocol.h>
#import <TFNUI/TFNPresented-Protocol.h>

@class NSArray, NSMutableArray, NSString, TFNActiveTextItem, TFNBarButtonItem, TFNMenuActionItem, TFNModalSheetViewController, UIBarButtonItem, UIColor, UIView;
@protocol TFNMenuSheetViewControllerDelegate;

@interface TFNMenuSheetViewController : TFNItemsDataViewController <TFNModalSheetViewControllerDelegate, TFNModalSheetViewControllerLayoutDelegate, TFNPopoverSourceSpecification, TFNPresented, TFNMenuActionAdapterDelegate>
{
    _Bool _allowCenteredPresentationWithoutSource;
    _Bool _showsCancelButton;
    _Bool _userDidSelectAction;
    UIView *_sourceView;
    UIBarButtonItem *_barButtonItem;
    TFNBarButtonItem *_closeButton;
    id <TFNMenuSheetViewControllerDelegate> _delegate;
    NSString *_message;
    UIColor *_chromeColor;
    UIColor *_messageTextColor;
    double _additionalBottomPadding;
    CDUnknownBlockType _dismissBlock;
    TFNModalSheetViewController *_modalSheet;
    TFNActiveTextItem *_messageTextItem;
    NSString *_messageIconName;
    NSArray *_actionItemSections;
    NSMutableArray *_items;
    TFNMenuActionItem *_cancelItem;
    struct CGRect _sourceRect;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool userDidSelectAction; // @synthesize userDidSelectAction=_userDidSelectAction;
@property(retain, nonatomic) TFNMenuActionItem *cancelItem; // @synthesize cancelItem=_cancelItem;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(readonly, copy, nonatomic) NSArray *actionItemSections; // @synthesize actionItemSections=_actionItemSections;
@property(copy, nonatomic) NSString *messageIconName; // @synthesize messageIconName=_messageIconName;
@property(retain, nonatomic) TFNActiveTextItem *messageTextItem; // @synthesize messageTextItem=_messageTextItem;
@property(nonatomic) __weak TFNModalSheetViewController *modalSheet; // @synthesize modalSheet=_modalSheet;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(nonatomic) double additionalBottomPadding; // @synthesize additionalBottomPadding=_additionalBottomPadding;
@property(retain, nonatomic) UIColor *messageTextColor; // @synthesize messageTextColor=_messageTextColor;
@property(retain, nonatomic) UIColor *chromeColor; // @synthesize chromeColor=_chromeColor;
@property(nonatomic) _Bool showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) __weak id <TFNMenuSheetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool allowCenteredPresentationWithoutSource; // @synthesize allowCenteredPresentationWithoutSource=_allowCenteredPresentationWithoutSource;
@property(retain, nonatomic) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
- (void)modalSheetViewControllerDidDismiss:(id)arg1 fromGesture:(_Bool)arg2;
- (void)modalSheetViewControllerWillDismiss:(id)arg1 fromGesture:(_Bool)arg2;
- (double)preferredHeightForModalSheetViewController:(id)arg1 modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets)arg2;
- (void)_tfn_removeCancelActionIfNeeded;
- (void)_tfn_addCancelActionIfNeeded;
- (void)modalSheetViewController:(id)arg1 willTransitionToLayoutMode:(long long)arg2 withTransitionCoordinator:(id)arg3;
- (void)tfnPresentedCustomDismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tfnPresentedCustomPresentFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)tfn_presentFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_tfn_menuSource;
- (void)presentAsMenuIfEnabledFromViewController:(id)arg1 withMenuSource:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentAsMenuIfEnabledFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_tfn_didTapCloseButton;
@property(readonly, nonatomic) TFNBarButtonItem *closeButton; // @synthesize closeButton=_closeButton;
- (void)tfn_fontSizeChanged;
- (id)_tfn_sectionsFilteredForActionItems;
@property(readonly, nonatomic) NSArray *actions;
- (void)_tfn_updateMessageItem;
- (id)_tfn_messageItemForMessage:(id)arg1 messageIconName:(id)arg2 textColor:(id)arg3;
- (void)menuActionAdapter:(id)arg1 didSelectActionItem:(id)arg2 atIndexPath:(id)arg3;
- (void)update:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 message:(id)arg2 messageIconName:(id)arg3 actionItemSections:(id)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2 actionItemSections:(id)arg3;
- (id)initWithTitle:(id)arg1 actionItems:(id)arg2;
- (id)initWithMessage:(id)arg1 actionItems:(id)arg2;
- (id)initWithActionItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

