//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPIFoundMediaCommand.h>

@class NSString;

@interface TFSTwitterAPIFoundMediaTrendingCommand : TFSTwitterAPIFoundMediaCommand
{
    NSString *_provider;
    NSString *_cursor;
    long long _imageFormat;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long imageFormat; // @synthesize imageFormat=_imageFormat;
@property(readonly, copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(readonly, copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
- (id)request;
- (id)initWithAccountID:(id)arg1 provider:(id)arg2 cursor:(id)arg3 imageFormat:(long long)arg4 context:(id)arg5 source:(unsigned long long)arg6 responseModelBuilder:(id)arg7 completionBlock:(CDUnknownBlockType)arg8;

@end

