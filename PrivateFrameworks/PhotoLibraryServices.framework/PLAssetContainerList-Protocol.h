/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"
#import "PLDiagnosticsProvider.h"

@protocol PLAssetContainerList <NSObject, PLDiagnosticsProvider>
@property(readonly, nonatomic) unsigned int containersCount;
- (id)containersRelationshipName;
- (id)photoLibrary;
- (id)managedObjectContext;
- (BOOL)canEditContainers;
- (BOOL)isEmpty;
- (id)containers;
@end

