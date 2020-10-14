//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithResponseModelBuilder.h>

@class NSArray, NSNumber, NSString;

@interface TFSTwitterAPIVideoAdsV2PrerollsCommand : TFSTwitterAPICommandWithResponseModelBuilder
{
    _Bool _includeLongVideos;
    NSArray *_tweets;
    NSString *_prerollID;
    NSNumber *_dynamicPrerollType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool includeLongVideos; // @synthesize includeLongVideos=_includeLongVideos;
@property(retain, nonatomic) NSNumber *dynamicPrerollType; // @synthesize dynamicPrerollType=_dynamicPrerollType;
@property(retain, nonatomic) NSString *prerollID; // @synthesize prerollID=_prerollID;
@property(retain, nonatomic) NSArray *tweets; // @synthesize tweets=_tweets;
- (id)request;
- (id)initWithContext:(id)arg1 accountID:(id)arg2 tweets:(id)arg3 prerollID:(id)arg4 dynamicPrerollType:(id)arg5 includeLongVideos:(_Bool)arg6 source:(unsigned long long)arg7 responseModelBuilder:(id)arg8 completionBlock:(CDUnknownBlockType)arg9;

@end

