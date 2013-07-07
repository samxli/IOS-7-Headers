/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class SCRCPhotoEvaluatorResult, SCRCPhotoEvaluatorResultPeople;

__attribute__((visibility("hidden")))
@interface SCRCPhotoEvaluatorResults : NSObject
{
    SCRCPhotoEvaluatorResult *_blurResult;
    SCRCPhotoEvaluatorResult *_colorResult;
    SCRCPhotoEvaluatorResultPeople *_peopleResult;
    SCRCPhotoEvaluatorResult *_luminanceResult;
}

@property(readonly, nonatomic) SCRCPhotoEvaluatorResult *luminanceResult; // @synthesize luminanceResult=_luminanceResult;
@property(readonly, nonatomic) SCRCPhotoEvaluatorResultPeople *peopleResult; // @synthesize peopleResult=_peopleResult;
@property(readonly, nonatomic) SCRCPhotoEvaluatorResult *colorResult; // @synthesize colorResult=_colorResult;
@property(readonly, nonatomic) SCRCPhotoEvaluatorResult *blurResult; // @synthesize blurResult=_blurResult;
- (void)dealloc;
- (id)initWithBlurResult:(id)arg1 colorResult:(id)arg2 peopleResult:(id)arg3 luminanceResult:(id)arg4;

@end
