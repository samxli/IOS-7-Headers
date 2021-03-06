/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SportsWorkout/SWRunWorkoutProxy.h>

@class NSDictionary, NSString, NSTimer;

@interface SWRemoteRunWorkoutProxyClient : SWRunWorkoutProxy
{
    NSTimer *_updateTimer;
    NSString *_goalType;
    NSString *_presetGoal;
    float _goal;
    NSString *_sensorSearchState;
    NSString *_workoutState;
    NSDictionary *_workoutData;
    BOOL _hasEverStarted;
    BOOL _hasPowerSong;
    NSString *_powerSongName;
    BOOL _shouldControlMusic;
    int _musicSelection;
    NSString *_currentSongName;
}

- (id)currentSongName;
- (int)musicSelection;
- (BOOL)shouldControlMusic;
- (id)powerSongName;
- (BOOL)hasPowerSong;
- (id)workoutData;
- (id)workoutState;
- (id)sensorSearchState;
- (float)goal;
- (id)presetGoal;
- (id)goalType;
- (void)endSeeking;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)selectNextSong;
- (void)selectPreviousSong;
- (void)playMusic;
- (void)pauseMusic;
- (void)goToNowPlaying;
- (void)playPowerSong;
- (void)playOnDemandPrompt;
- (void)_nowPlayingChanged:(id)arg1;
- (void)endWorkout;
- (void)pauseWorkout;
- (void)activateWorkout;
- (void)prepareToActivateWorkout;
- (void)_checkinWithServer;
- (void)_workoutStateChanged:(id)arg1;
- (void)_sensorSearchStateChanged:(id)arg1;
- (void)_handlePropertyUpdateNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

