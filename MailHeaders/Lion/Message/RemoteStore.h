/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import <Message/LibraryStore.h>

@interface RemoteStore : LibraryStore
{
}

- (void)forceResync;
- (id)URLString;
- (BOOL)_shouldUpdateColorsAndAttachmentsAfterOpening;
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (void)willAddMessages;
- (void)didAddMessages;
- (void)enqueuedMessageChangesInExistingRequest;
- (id)addMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(BOOL)arg3 oldMessagesByNewMessage:(id)arg4;
- (id)addMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(BOOL)arg3 isInitialImport:(BOOL)arg4 oldMessagesByNewMessage:(id)arg5 remoteIDs:(id)arg6 setFlags:(long long)arg7 clearFlags:(long long)arg8 messageFlagsForMessages:(id)arg9 copyFiles:(BOOL)arg10;
- (id)messagesForMailbox:(id)arg1 olderThanNumberOfDays:(long long)arg2;
- (void)compactMessages:(id)arg1;
- (id)messageWithLibraryID:(long long)arg1 options:(unsigned int)arg2;
- (int)updateMessagesLocally:(id)arg1 missedMessages:(id)arg2 newMessageIDs:(id)arg3;
- (int)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 newDocumentIDsByOld:(id)arg5 flagsToSet:(id)arg6 forMove:(BOOL)arg7 error:(id *)arg8;
- (int)_doAppend:(CDStruct_9f3328ff *)arg1 fromStore:(id)arg2 error:(id *)arg3;
- (int)_appendToServerWithContext:(CDStruct_9f3328ff *)arg1 error:(id *)arg2;
- (void)deleteMessagesOlderThanNumberOfDays:(long long)arg1 compact:(BOOL)arg2;
- (void)undeleteMessagesWithDetails:(id)arg1;

@end

