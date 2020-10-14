//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFNTwitterAccount, TFNTwitterComposePlaceStore;
@protocol T1CameraPlacesFetcherDelegate;

@interface T1CameraPlacesFetcher : NSObject
{
    id <T1CameraPlacesFetcherDelegate> _delegate;
    TFNTwitterAccount *_account;
    TFNTwitterComposePlaceStore *_placeStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFNTwitterComposePlaceStore *placeStore; // @synthesize placeStore=_placeStore;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <T1CameraPlacesFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_t1_notification_placeStoreDidFailToFetchPlaces:(id)arg1;
- (void)_t1_notification_placeStoreDidFetchPlaces:(id)arg1;
- (void)fetchCurrentPlacesAtLocation:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (id)init;

@end

