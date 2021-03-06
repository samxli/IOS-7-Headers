/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

@interface AVTimeMarkerObservation : NSObject
{
    id _observer;
    NSArray *_times;
    id _context;
    int _currentIndex;
}

- (int)currentIndex;
- (id)context;
- (id)observer;
- (double)prevInterestingTime;
- (double)nextInterestingTime;
- (BOOL)gotoTime:(double)arg1;
- (void)dealloc;
- (id)initWithObserver:(id)arg1 times:(id)arg2 context:(id)arg3 currentIndex:(int)arg4;

@end

