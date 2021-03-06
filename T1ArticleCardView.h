//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, T1CardImageView, TFNTwitterAccount, TFNTwitterCardData, UIImageView, UILabel, UIStackView;

@interface T1ArticleCardView : UIView
{
    NSString *_url;
    NSString *_displayURL;
    TFNTwitterAccount *_account;
    TFNTwitterCardData *_cardData;
    UIStackView *_horizontalContainerStackView;
    UIStackView *_verticalContainerStackView;
    T1CardImageView *_thumbnailImageView;
    UILabel *_headlineLabel;
    UILabel *_vanityURLLabel;
    UIImageView *_missingCardLinkImageView;
    UILabel *_missingCardURLLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *missingCardURLLabel; // @synthesize missingCardURLLabel=_missingCardURLLabel;
@property(retain, nonatomic) UIImageView *missingCardLinkImageView; // @synthesize missingCardLinkImageView=_missingCardLinkImageView;
@property(retain, nonatomic) UILabel *vanityURLLabel; // @synthesize vanityURLLabel=_vanityURLLabel;
@property(retain, nonatomic) UILabel *headlineLabel; // @synthesize headlineLabel=_headlineLabel;
@property(retain, nonatomic) T1CardImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) UIStackView *verticalContainerStackView; // @synthesize verticalContainerStackView=_verticalContainerStackView;
@property(retain, nonatomic) UIStackView *horizontalContainerStackView; // @synthesize horizontalContainerStackView=_horizontalContainerStackView;
@property(readonly, nonatomic) TFNTwitterCardData *cardData; // @synthesize cardData=_cardData;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSString *displayURL; // @synthesize displayURL=_displayURL;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
- (id)_t1_accessibilityLabelString;
- (void)_t1_configureSubviews;
- (id)initWithURL:(id)arg1 displayURL:(id)arg2 account:(id)arg3 cardData:(id)arg4;

@end

