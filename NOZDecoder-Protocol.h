//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ZipUtilities/NSObject-Protocol.h>

@protocol NOZDecoderContext;

@protocol NOZDecoder <NSObject>
- (_Bool)finalizeDecoderContext:(id <NOZDecoderContext>)arg1;
- (_Bool)decodeBytes:(const char *)arg1 length:(unsigned long long)arg2 context:(id <NOZDecoderContext>)arg3;
- (_Bool)initializeDecoderContext:(id <NOZDecoderContext>)arg1;
- (id <NOZDecoderContext>)createContextForDecodingWithBitFlags:(unsigned short)arg1 flushCallback:(_Bool (^)(id, id, char *, unsigned long long))arg2;
@end

