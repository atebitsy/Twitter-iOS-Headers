//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface T1FollowerRequests : NSObject
{
    NSArray *_userIDs;
    unsigned long long _unreadCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(retain, nonatomic) NSArray *userIDs; // @synthesize userIDs=_userIDs;
- (unsigned long long)updateWithFollowerRequests:(id)arg1;
- (_Bool)isRequestUnreadAtIndex:(unsigned long long)arg1;
- (id)init;

@end

