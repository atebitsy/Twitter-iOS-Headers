//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSModelBuilder-Protocol.h>

@protocol TFNDirectMessageUserCache;

@interface TFSDirectMessageResponseBuilder : NSObject <TFSModelBuilder>
{
    _Bool _filterNSFW;
    id <TFNDirectMessageUserCache> _userCache;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool filterNSFW; // @synthesize filterNSFW=_filterNSFW;
@property(readonly, nonatomic) id <TFNDirectMessageUserCache> userCache; // @synthesize userCache=_userCache;
- (id)modelObjectWithJSONData:(id)arg1 headerFields:(id)arg2 error:(out id *)arg3;
- (id)modelObjectWithJSONDictionary:(id)arg1 headerFields:(id)arg2 error:(out id *)arg3;
- (id)initWithUserCache:(id)arg1 filterNSFW:(_Bool)arg2;
- (id)initWithUserCache:(id)arg1;
- (id)init;

@end

