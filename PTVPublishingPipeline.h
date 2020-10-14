//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeSDK/PTVEncodedOutputDelegate-Protocol.h>
#import <PeriscopeSDK/PTVSharedDeviceMotionObserver-Protocol.h>
#import <PeriscopeSDK/PTVSketchPointReceivable-Protocol.h>
#import <PeriscopeSDK/PTVVideoSourceDelegate-Protocol.h>

@class NSDate, NSString, PTVAudioVisualizerModel, PTVBitrateController, PTVEncodePipeline, UIView;
@protocol PTVCompositedVideoDelegate, PTVDisplayView, PTVEncodedOutputDelegate, PTVMotionDelegate, PTVPublishingPipelineDelegate, PTVVideoSource;

@interface PTVPublishingPipeline : NSObject <PTVEncodedOutputDelegate, PTVVideoSourceDelegate, PTVSharedDeviceMotionObserver, PTVSketchPointReceivable>
{
    id _weakSelf;
    long long _interfaceOrientation;
    _Bool _shouldMute;
    _Bool _isObservingEncodePipeline;
    _Bool _stabilizationEnabled;
    _Bool _saveAsHQEnabled;
    _Bool _audioPresent;
    _Bool _isFirstFrame;
    _Bool _didResignActive;
    _Bool _isObservingRotation;
    _Bool _waitingToRestart;
    _Bool _suspendForSwitch;
    _Bool _hasResetForSilence;
    int _inputsExpected;
    int _gopLen;
    int _frameRate;
    UIView<PTVDisplayView> *_cameraPreview;
    PTVBitrateController *_bitrateControl;
    id <PTVPublishingPipelineDelegate> _delegate;
    id <PTVEncodedOutputDelegate> _outputDelegate;
    id <PTVCompositedVideoDelegate> _compositedDelegate;
    id <PTVMotionDelegate> _motionDelegate;
    long long _cameraType;
    NSDate *_startSwitchCamera;
    PTVAudioVisualizerModel *_audioVisualizerModel;
    double _freeSpaceLimitinMB;
    id <PTVVideoSource> _videoCamera;
    PTVEncodePipeline *_pipeline;
    double _lastAngle;
    double _imageRotation;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
@property _Bool hasResetForSilence; // @synthesize hasResetForSilence=_hasResetForSilence;
@property _Bool suspendForSwitch; // @synthesize suspendForSwitch=_suspendForSwitch;
@property _Bool waitingToRestart; // @synthesize waitingToRestart=_waitingToRestart;
@property(nonatomic) double imageRotation; // @synthesize imageRotation=_imageRotation;
@property(nonatomic) double lastAngle; // @synthesize lastAngle=_lastAngle;
@property(nonatomic) _Bool isObservingRotation; // @synthesize isObservingRotation=_isObservingRotation;
@property(nonatomic) int frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) int gopLen; // @synthesize gopLen=_gopLen;
@property(retain, nonatomic) PTVEncodePipeline *pipeline; // @synthesize pipeline=_pipeline;
@property(retain, nonatomic) id <PTVVideoSource> videoCamera; // @synthesize videoCamera=_videoCamera;
@property double freeSpaceLimitinMB; // @synthesize freeSpaceLimitinMB=_freeSpaceLimitinMB;
@property(readonly, nonatomic) PTVAudioVisualizerModel *audioVisualizerModel; // @synthesize audioVisualizerModel=_audioVisualizerModel;
@property(nonatomic) _Bool didResignActive; // @synthesize didResignActive=_didResignActive;
@property(retain) NSDate *startSwitchCamera; // @synthesize startSwitchCamera=_startSwitchCamera;
@property(nonatomic) long long cameraType; // @synthesize cameraType=_cameraType;
@property _Bool isFirstFrame; // @synthesize isFirstFrame=_isFirstFrame;
@property(nonatomic) int inputsExpected; // @synthesize inputsExpected=_inputsExpected;
@property _Bool audioPresent; // @synthesize audioPresent=_audioPresent;
@property struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property __weak id <PTVMotionDelegate> motionDelegate; // @synthesize motionDelegate=_motionDelegate;
@property(nonatomic) __weak id <PTVCompositedVideoDelegate> compositedDelegate; // @synthesize compositedDelegate=_compositedDelegate;
@property(nonatomic) __weak id <PTVEncodedOutputDelegate> outputDelegate; // @synthesize outputDelegate=_outputDelegate;
@property(nonatomic) __weak id <PTVPublishingPipelineDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PTVBitrateController *bitrateControl; // @synthesize bitrateControl=_bitrateControl;
@property(nonatomic) _Bool saveAsHQEnabled; // @synthesize saveAsHQEnabled=_saveAsHQEnabled;
@property(readonly) UIView<PTVDisplayView> *cameraPreview; // @synthesize cameraPreview=_cameraPreview;
- (void)unobserveEncodePipelineChanges;
- (void)observeEncodePipelineChanges;
- (void)requestColorSampleAtNormalizedPoint:(struct CGPoint)arg1 withCallback:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool mute;
- (void)removeSwitchboardAsset;
- (void)updateSwitchboardAssetAttributes:(struct PTVSwitchboardAssetAttributes)arg1;
- (void)displaySwitchboardAsset:(id)arg1 withAttributes:(struct PTVSwitchboardAssetAttributes)arg2;
- (void)captureNextJPEG:(CDUnknownBlockType)arg1;
- (void)captureNextSampleBuffer:(CDUnknownBlockType)arg1;
- (void)clearCanvasAnimated:(_Bool)arg1;
- (void)enqueueSketchPoints:(id)arg1;
- (void)resetFocusAndExposure;
- (_Bool)canSetFocusPoint;
- (void)setFocusAndExposure:(struct CGPoint)arg1;
- (void)requestKeyFrame;
- (double)makeNTPfor:(double)arg1;
- (void)sendMetadata:(id)arg1 immediate:(_Bool)arg2;
- (double)videoDuration;
- (void)deleteSavedClips;
- (void)finishRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)renderVideo:(id)arg1 withWorkingFolder:(id)arg2 muteAudio:(_Bool)arg3 captureOrientation:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)pauseLocalRecording;
- (void)startLocalRecording;
@property(readonly) _Bool isRecording;
- (void)setRecordingDelegate:(id)arg1;
@property(nonatomic) _Bool mirrorRecordedVideo;
@property(nonatomic) int videoKBytesPerSecond;
@property(nonatomic) int audioKBitsPerSecond;
- (void)setTorchMode:(long long)arg1;
- (void)setPhotoFlashMode:(long long)arg1;
- (void)capturePhotoWithCompletion:(CDUnknownBlockType)arg1;
- (void)capture:(CDUnknownBlockType)arg1;
- (void)videoSource:(id)arg1 didReceiveAudioBufferPeak:(id)arg2;
- (void)videoSource:(id)arg1 videoPreviewLayerDidChange:(id)arg2;
- (void)onAudioData:(id)arg1 pts:(double)arg2;
- (void)source:(id)arg1 audioParams:(id)arg2 format:(struct opaqueCMFormatDescription *)arg3;
- (void)videoSource:(id)arg1 didReceiveLogEntry:(id)arg2;
- (void)videoSource:(id)arg1 didReceiveMetadataObjects:(id)arg2;
- (void)videoSource:(id)arg1 didReceiveSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 captureContext:(CDStruct_4508418e)arg3;
- (void)source:(id)arg1 videoParams:(id)arg2;
- (void)didChangeLocalAudioSource:(_Bool)arg1 isUsingHeadphones:(_Bool)arg2;
- (void)pipeline:(id)arg1 pushMetadata:(id)arg2 pts:(double)arg3;
- (_Bool)pipeline:(id)arg1 shouldEncodeVideo:(double)arg2;
- (void)pipeline:(id)arg1 audioData:(id)arg2 pts:(double)arg3;
- (void)pipeline:(id)arg1 audioParams:(id)arg2;
- (void)pipeline:(id)arg1 videoData:(id)arg2 pts:(double)arg3 dts:(double)arg4;
- (void)pipeline:(id)arg1 videoParams:(id)arg2;
- (void)_selectNextPhoneCameraOnPipelineQueue;
- (_Bool)selectNextPhoneCamera;
@property(readonly, nonatomic) long long positionForCameraType;
- (void)_ptv_selectCamera:(long long)arg1;
- (void)selectCamera:(long long)arg1;
@property(nonatomic) _Bool stabilizationEnabled;
- (void)setDimmingCameraPreview:(_Bool)arg1;
@property long long interfaceOrientation;
@property(readonly) long long cameraPreferredOrientation;
@property(readonly) _Bool isEncoding;
@property(readonly) _Bool isBroadcasting;
- (void)stopBroadcasting;
- (_Bool)startBroadcasting;
@property(readonly) _Bool isCameraActive;
- (long long)captureOrientation;
@property(readonly) double viewOrientation;
- (void)ptv_updateCaptureOrienation;
- (void)onCameraOrientation:(double)arg1;
- (void)onDeviceRotation:(double)arg1;
@property(readonly) double encodedOrientation;
- (void)onOrientation:(id)arg1;
- (_Bool)isObservingDeviceMotionFromGyro;
- (void)unobserveMotionAndOrientationChanges;
- (void)observeDeviceMotionAndOrientationChanges;
- (void)motionManagerDidDetectMotion:(id)arg1 error:(id)arg2;
- (void)pauseCamera;
- (_Bool)resumeCamera;
@property(readonly) struct CGSize sourceSize;
@property(readonly) float maxZoomFactor;
@property float zoomFactor;
- (void)setupPipelineForCurrentBitrate;
- (void)setHQVideoSize:(struct CGSize)arg1 frameRate:(int)arg2 bitrate:(int)arg3 gopLength:(int)arg4;
- (void)setVideoSize:(struct CGSize)arg1 frameRate:(int)arg2;
- (void)cameraRuntimeError;
- (void)cameraStartFailed;
- (void)cameraStartComplete;
- (void)createCameraWithAudioOutputMode:(long long)arg1;
- (void)startCameraWithAudioOutputMode:(long long)arg1;
- (void)startShutdown;
- (void)shutdown;
- (_Bool)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 stabilizationEnabled:(_Bool)arg2 saveAsHQEnabled:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

