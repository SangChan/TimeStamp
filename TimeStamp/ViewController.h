//
//  ViewController.h
//  TimeStamp
//
//  Created by SangChan on 2015. 4. 8..
//  Copyright (c) 2015년 sangchan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MobileCoreServices/MobileCoreServices.h>

@interface ViewController : UIViewController<UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property BOOL newMedia;
@property (strong, nonatomic) IBOutlet UIImageView *imageView;

-(IBAction)useCamera:(id)sender;
-(IBAction)useCameraRoll:(id)sender;


@end

