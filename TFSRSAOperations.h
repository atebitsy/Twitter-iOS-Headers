//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TFSRSAOperations : NSObject
{
}

+ (id)base64PublicKeyForUser:(long long)arg1;
+ (id)signData:(id)arg1 forUser:(long long)arg2;
+ (void)generateKeyPairForUser:(long long)arg1;
+ (void)deleteKeyPairForUser:(long long)arg1;
+ (id)privateKeyQueryDictionaryForUserid:(long long)arg1;
+ (id)privateKeyTagForUserid:(long long)arg1;
+ (id)publicKeyQueryDictionaryForUserid:(long long)arg1;
+ (id)publicKeyTagForUserid:(long long)arg1;

@end

