//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterUserReference.h>

#import <TFSTwitterCore/NSCoding-Protocol.h>
#import <TFSTwitterCore/TFSTwitterScribableItem-Protocol.h>

@class NSDictionary, NSString;

@interface TFSTwitterUserReference (TFSTwitterCore) <NSCoding, TFSTwitterScribableItem>
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)scribeParametersWithProfileID:(_Bool)arg1 scribeItem:(_Bool)arg2;
@property(nonatomic, readonly) NSDictionary *scribeParameters;
@property(nonatomic, readonly) NSDictionary *scribeItem;
@property(nonatomic, readonly) NSString *scribeItemImpressionID;
@end

