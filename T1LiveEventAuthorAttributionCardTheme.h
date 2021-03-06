//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1LiveEventAuthorAttributionTheme-Protocol.h>

@class NSString, UIColor, UIFont;

@interface T1LiveEventAuthorAttributionCardTheme : NSObject <T1LiveEventAuthorAttributionTheme>
{
}

- (id)viewContainingAvatarImageView:(id)arg1 fullNameLabel:(id)arg2 verifiedIcon:(id)arg3 handleLabel:(id)arg4;
- (double)avatarHeightWithLayoutMetrics:(id)arg1;
@property(readonly, copy, nonatomic) UIColor *authorUserHandleColor;
@property(readonly, copy, nonatomic) UIFont *authorUserHandleFont;
@property(readonly, copy, nonatomic) UIColor *authorUserFullnameColor;
@property(readonly, copy, nonatomic) UIFont *authorUserFullnameFont;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

