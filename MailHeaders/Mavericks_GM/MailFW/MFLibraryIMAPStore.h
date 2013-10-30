/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Mail/MFRemoteStore.h>

#import "IMAPMailboxDelegate.h"
#import "IMAPMessageDataSource.h"

@class IMAPCommandPipeline, IMAPDownloadCache, IMAPMailbox, IMAPMailboxSyncEngine, MCInvocationQueue, NSLock, NSMutableArray, NSMutableDictionary, NSString;

@interface MFLibraryIMAPStore : MFRemoteStore <IMAPMailboxDelegate, IMAPMessageDataSource>
{
    double _lastNewMailCheckAllowedTime;
    NSString *_mailboxName;
    IMAPMailbox *_IMAPMailbox;
    IMAPDownloadCache *_downloadCache;
    IMAPCommandPipeline *_fetchPipeline;
    IMAPMailboxSyncEngine *_syncEngine;
    NSLock *_copyLock;
    NSMutableArray *_pendingCompacts;
    MCInvocationQueue *_pendingCompactsQueue;
    NSMutableDictionary *_recentFlagChangesByMessageID;
    NSMutableArray *_recentlyDeletedMessageIDs;
    BOOL _supportsCustomPermanentFlags;
    BOOL _readyToDealloc;
    unsigned long long _filesystemWatcherCookie;
    BOOL _isOpenedByUser;
    BOOL _startedWatcher;
    unsigned long long _totalCount;
}

+ (id)_newDataFromMimePart:(id)arg1 threshold:(unsigned long long)arg2;
@property BOOL startedWatcher; // @synthesize startedWatcher=_startedWatcher;
@property unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property BOOL isOpenedByUser; // @synthesize isOpenedByUser=_isOpenedByUser;
- (void)updateSelectedGatewayFromMailbox:(id)arg1;
- (void)_updateUidValidityFromMailbox:(id)arg1;
- (void)_processResponsesFromMailbox:(id)arg1;
- (void)_updateCountFromMailbox:(id)arg1 fromIDLE:(id)arg2;
- (void)updateComputedHighestModificationSequence:(unsigned long long)arg1 forMailbox:(id)arg2;
- (unsigned long long)computedHighestModificationSequenceForMailbox:(id)arg1;
- (void)updateAllegedHighestModificationSequence:(unsigned long long)arg1 forMailbox:(id)arg2;
- (unsigned long long)allegedHighestModificationSequenceForMailbox:(id)arg1;
- (void)updateUidValidityFromMailbox:(id)arg1;
- (void)processResponsesFromMailbox:(id)arg1;
- (void)updateCountFromMailbox:(id)arg1 fromIDLE:(BOOL)arg2;
- (id)offlineCacheIfOffline;
- (id)_offlineCache;
- (id)account;
- (id)messagesBeingRouted;
- (id)downloadCache;
- (id)fetchPipeline;
- (void)_setBackgroundColorForMessages:(id)arg1 textColorForMessages:(id)arg2;
- (void)messagesWereAdded:(id)arg1 conversationsMembers:(id)arg2 duringOpen:(BOOL)arg3 options:(id)arg4;
- (BOOL)isSortedAscending;
- (id)sortOrder;
- (void)writeUpdatedMessageDataToDisk;
- (id)_deletedMessages;
- (id)_copyOfAllMessagesSortedByUidWithOptions:(unsigned int)arg1;
- (void)setUid:(unsigned int)arg1 forMessageWithTemporaryUid:(unsigned int)arg2;
- (id)copyOfOldCachedMessagesContentsForUid:(unsigned int)arg1;
- (BOOL)hasValidCacheFileForUid:(unsigned int)arg1;
- (BOOL)hasValidCacheFileForMessage:(id)arg1;
- (id)_preferredOrderForFetchingMessageBodies:(id)arg1;
- (void)forceResync;
- (void)_retrieveNewMessagesForCheckingNewMail:(BOOL)arg1;
- (void)_updateLastNewMailCheckAllowedTime;
- (void)setComputedHighestModificationSequence:(unsigned long long)arg1;
- (void)setAllegedHighestModificationSequence:(unsigned long long)arg1;
- (unsigned long long)allegedHighestModificationSequence;
- (void)setUidNextStatus:(unsigned int)arg1;
- (unsigned int)uidNextStatus;
- (void)setUidValidityStatus:(unsigned int)arg1;
- (id)_uidIndexSetForMessages:(id)arg1;
- (void)startSynchronization;
- (id)_gatewayCreateIfNeeded:(BOOL)arg1 options:(unsigned long long)arg2;
- (id)copyOfAllMessagesWithSubjects;
- (BOOL)messageHasBeenDeleted:(id)arg1;
- (BOOL)canSetMessageColors;
- (void)setBackgroundColorForMessages:(id)arg1 textColorForMessages:(id)arg2;
- (id)messageWithRemoteID:(id)arg1 inRemoteMailbox:(id)arg2;
- (id)duplicateMessages:(id)arg1 newRemoteIDs:(id)arg2 newDocumentIDs:(id)arg3 forMailbox:(id)arg4 setFlags:(long long)arg5 clearFlags:(long long)arg6 createNewCacheFiles:(BOOL)arg7;
- (id)duplicateMessages:(id)arg1 newRemoteIDs:(id)arg2 newDocumentIDs:(id)arg3 forMailbox:(id)arg4 setFlags:(long long)arg5 clearFlags:(long long)arg6 messageFlagsForMessages:(id)arg7 createNewCacheFiles:(BOOL)arg8;
- (id)messagesForMailbox:(id)arg1 where:(id)arg2 sortedBy:(id)arg3 ascending:(BOOL)arg4 options:(unsigned int)arg5;
- (void)compactMailbox:(id)arg1;
- (BOOL)hasCacheFileForMessage:(id)arg1 directoryContents:(id)arg2;
- (BOOL)hasCacheFileForMessage:(id)arg1 part:(id)arg2 directoryContents:(id)arg3;
- (unsigned long long)totalCountOfMessages;
- (id)getDetailsForMessagesWithRemoteIDs:(id)arg1;
- (unsigned int)maximumRemoteID;
- (id)messageForMessageID:(id)arg1;
- (id)colorForMessage:(id)arg1;
- (id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3;
- (id)_waitForDataFromDownload:(id)arg1 uid:(unsigned int)arg2 gateway:(id)arg3;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3;
- (BOOL)hasCachedDataForMimePart:(id)arg1;
- (BOOL)_hasCachedDataForMimePart:(id)arg1 message:(id)arg2;
- (id)cacheDirectoryContents;
- (id)dataForMimePart:(id)arg1;
- (id)_fetchDataForMimePart:(id)arg1 keepInMemory:(BOOL)arg2 writeToDisk:(BOOL)arg3;
- (id)_dataForMessage:(id)arg1 readHeadersOnly:(BOOL)arg2;
- (id)messagesWithRowIDs:(id)arg1;
- (id)messageWithDefaultLoadOptionsAndRowID:(long long)arg1;
@property(readonly) BOOL persistentIDType;
- (void)syncEngineDidSynchronizeMessageList;
- (void)_internalSetFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 updatingServer:(BOOL)arg3;
- (id)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)_synchronouslyStoreLabelsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)async_setGmailLabelsFromDictionary:(id)arg1 forMessages:(id)arg2 updatingServer:(BOOL)arg3;
- (id)async_setGmailLabelsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)recentFlagChangesForRowID:(id)arg1;
- (void)_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)_synchronouslyStoreFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (BOOL)messagesAreBeingAdded;
- (void)addMessages:(id)arg1;
- (id)newDictionaryForLocalFlags:(unsigned int)arg1 serverFlags:(unsigned int)arg2 existingDictionary:(id)arg3;
- (long long)undoAppendOfMessageIDs:(id)arg1;
- (id)_uidSearchForMessageIds:(id)arg1 destinationUidNext:(unsigned int)arg2 withGateway:(id)arg3;
- (long long)_appendToServerWithContext:(id)arg1 error:(id *)arg2;
- (BOOL)_copyMessagesByID:(id)arg1 toStore:(id)arg2 settingFlags:(id)arg3 newMessages:(id)arg4 error:(id *)arg5;
- (void)_copyFlagsFromMessages:(id)arg1 flagsByMessage:(id)arg2 toMessagesWithUids:(id)arg3 withGateway:(id)arg4 usedFlags:(id)arg5;
- (BOOL)allowsOverwrite;
- (BOOL)allowsAppend;
- (id)messagesBeingAdded;
- (void)undeleteMessagesWithRemoteIDs:(id)arg1;
- (void)deleteLastMessageWithHeaders:(id)arg1 compactWhenDone:(BOOL)arg2;
- (void)deleteMessagesOlderThanNumberOfDays:(long long)arg1 compact:(BOOL)arg2;
- (void)compactMessagesFromSyncEngine:(id)arg1;
- (void)compactMessages:(id)arg1;
- (void)_processPendingCompacts;
- (void)doCompact;
- (BOOL)canCompact;
- (id)mailbox;
- (id)mailboxName;
- (void)removeAllLocalMessages;
- (BOOL)canRebuild;
- (void)syncEngineDidFinish;
- (void)syncEngineDidStart;
- (void)doRoutineCleanup;
- (void)cleanupSynchronously;
- (void)fetchSynchronouslyForKnownChanges;
- (void)fetchSynchronously;
- (void)checkNewMail;
- (void)_fetchForCheckingNewMail:(BOOL)arg1;
- (BOOL)isInbox;
- (BOOL)_shouldCallCompactWhenClosing;
- (void)invalidateSyncEngine;
- (void)_invalidate;
- (BOOL)setStoreState:(int)arg1 fromState:(int)arg2;
- (id)willDeallocPerformingInStoreCacheLock:(char *)arg1;
- (void)openSynchronouslyWithoutUserInteraction;
- (void)openSynchronouslyUpdatingMetadata:(BOOL)arg1;
- (void)_openSynchronouslyUpdatingMetadata:(BOOL)arg1 withOptions:(unsigned long long)arg2;
- (void)openAsynchronously;
- (id)messagesForImporter;
@property(readonly) BOOL isReadOnly;
- (unsigned int)_permanentFlags;
- (BOOL)_isSynchronized;
- (BOOL)_isRebuildingOrSynchronizing;
- (id)_copyMailboxSyncEngineCreateIfNecessary:(BOOL)arg1 setupGatewayIfNecessary:(BOOL)arg2;
- (id)_IMAPMailbox;
- (void)dealloc;
- (id)initWithCriterion:(id)arg1 mailbox:(id)arg2 readOnly:(BOOL)arg3;
- (id)objectSpecifierForMessage:(id)arg1;

@end

