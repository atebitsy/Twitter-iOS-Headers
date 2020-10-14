//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, TFNTwitterCardImageSpec;
@protocol TFNTwitterCardDataSource;

@interface TFNTwitterAuthenticatedWebViewModel : NSObject
{
    _Bool _shouldPresentInExternalBrowser;
    NSURL *_webViewUrl;
    NSString *_webViewTitle;
    NSString *_title;
    NSString *_byline;
    NSString *_callToAction;
    NSString *_badgeText;
    TFNTwitterCardImageSpec *_imageSpec;
    id <TFNTwitterCardDataSource> _cardDataSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TFNTwitterCardDataSource> cardDataSource; // @synthesize cardDataSource=_cardDataSource;
@property(readonly, nonatomic) TFNTwitterCardImageSpec *imageSpec; // @synthesize imageSpec=_imageSpec;
@property(readonly, nonatomic) _Bool shouldPresentInExternalBrowser; // @synthesize shouldPresentInExternalBrowser=_shouldPresentInExternalBrowser;
@property(readonly, nonatomic) NSString *badgeText; // @synthesize badgeText=_badgeText;
@property(readonly, nonatomic) NSString *callToAction; // @synthesize callToAction=_callToAction;
@property(readonly, nonatomic) NSString *byline; // @synthesize byline=_byline;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *webViewTitle; // @synthesize webViewTitle=_webViewTitle;
@property(readonly, nonatomic) NSURL *webViewUrl; // @synthesize webViewUrl=_webViewUrl;
- (id)webViewUrlWithTweetParams;
- (id)initWithCardContext:(id)arg1;
- (id)init;

@end

