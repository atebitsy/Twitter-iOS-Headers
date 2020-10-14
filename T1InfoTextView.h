//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/TFNAttributedTextViewDelegate-Protocol.h>
#import <T1Twitter/TFNSizeThatFitsHelperDelegate-Protocol.h>

@class NSString, TFNAttributedTextView, TFNSizeThatFitsHelper, UIImageView;
@protocol T1InfoTextLayoutSpec;

@interface T1InfoTextView : UIView <TFNSizeThatFitsHelperDelegate, TFNAttributedTextViewDelegate>
{
    TFNSizeThatFitsHelper *_layoutHelper;
    id <T1InfoTextLayoutSpec> _layoutSpec;
    CDUnknownBlockType _urlClickActionBlock;
    CDUnknownBlockType _titleClickActionBlock;
    UIImageView *_badgeView;
    TFNAttributedTextView *_titleLabel;
    TFNAttributedTextView *_detailsLabel;
}

+ (void)frames:(struct CGRect *)arg1 forLayoutSpec:(id)arg2 atWidth:(double)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 forLayoutSpec:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) TFNAttributedTextView *detailsLabel; // @synthesize detailsLabel=_detailsLabel;
@property(retain, nonatomic) TFNAttributedTextView *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *badgeView; // @synthesize badgeView=_badgeView;
@property(copy, nonatomic) CDUnknownBlockType titleClickActionBlock; // @synthesize titleClickActionBlock=_titleClickActionBlock;
@property(copy, nonatomic) CDUnknownBlockType urlClickActionBlock; // @synthesize urlClickActionBlock=_urlClickActionBlock;
@property(readonly, nonatomic) id <T1InfoTextLayoutSpec> layoutSpec; // @synthesize layoutSpec=_layoutSpec;
- (void)_t1_handleClick;
- (void)attributedTextViewDidTapInactiveArea:(id)arg1;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
- (void)sizeThatFitsHelper:(id)arg1 layoutSubviewsForView:(id)arg2 atWidth:(double)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateAccessibility;
- (_Bool)updateWithLayoutSpecIfNeeded:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

