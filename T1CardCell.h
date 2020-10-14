//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

#import <T1Twitter/T1AutoplayViewContainer-Protocol.h>
#import <T1Twitter/T1AutoplayableContainer-Protocol.h>
#import <T1Twitter/T1CardViewDelegate-Protocol.h>
#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>

@class NSString, T1CardContainerView, T1CardItem, TFNDataViewController, UIImage, UIView;
@protocol TFNTwitterAVPlayerSessionSource;

@interface T1CardCell : TFNTableViewCell <T1CardViewDelegate, TFNLayoutMetricsEnvironment, T1AutoplayViewContainer, T1AutoplayableContainer>
{
    T1CardContainerView *_cardContainerView;
    CDUnknownBlockType _cardCellActionBlock;
    CDUnknownBlockType _presentPlayerBlock;
    CDUnknownBlockType _layoutMetricsDidChangeBlock;
    TFNDataViewController *_controller;
    T1CardItem *_item;
}

+ (id)cellLayoutFromCardContext:(id)arg1 displayMode:(long long)arg2 account:(id)arg3 layoutMetrics:(id)arg4 withPreviousLayout:(id)arg5;
+ (id)cellLayoutForCardItem:(id)arg1 account:(id)arg2 layoutMetrics:(id)arg3 withPreviousLayout:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) T1CardItem *item; // @synthesize item=_item;
@property(nonatomic) __weak TFNDataViewController *controller; // @synthesize controller=_controller;
@property(copy, nonatomic) CDUnknownBlockType layoutMetricsDidChangeBlock; // @synthesize layoutMetricsDidChangeBlock=_layoutMetricsDidChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType presentPlayerBlock; // @synthesize presentPlayerBlock=_presentPlayerBlock;
@property(copy, nonatomic) CDUnknownBlockType cardCellActionBlock; // @synthesize cardCellActionBlock=_cardCellActionBlock;
@property(retain, nonatomic) T1CardContainerView *cardContainerView; // @synthesize cardContainerView=_cardContainerView;
@property(readonly, nonatomic) UIImage *playerPreviewImage;
@property(readonly, nonatomic) UIView *playerContainerView;
@property(readonly, nonatomic) id <TFNTwitterAVPlayerSessionSource> playerSessionSource;
- (id)autoplayable;
- (void)cardView:(id)arg1 presentFullscreenPlayerFromMediaView:(id)arg2 withPreviewImage:(id)arg3;
- (id)cardView:(id)arg1 didFireViewEvent:(id)arg2;
- (id)layoutMetricsForCardView:(id)arg1;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setCellLayout:(id)arg1;
- (id)_t1_playerViewContainer;
- (void)configureCellWithCardContext:(id)arg1 contentEdgeInsets:(struct UIEdgeInsets)arg2;
- (void)configureCellWithCardItem:(id)arg1 account:(id)arg2 contentEdgeInsets:(struct UIEdgeInsets)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

