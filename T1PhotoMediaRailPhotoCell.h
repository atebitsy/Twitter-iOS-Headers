//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class PHAsset, T1PhotoCachingImageManagerHelper, T1PhotoGalleryAssetView, UIView;

@interface T1PhotoMediaRailPhotoCell : UICollectionViewCell
{
    _Bool _enabled;
    _Bool _livePhotoBadgeEnabled;
    T1PhotoGalleryAssetView *_assetView;
    UIView *_disablingOverlayView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *disablingOverlayView; // @synthesize disablingOverlayView=_disablingOverlayView;
@property(retain, nonatomic) T1PhotoGalleryAssetView *assetView; // @synthesize assetView=_assetView;
@property(nonatomic, getter=islivePhotoBadgeEnabled) _Bool livePhotoBadgeEnabled; // @synthesize livePhotoBadgeEnabled=_livePhotoBadgeEnabled;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)prepareForReuse;
- (void)_t1_updateLivePhotosDisplayBadge;
- (void)_t1_updateDisablingOverlayView;
@property(retain, nonatomic) PHAsset *asset;
@property(retain, nonatomic) T1PhotoCachingImageManagerHelper *cachingImageManagerHelper;
- (id)initWithFrame:(struct CGRect)arg1;

@end

