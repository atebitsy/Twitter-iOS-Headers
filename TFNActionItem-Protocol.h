//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/NSObject-Protocol.h>

@class NSString, UIImage;

@protocol TFNActionItem <NSObject>
@property(readonly, nonatomic, getter=isDestructive) _Bool destructive;
@property(readonly, nonatomic, getter=isCancelItem) _Bool cancelItem;
@property(readonly, copy, nonatomic) NSString *imageName;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, copy, nonatomic) CDUnknownBlockType action;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@end

