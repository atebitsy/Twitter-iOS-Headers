//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1ImageViewFetchHelperDelegate-Protocol.h>

@class NSString, NSURL, TFNHUD, TFNLegacyButton, TFNTwitterAccount, UIActivityIndicatorView, UIImageView;

@interface T1NotificationsAnniversaryViewController : TFNItemsDataViewController <T1ImageViewFetchHelperDelegate>
{
    TFNLegacyButton *_actionButton;
    UIImageView *_imageView;
    UIActivityIndicatorView *_activityIndicator;
    TFNHUD *_hud;
    TFNTwitterAccount *_account;
    NSString *_message;
    NSURL *_imageURL;
    NSString *_actionText;
    NSString *_tweetText;
    struct CGSize _imageDimensions;
    struct _NSRange _tweetCursor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct _NSRange tweetCursor; // @synthesize tweetCursor=_tweetCursor;
@property(readonly, copy, nonatomic) NSString *tweetText; // @synthesize tweetText=_tweetText;
@property(readonly, copy, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
@property(readonly, nonatomic) struct CGSize imageDimensions; // @synthesize imageDimensions=_imageDimensions;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void)t1_fetchHelper:(id)arg1 readyToConfigureView:(id)arg2 state:(long long)arg3;
- (void)update:(_Bool)arg1;
- (void)_showComposition;
- (void)_actionButtonTapped:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1 message:(id)arg2 imageURL:(id)arg3 imageDimensions:(struct CGSize)arg4 actionText:(id)arg5 tweetText:(id)arg6 tweetCursor:(struct _NSRange)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

