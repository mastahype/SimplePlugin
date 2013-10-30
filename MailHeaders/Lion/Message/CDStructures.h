/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

@class IMAPFetchResult, NSArray, NSColor, NSDictionary, NSIndexSet, NSSet, NSString;

#pragma mark Named Structures

//struct EnrichedState {
//    unsigned int excerptLevel:8;
//    unsigned int alignment:4;
//    unsigned int bold:1;
//    unsigned int italic:1;
//    unsigned int fixed:1;
//    unsigned int underline:1;
//    unsigned int fontDelta:16;
//    NSString *fontFamily;
//    NSColor *color;
//};

struct __CFArray;

struct __CFDictionary;

struct internal_state;

struct sasl_callback {
    unsigned long long _field1;
    void *_field2;
    void *_field3;
};

struct sasl_secret {
    unsigned long long _field1;
    unsigned char _field2[1];
};

struct z_stream_s {
    char *next_in;
    unsigned int avail_in;
    unsigned long long total_in;
    char *next_out;
    unsigned int avail_out;
    unsigned long long total_out;
    char *msg;
    struct internal_state *state;
    void *zalloc;
    void *zfree;
    void *opaque;
    int data_type;
    unsigned long long adler;
    unsigned long long reserved;
};

#if 0
// Names with conflicting types:
typedef struct {
    NSString *_field1;
    unsigned long long _field2;
    id _field3;
    struct _CommandStackEntry *_field4;
} _CommandStackEntry_ce26798d;

#endif

#pragma mark Typedef'd Structures

//typedef struct {
//    id _field1;
//    id _field2;
//    char _field3;
//    id _field4;
//    id _field5;
//    id _field6;
//    id _field7;
//    unsigned long long _field8;
//    unsigned int _field9;
//    char _field10;
//} CDStruct_9f3328ff;

//typedef struct {
//    id _field1;
//    unsigned int :1;
//    unsigned int :1;
//    unsigned int :1;
//    unsigned int :2;
//} CDStruct_3441fd00;

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned char _field7;
    unsigned char _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned char _field13;
    unsigned char _field14;
    unsigned char _field15;
    unsigned char _field16;
} CDStruct_bd2f613f;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
} CDStruct_19b88e92;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    char _field3;
    char _field4;
} CDStruct_c53ccb4e;

typedef struct {
    unsigned long long first;
    unsigned long long last;
} CDStruct_f792af56;

typedef struct {
    char *_field1;
    long long _field2;
    double _field3;
} CDStruct_21f7855f;

typedef struct {
    unsigned int reserved:26;
    unsigned int hasCustomEncoding:1;
    unsigned int isPartial:1;
    unsigned int partsHaveBeenCached:1;
    unsigned int hasTemporaryUid:1;
    unsigned int isHTML:1;
    unsigned int isRich:1;
} CDStruct_3292de3e;

typedef struct {
    int version;
    int count;
    int timeStamp;
    float tocHeight;
    unsigned int sortOrder;
    unsigned int sortedAscending;
    int unused1;
    int unused2;
} CDStruct_c4d47a41;

typedef struct {
    long long count;
    unsigned long long size;
} CDStruct_d3e19d9e;

//typedef struct {
//    id _field1;
//    id _field2;
//    struct __CFDictionary *_field3;
//    struct __CFDictionary *_field4;
//    unsigned long long _field5;
//    unsigned long long _field6;
//    long long _field7;
//    id _field8;
//} CDStruct_591b809f;

typedef struct {
    unsigned short buffer[64];
    struct __CFString *theString;
    unsigned short *directBuffer;
    struct {
        long long location;
        long long length;
    } rangeToBuffer;
    long long bufferedRangeStart;
    long long bufferedRangeEnd;
} CDStruct_7e4886f7;

//typedef struct {
//    int _field1;
//    id _field2;
//    id _field3;
//    union {
//        char _field1;
//        CDStruct_21f7855f _field2;
//        CDStruct_21f7855f _field3;
//        struct {
//            id _field1;
//        } _field4;
//        struct {
//            struct __CFReadStream *_field1;
//            struct __CFWriteStream *_field2;
//        } _field5;
//    } _field4;
//} CDStruct_1d72fa59;

#pragma mark Named Unions

//union _IMAPResponseData {
//    struct {
//        long long responseCode;
//        id responseInfoAndOrUserData;
//    } basic;
//    NSArray *capabilities;
//    unsigned long long number;
//    NSSet *flags;
//    struct {
//        NSString *mailboxName;
//        NSDictionary *entries;
//    } status;
//    NSArray *searchResults;
//    struct {
//        unsigned long long mailboxAttributes;
//        id separatorAndOrMboxName;
//    } list;
//    struct {
//        unsigned long long number;
//        char isValid;
//        NSArray *items;
//    } fetch;
//    struct {
//        NSString *mailboxName;
//        NSArray *quotaRootNames;
//    } quotaRoot;
//    struct {
//        NSString *quotaRootName;
//        NSArray *quotas;
//    } quota;
//    NSDictionary *serverID;
//    struct {
//        NSIndexSet *uids;
//        IMAPFetchResult *flagsFetchResult;
//        char change;
//    } uidFlags;
//    struct {
//        NSString *name;
//        NSArray *parameters;
//    } other;
//};

