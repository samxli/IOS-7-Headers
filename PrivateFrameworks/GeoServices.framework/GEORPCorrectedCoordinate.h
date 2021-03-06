/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@class GEOLatLng;

@interface GEORPCorrectedCoordinate : PBCodable
{
    GEOLatLng *_correctedCoordinate;
    GEOLatLng *_originalCoordinate;
}

@property(retain, nonatomic) GEOLatLng *correctedCoordinate; // @synthesize correctedCoordinate=_correctedCoordinate;
@property(retain, nonatomic) GEOLatLng *originalCoordinate; // @synthesize originalCoordinate=_originalCoordinate;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasOriginalCoordinate;
- (void)dealloc;

@end

