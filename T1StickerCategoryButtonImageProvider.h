//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNLegacyButtonImageProvider-Protocol.h>

@class NSString, UIImage;

@interface T1StickerCategoryButtonImageProvider : NSObject <TFNLegacyButtonImageProvider>
{
    UIImage *_image;
}

- (void).cxx_destruct;
@property(copy, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)imageWithHeight:(double)arg1 forAppearanceKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

