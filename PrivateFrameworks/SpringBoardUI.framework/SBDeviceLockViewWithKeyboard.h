/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SpringBoardUI/SBDeviceLockView.h>

@class UIKeyboard;

@interface SBDeviceLockViewWithKeyboard : SBDeviceLockView
{
    UIKeyboard *_keyboard;
    BOOL _isAnimating;
    BOOL _wasMinimizedWhenAnimationStarted;
    BOOL _triedToMinMaxWhileRotating;
    BOOL _previousKeyboardShowedInlineCandidates;
}

- (void)_acceptOrCancelReturnKeyPress;
- (void)_layoutEntryView;
- (void)_layoutForCurrentOrientation;
- (void)geometryChanged:(id)arg1;
- (void)didAnimateToInterfaceOrientation:(int)arg1;
- (void)animateToInterfaceInterfaceOrientation:(int)arg1;
- (void)willAnimateToInterfaceOrientation:(int)arg1;
- (void)setInterfaceOrientation:(int)arg1;
- (struct CGRect)keyboardFrameForInterfaceOrientation:(int)arg1;
- (void)returnKeyPressed:(id)arg1;
- (void)maximize;
- (void)minimize;
- (void)setMinimized:(BOOL)arg1;
- (BOOL)isKeypadMinimized;
- (id)keypadView;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (BOOL)canMinMaxKeyboard;
- (id)_initWithStyle:(int)arg1 interfaceOrientation:(int)arg2 showsEmergencyCall:(BOOL)arg3;

@end

