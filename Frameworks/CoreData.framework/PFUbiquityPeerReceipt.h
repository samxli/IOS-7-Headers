/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CoreData/PFUbiquitySafeSaveFile.h>

@class PFUbiquityKnowledgeVector, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityPeerReceipt : PFUbiquitySafeSaveFile
{
    PFUbiquityKnowledgeVector *_kv;
}

@property(readonly, nonatomic) PFUbiquityKnowledgeVector *kv; // @synthesize kv=_kv;
- (BOOL)writeFileToLocation:(id)arg1 error:(id *)arg2;
- (BOOL)loadFileFromLocation:(id)arg1 error:(id *)arg2;
- (id)description;
@property(readonly, nonatomic) PFUbiquityLocation *receiptFileLocation;
- (void)dealloc;
- (id)initWithLocalPeerID:(id)arg1 andReceiptFileLocation:(id)arg2;
- (id)initWithLocalPeerID:(id)arg1 andKnowledgeVector:(id)arg2 forPeerID:(id)arg3 storeName:(id)arg4 modelVersionHash:(id)arg5 andUbiquityRootLocation:(id)arg6;
- (id)initWithLocalPeerID:(id)arg1 receiptPeerID:(id)arg2 storeName:(id)arg3 modelVersionHash:(id)arg4 andUbiquityRootLocation:(id)arg5;
- (id)init;

@end
