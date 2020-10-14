//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNPickableValue-Protocol.h>

@class NSFormatter, NSString, UIImage;

@interface TFNPickerFormattedValue : NSObject <TFNPickableValue>
{
    id _value;
    NSFormatter *_formatter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSFormatter *formatter; // @synthesize formatter=_formatter;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
- (_Bool)isEqualToFormattedValue:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *valueName;
- (id)init;
- (id)initWithValue:(id)arg1 formatter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *valueDetail;
@property(readonly, nonatomic) UIImage *valueIcon;
@property(readonly, copy, nonatomic) NSString *valueShortName;

@end

