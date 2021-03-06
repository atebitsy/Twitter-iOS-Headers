//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterSuggestedItem-Protocol.h>

@class TFNTwitterFeedbackModule;

@protocol TFNTwitterDismissibleItem <TFNTwitterSuggestedItem>
@property(nonatomic, readonly) TFNTwitterFeedbackModule *feedbackModule;
- (_Bool)isDismissing;
@property(nonatomic, readonly) unsigned long long dismissibleContentType;
- (_Bool)isDismissible;

// Remaining properties
@property(nonatomic, readonly) _Bool dismissible;
@property(nonatomic, readonly) _Bool dismissing;
@end

