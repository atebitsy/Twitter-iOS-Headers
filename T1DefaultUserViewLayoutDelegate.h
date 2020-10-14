//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1UserViewLayoutDelegate-Protocol.h>

@class NSString;

@interface T1DefaultUserViewLayoutDelegate : NSObject <T1UserViewLayoutDelegate>
{
}

+ (struct CGRect)contentRectForLayoutWithLayoutMetrics:(id)arg1;
+ (double)socialTextMaxHeight;
+ (double)namesToBioGap;
+ (id)infoTextFontForCellStyle:(long long)arg1 expanded:(_Bool)arg2;
+ (id)usernameFontForCellStyle:(long long)arg1 expanded:(_Bool)arg2;
+ (id)fullNameFontForCellStyle:(long long)arg1 expanded:(_Bool)arg2;
+ (struct CGRect)_getFollowsYouRectForUserViewModel:(id)arg1 layoutMetrics:(id)arg2 usernameRect:(struct CGRect)arg3 actionControlProvider:(id)arg4 account:(id)arg5 showBio:(_Bool)arg6 showFollowsYou:(_Bool)arg7;
+ (void)_getFullNameRect:(struct CGRect *)arg1 usernameRect:(struct CGRect *)arg2 forUserViewModel:(id)arg3 cellStyle:(long long)arg4 actionControlProvider:(id)arg5 avatarSize:(struct CGSize)arg6 muteBadgeSize:(struct CGSize)arg7 showBio:(_Bool)arg8 expanded:(_Bool)arg9 contentPadding:(struct UIEdgeInsets)arg10 contentWidth:(double)arg11 account:(id)arg12 layoutMetrics:(id)arg13 showCaret:(_Bool)arg14;
+ (id)socialTextFontForCellStyle:(long long)arg1 expanded:(_Bool)arg2;
+ (double)estimatedHeightForUserViewModel:(id)arg1 cellStyle:(long long)arg2 avatarSize:(struct CGSize)arg3 showBio:(_Bool)arg4 bioMaxLines:(unsigned long long)arg5 showUserBlocked:(_Bool)arg6 showDesignatorBadge:(_Bool)arg7 expanded:(_Bool)arg8 layoutMetrics:(id)arg9;
+ (double)heightForDesignatorBadgeWithLayoutMetrics:(id)arg1 userViewModel:(id)arg2 account:(id)arg3 showDesignatorBadge:(_Bool)arg4;
+ (double)heightForBioTextWithLayoutMetrics:(id)arg1 userViewModel:(id)arg2 account:(id)arg3 showBio:(_Bool)arg4 bioMaxLines:(unsigned long long)arg5;
+ (double)contentHeightForContentPadding:(struct UIEdgeInsets)arg1 avatarSize:(struct CGSize)arg2 namesHeight:(double)arg3 actionControlHeight:(double)arg4 socialTextHeight:(double)arg5 bioSizeHeight:(double)arg6 infoTextHeight:(double)arg7 designatorBadgeHeight:(double)arg8;
+ (double)heightForUserViewModel:(id)arg1 account:(id)arg2 cellStyle:(long long)arg3 actionControlProvider:(id)arg4 avatarSize:(struct CGSize)arg5 showBio:(_Bool)arg6 bioMaxLines:(unsigned long long)arg7 showUserBlocked:(_Bool)arg8 showDesignatorBadge:(_Bool)arg9 showFollowsYou:(_Bool)arg10 expanded:(_Bool)arg11 layoutMetrics:(id)arg12;
+ (double)heightForUserViewModel:(id)arg1 account:(id)arg2 cellStyle:(long long)arg3 followControlType:(unsigned long long)arg4 followControlVariant:(unsigned long long)arg5 avatarSize:(struct CGSize)arg6 showBio:(_Bool)arg7 bioMaxLines:(unsigned long long)arg8 showUserBlocked:(_Bool)arg9 showDesignatorBadge:(_Bool)arg10 showFollowsYou:(_Bool)arg11 expanded:(_Bool)arg12 layoutMetrics:(id)arg13;
+ (struct CGSize)defaultAvatarSizeForStyle:(long long)arg1 showBio:(_Bool)arg2 layoutMetrics:(id)arg3;
+ (id)sharedLayoutDelegate;
- (void)_applyLayoutState:(id)arg1 toUserView:(id)arg2;
- (void)_layoutInfoText:(struct CGRect)arg1 xOrigin:(double)arg2 textY:(double)arg3 layoutState:(id)arg4 userView:(id)arg5;
- (double)_layoutNames:(struct CGRect)arg1 textY:(double)arg2 layoutMetrics:(id)arg3 layoutState:(id)arg4 userView:(id)arg5;
- (struct CGRect)_layoutAdminBadgeWithContentRect:(struct CGRect)arg1 layoutState:(id)arg2 userView:(id)arg3;
- (struct CGRect)_layoutMuteBadgeWithContentRect:(struct CGRect)arg1 layoutState:(id)arg2 userView:(id)arg3;
- (id)_layoutStateForUserView:(id)arg1;
- (double)textContentTopForLayoutState:(id)arg1 layoutMetrics:(id)arg2 userView:(id)arg3 contentRect:(struct CGRect)arg4;
- (struct CGRect)layoutSocialBadgeFrameWithUserView:(id)arg1 socialTextRect:(struct CGRect)arg2 avatarRect:(struct CGRect)arg3;
- (struct CGRect)layoutSocialTextWithLayoutMetrics:(id)arg1 userView:(id)arg2 textX:(double)arg3 textY:(double)arg4;
- (void)layoutBioTextWithLayoutMetrics:(id)arg1 layoutState:(id)arg2 userView:(id)arg3;
- (void)layoutDesignatorBadgeWithLayoutMetrics:(id)arg1 layoutState:(id)arg2 userView:(id)arg3;
- (id)adjustedLayoutMetricsForLayoutMetrics:(id)arg1;
- (struct CGRect)layoutBorderViewWithContentRect:(struct CGRect)arg1 layoutState:(id)arg2 userView:(id)arg3;
- (struct CGRect)layoutCaretButtonWithContentRect:(struct CGRect)arg1 layoutState:(id)arg2 userView:(id)arg3;
- (struct CGRect)layoutActionControlWithContentRect:(struct CGRect)arg1 layoutState:(id)arg2 userView:(id)arg3;
- (struct CGRect)layoutAvatarWithLayoutMetrics:(id)arg1 userView:(id)arg2 layoutState:(id)arg3 contentRect:(struct CGRect)arg4;
- (id)layoutStateForUserView:(id)arg1;
- (_Bool)sizeThatFitsHelper:(id)arg1 shouldIncludeSubview:(id)arg2 inSizeThatFitsCalculationForView:(id)arg3;
- (void)sizeThatFitsHelper:(id)arg1 layoutSubviewsForView:(id)arg2 atWidth:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

