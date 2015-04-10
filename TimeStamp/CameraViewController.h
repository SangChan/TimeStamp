//
//  CameraViewController.h
//  TimeStamp
//
//  Created by SangChan on 2015. 4. 8..
//  Copyright (c) 2015년 sangchan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AVCamPreviewView.h"
#import <AssetsLibrary/AssetsLibrary.h>
#import <AVFoundation/AVFoundation.h>

@interface CameraViewController : UIViewController  <AVCaptureFileOutputRecordingDelegate,AVCaptureAudioDataOutputSampleBufferDelegate> {
    UIView *_faceView;
}

// For use in the storyboards.
@property (nonatomic, weak) IBOutlet AVCamPreviewView *previewView;
@property (nonatomic, weak) IBOutlet UIButton *changeCameraButton;
@property (nonatomic, weak) IBOutlet UIButton *stillButton;

- (IBAction)changeCamera:(id)sender;
- (IBAction)snapStillImage:(id)sender;
- (IBAction)focusAndExposeTap:(UIGestureRecognizer *)gestureRecognizer;

// Face Detect.
@property (nonatomic) dispatch_queue_t faceDetectQueue; // Communicate with the session and other session objects on this queue.
@property (nonatomic) CIDetector *faceDetector;

// Session management.
@property (nonatomic) dispatch_queue_t sessionQueue; // Communicate with the session and other session objects on this queue.
@property (nonatomic) AVCaptureSession *session;
@property (nonatomic) AVCaptureDeviceInput *videoDeviceInput;
@property (nonatomic)AVCaptureVideoDataOutput *frameOutput;
@property (nonatomic) AVCaptureStillImageOutput *stillImageOutput;

// Utilities.
@property (nonatomic) UIBackgroundTaskIdentifier backgroundRecordingID;
@property (nonatomic, getter = isDeviceAuthorized) BOOL deviceAuthorized;
@property (nonatomic, readonly, getter = isSessionRunningAndDeviceAuthorized) BOOL sessionRunningAndDeviceAuthorized;
@property (nonatomic) BOOL lockInterfaceRotation;
@property (nonatomic) id runtimeErrorHandlingObserver;

@end
