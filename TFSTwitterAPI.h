//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSAPI/TFSAPI.h>

@protocol TFSTwitterAPIConfiguration;

@interface TFSTwitterAPI : TFSAPI
{
    id <TFSTwitterAPIConfiguration> _configuration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <TFSTwitterAPIConfiguration> configuration; // @synthesize configuration=_configuration;
- (id)initWithAuthenticator:(id)arg1 headerProvider:(id)arg2 cardsPlatformIdentifier:(id)arg3 URLBaseProvider:(id)arg4 URLCacheProvider:(CDUnknownBlockType)arg5 optionalStatusParametersDictionary:(id)arg6 optionalUserParametersDictionary:(id)arg7 additionalContentDecoders:(id)arg8 additionalContentEncoders:(id)arg9;

@end

