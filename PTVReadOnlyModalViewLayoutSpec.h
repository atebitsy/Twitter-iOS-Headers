//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PTVReadOnlyModalViewLayoutSpec : NSObject
{
}

+ (struct CGRect)SubtitleFrame:(struct CGSize)arg1 TitleLabelSize:(struct CGSize)arg2 SuperViewSize:(struct CGSize)arg3;
+ (id)SubtitleAttributed:(id)arg1;
+ (struct CGRect)TitleFrame:(struct CGSize)arg1 SuperViewSize:(struct CGSize)arg2;
+ (id)TitleAttributed:(id)arg1;
+ (struct CGSize)SubtitleLabelSize:(id)arg1 ModalViewSize:(struct CGSize)arg2;
+ (struct CGSize)TitleLabelSize:(id)arg1 ModalViewSize:(struct CGSize)arg2;
+ (struct CGRect)DismissButtonFrameWithSize:(struct CGSize)arg1 ContainerSize:(struct CGSize)arg2;
+ (double)ModalViewCornerRadius;
+ (double)ModalHeightWithTitleLabelSize:(struct CGSize)arg1 SubtitleLabelSize:(struct CGSize)arg2;
+ (double)ModalWidthWithContainerSize:(struct CGSize)arg1;
+ (struct CGRect)ModalViewFrameWithSize:(struct CGSize)arg1 ContainerSize:(struct CGSize)arg2;
+ (id)SubtitleFont;
+ (id)TitleFont;
+ (struct UIEdgeInsets)ContentMargins;
+ (struct UIEdgeInsets)MinimumOuterInsets;
+ (double)YDistanceBetweenTitleAndSubtitle;

@end

