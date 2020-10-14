//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PeriscopeSDK/PTVTableViewFullScreen-Protocol.h>

@class NSString, UIImageView, UILabel;

@interface PTVEmptyTableView : UIView <PTVTableViewFullScreen>
{
    _Bool _shouldCoverTableHeaderView;
    UIImageView *_emptyImage;
    UILabel *_emptyLabel;
    UILabel *_subtitleLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) UIImageView *emptyImage; // @synthesize emptyImage=_emptyImage;
@property(nonatomic) _Bool shouldCoverTableHeaderView; // @synthesize shouldCoverTableHeaderView=_shouldCoverTableHeaderView;
- (void)setSubtitleText:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)setImageHidden:(_Bool)arg1;
- (struct CGRect)frameForFullViewScreenInTableView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithText:(id)arg1 imageHidden:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

