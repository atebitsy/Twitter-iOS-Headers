//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImage, UIImageView, UILabel;
@protocol T1FilterGridItemViewDelegate, TGFFilter;

@interface T1FilterGridItemView : UIView
{
    UIImageView *_thumbImageView;
    UIButton *_button;
    UIView *_selectionStateView;
    UILabel *_label;
    id <TGFFilter> _filter;
    id <T1FilterGridItemViewDelegate> _delegate;
    struct UIEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <T1FilterGridItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, copy, nonatomic) id <TGFFilter> filter; // @synthesize filter=_filter;
- (void)_itemSelected:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImage *image;
@property(readonly, nonatomic) struct CGRect previewFrame;
- (void)showImage:(_Bool)arg1;
- (void)showLabel:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, copy, nonatomic) NSString *text;
@property(nonatomic, getter=isSelected) _Bool selected;
- (void)setText:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 filter:(id)arg2;

@end

