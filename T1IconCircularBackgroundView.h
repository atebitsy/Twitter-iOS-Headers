//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIImageView;

@interface T1IconCircularBackgroundView : UIView
{
    UIColor *_circularBackgroundColor;
    NSString *_iconName;
    UIColor *_iconColor;
    UIImageView *_iconImageView;
    UIView *_circularBackgroundView;
    struct CGSize _iconSize;
    struct CGSize _backgroundSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *circularBackgroundView; // @synthesize circularBackgroundView=_circularBackgroundView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) struct CGSize backgroundSize; // @synthesize backgroundSize=_backgroundSize;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(retain, nonatomic) UIColor *circularBackgroundColor; // @synthesize circularBackgroundColor=_circularBackgroundColor;
- (id)initWithIconName:(id)arg1 iconColor:(id)arg2 iconSize:(struct CGSize)arg3 backgroundSize:(struct CGSize)arg4;

@end

