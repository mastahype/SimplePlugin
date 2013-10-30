/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface ActivityViewerMailSound : NSObject
{
    BOOL _fetchWasRequested;
    BOOL _waitingForServerResponse;
    BOOL _shouldPlayNoMailSound;
    long long _backgroundFetchesInProgress;
}

- (void)_mailFetchComplete;
- (BOOL)_isActivityInteresting:(id)arg1 isStarting:(BOOL)arg2;
- (void)_monitoredActivityEnded:(id)arg1;
- (void)_monitoredActivityStarted:(id)arg1;
- (void)beginFetch:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end

