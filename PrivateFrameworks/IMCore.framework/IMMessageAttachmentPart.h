/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IMCore/IMMessagePart.h>

@class IMFileTransfer, NSAttributedString, NSString;

@interface IMMessageAttachmentPart : IMMessagePart
{
    NSString *_transferGuid;
    NSAttributedString *_text;
}

@property(readonly, nonatomic) NSAttributedString *text; // @synthesize text=_text;
- (id)description;
@property(readonly, nonatomic) IMFileTransfer *fileTransfer;
- (void)dealloc;
- (id)initWithGUID:(id)arg1 fileTransfer:(id)arg2 text:(id)arg3;

@end

