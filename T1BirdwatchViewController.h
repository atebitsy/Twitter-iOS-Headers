//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1WebViewController.h>

@class TFNBarButtonItem, UIBarButtonItem;
@protocol T1StatusViewModel;

@interface T1BirdwatchViewController : T1WebViewController
{
    TFNBarButtonItem *_backButton;
    UIBarButtonItem *_cancelButtonItem;
    UIBarButtonItem *_doneButtonItem;
    unsigned long long _mode;
    id <T1StatusViewModel> _statusViewModel;
}

+ (id)_t1_rootURLStringForMode:(unsigned long long)arg1 statusViewModel:(id)arg2 account:(id)arg3;
+ (void)presentFromViewController:(id)arg1 account:(id)arg2 statusViewModel:(id)arg3 mode:(unsigned long long)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) id <T1StatusViewModel> statusViewModel; // @synthesize statusViewModel=_statusViewModel;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) UIBarButtonItem *doneButtonItem; // @synthesize doneButtonItem=_doneButtonItem;
@property(retain, nonatomic) UIBarButtonItem *cancelButtonItem; // @synthesize cancelButtonItem=_cancelButtonItem;
@property(retain, nonatomic) TFNBarButtonItem *backButton; // @synthesize backButton=_backButton;
- (id)scribeComponent;
- (void)_t1_doneAction:(id)arg1;
- (void)_t1_cancelAction:(id)arg1;
- (void)_t1_backAction:(id)arg1;
- (void)_t1_presentNewWebViewWithURL:(id)arg1;
- (id)_t1_scribeComponentForMode:(unsigned long long)arg1;
- (void)_t1_updateNavigationItems;
- (void)didUpdateCurrentURL;
- (void)didUpdateCanGoBack;
- (void)didFinishLoadingWithError:(id)arg1;
- (_Bool)shouldStartLoadWithRequest:(id)arg1 navigationType:(long long)arg2;
- (_Bool)hasCustomNavigationBar;
- (_Bool)shouldHideSecuredIcon;
- (_Bool)shouldHideNavigationIcons;
- (_Bool)shouldHideShareSheetIcon;
- (void)viewDidLoad;
- (id)initWithRootURL:(id)arg1 account:(id)arg2 statusViewModel:(id)arg3 mode:(unsigned long long)arg4;

@end

