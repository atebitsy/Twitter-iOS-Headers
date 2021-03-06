//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1ForwardPivotViewModel-Protocol.h>

@class NSString, TFNTwitterAccount, TFSTwitterForwardPivot, UIColor, UIFont, UIImage;

@interface T1ForwardPivotViewModel : NSObject <T1ForwardPivotViewModel>
{
    TFSTwitterForwardPivot *_forwardPivot;
    TFNTwitterAccount *_account;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) TFSTwitterForwardPivot *forwardPivot; // @synthesize forwardPivot=_forwardPivot;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *landingUrlString;
@property(readonly, nonatomic) NSString *accessibilityString;
@property(readonly, nonatomic) UIImage *iconImage;
@property(readonly, copy, nonatomic) NSString *iconImageName;
@property(readonly, nonatomic) UIColor *iconColor;
@property(readonly, nonatomic) struct CGSize preferredIconImageSize;
@property(readonly, nonatomic) struct CGSize preferredChevronImageSize;
@property(readonly, nonatomic) _Bool hasImage;
@property(readonly, nonatomic) UIImage *chevronImage;
@property(readonly, nonatomic) UIColor *chevronColor;
@property(readonly, nonatomic) UIFont *middotFont;
@property(readonly, nonatomic) UIColor *middotTextColor;
@property(readonly, nonatomic, getter=shouldShowMiddot) _Bool showMiddot;
@property(readonly, nonatomic) UIColor *badgeColor;
@property(readonly, nonatomic) UIFont *badgeFont;
@property(readonly, copy, nonatomic) NSString *badgeTitle;
@property(readonly, nonatomic) UIColor *textColor;
@property(readonly, nonatomic) UIFont *textFont;
@property(readonly, copy, nonatomic) NSString *textTitle;
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets directionalLayoutMargins;
@property(readonly, nonatomic) double cornerRadius;
@property(readonly, nonatomic) UIColor *backgroundColor;
- (id)init;
- (id)initWithForwardPivot:(id)arg1 account:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

