//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;

@interface T1NudgeCondensedView : UIView
{
    UILabel *_textLabel;
    UIView *_iconView;
    UIButton *_moreInfoButton;
    CDUnknownBlockType _moreInfoButtonActionBlock;
    NSString *_iconName;
    NSString *_text;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(copy, nonatomic) CDUnknownBlockType moreInfoButtonActionBlock; // @synthesize moreInfoButtonActionBlock=_moreInfoButtonActionBlock;
@property(retain, nonatomic) UIButton *moreInfoButton; // @synthesize moreInfoButton=_moreInfoButton;
@property(retain, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void)_t1_moreInfoButtonSelected:(id)arg1;
- (id)initWithIconName:(id)arg1 text:(id)arg2;

@end

