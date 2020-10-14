//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterAVCore/NSCopying-Protocol.h>

@class AVMediaSelectionOption, NSArray;

@interface TAVFoundationMediaSelectionGroup : NSObject <NSCopying>
{
    NSArray *_options;
    AVMediaSelectionOption *_selectedOption;
}

- (void).cxx_destruct;
@property(copy, nonatomic) AVMediaSelectionOption *selectedOption; // @synthesize selectedOption=_selectedOption;
@property(copy, nonatomic) NSArray *options; // @synthesize options=_options;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOptions:(id)arg1 selectedOption:(id)arg2;

@end

