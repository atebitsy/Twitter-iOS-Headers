//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSError, T1SlideshowSlide;

@protocol T1SlideshowSlideDelegate <NSObject>
- (void)slideshowSlideDidResetImage:(T1SlideshowSlide *)arg1;
- (void)slideshowSlide:(T1SlideshowSlide *)arg1 didFailToLoadImageWithError:(NSError *)arg2;
- (void)slideshowSlideDidSuccessfullyLoadImage:(T1SlideshowSlide *)arg1;
@end

