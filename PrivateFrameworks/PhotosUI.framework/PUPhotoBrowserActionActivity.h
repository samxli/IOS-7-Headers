/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIActivity.h"

@class NSString;

@interface PUPhotoBrowserActionActivity : UIActivity
{
    id _actionHandler;
    NSString *_identifier;
    NSString *_imageName;
}

+ (int)activityCategory;
- (void).cxx_destruct;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (void)performActivity;
- (void)_triggerAction;
- (id)initWithIdentifier:(id)arg1 imageName:(id)arg2 actionHandler:(id)arg3;

@end

