//
//  AudioController.h
//  sfxrX
//
//  Created by Seth Willits on 4/23/08.
//  Copyright 2008 Araelium Group. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "portaudio.h"
@class SFXEffect;
@class SFXSynthesizer;
@class SFXSampleBuffer;


@interface SFXAudioPlayer : NSObject {
	PaStream * stream;
	BOOL mMuted;
	
	SFXSynthesizer * mSynthesizer;
	
	SFXSampleBuffer * mSampleBuffer;
	NSUInteger mNumSamplesPlayed;
}

@property (readwrite) BOOL muted;

+ (SFXAudioPlayer *)sharedInstance;
- (void)playSoundEffect:(SFXEffect *)effect;
- (void)stop;

@end