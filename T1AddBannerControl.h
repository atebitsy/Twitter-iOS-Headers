//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImage, UIImageView, UILabel;

@interface T1AddBannerControl : UIControl
{
    UIImageView *_bannerImageView;
    UIImageView *_cameraIcon;
    UILabel *_cameraLabel;
    double _backgroundAlpha;
}

- (void).cxx_destruct;
@property(nonatomic) double backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
@property(retain, nonatomic) UILabel *cameraLabel; // @synthesize cameraLabel=_cameraLabel;
@property(retain, nonatomic) UIImageView *cameraIcon; // @synthesize cameraIcon=_cameraIcon;
@property(retain, nonatomic) UIImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(retain, nonatomic) UIImage *bannerImage;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithBackgroundAlpha:(double)arg1;

@end

