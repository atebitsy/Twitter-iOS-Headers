//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class T1QuotedStatusView, TFNTwitterAccount, TFNTwitterStatus, TFSTwitterScribeContext;

@interface T1DirectMessageComposeQuotedStatusPreviewView : UIView
{
    TFNTwitterAccount *_account;
    T1QuotedStatusView *_quotedStatusView;
    TFNTwitterStatus *_status;
    TFSTwitterScribeContext *_scribeContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(retain, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
@property(retain, nonatomic) T1QuotedStatusView *quotedStatusView; // @synthesize quotedStatusView=_quotedStatusView;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void)layoutSubviews;
- (void)_updateQuotedStatusView;
- (struct CGSize)intrinsicContentSize;
- (id)initWithAccount:(id)arg1 scribeContext:(id)arg2;

@end

