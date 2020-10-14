//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface PTVSpriteAnimationLayer : CALayer
{
    struct CGSize _imageSize;
    struct CGSize _animationFrameSize;
}

- (void)setCurrentFrame:(long long)arg1;
- (void)stopAnimating;
@property(readonly, nonatomic) _Bool animating;
- (void)animateWithFrameCount:(unsigned long long)arg1 duration:(double)arg2;
- (long long)maxFrames;
- (struct CGRect)contentForAnimationFrame:(long long)arg1;
- (id)initWithImage:(struct CGImage *)arg1 frameSize:(struct CGSize)arg2;
- (id)initWithLayer:(id)arg1;

@end

