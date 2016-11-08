//
//  ViewController.h
//  GRSoundRecorder
//
//  Created by Student P_05 on 06/11/16.
//  Copyright © 2016 Rane Gunjan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController

    {
        AVAudioPlayer *audioPlayer;
        AVAudioRecorder *audioRecoder;
        NSMutableDictionary *recordSetting;
    }

- (IBAction)recordAction:(id)sender;


- (IBAction)playAction:(id)sender;
- (IBAction)stopAction:(id)sender;

@end

