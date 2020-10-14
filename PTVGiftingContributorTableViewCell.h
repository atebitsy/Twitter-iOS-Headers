//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, PTVDividerView, PTVParticipantsBarAvatarView, PTVRoundedButton, PTVTitleAndIconView, PTVTopContributorFlairView, PTVVirtualGiftContributor, UILabel;
@protocol PTVGiftingContributorTableViewCellDelegate;

@interface PTVGiftingContributorTableViewCell : UITableViewCell
{
    PTVParticipantsBarAvatarView *_avatarView;
    UILabel *_nameLabel;
    PTVTitleAndIconView *_amountLabel;
    _Bool _showsFollowButton;
    _Bool _blocked;
    PTVVirtualGiftContributor *_contributor;
    long long _lastAmount;
    UILabel *_topContributorLabel;
    UILabel *_userDescriptionLabel;
    _Bool _topContributor;
    PTVTopContributorFlairView *_flairView;
    NSLayoutConstraint *_avatarTopConstraint;
    NSLayoutConstraint *_flairViewTopConstraint;
    id <PTVGiftingContributorTableViewCellDelegate> _delegate;
    PTVDividerView *_bottomBorder;
    NSLayoutConstraint *_bottomConstraint;
    PTVRoundedButton *_followButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PTVRoundedButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(readonly, nonatomic) PTVDividerView *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(nonatomic) __weak id <PTVGiftingContributorTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setShowsFollowButton:(_Bool)arg1;
- (void)updateFollowAppearanceForFollowing:(_Bool)arg1;
- (void)followButtonDidTap;
- (void)setBlockedUserWithContribution:(long long)arg1;
- (void)setTopContributor:(_Bool)arg1;
- (void)setContributor:(id)arg1 maxContribution:(long long)arg2 isActiveContributor:(_Bool)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

