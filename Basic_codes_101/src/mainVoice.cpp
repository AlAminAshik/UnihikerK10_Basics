/*!
 * @file  SpeechRecognitionEN.ino
 * @brief English SpeechRecognition, you need to set the UNIHIKER K10 built-in model to English version before uploading this code.
 * Model selection is in the Tool->Model->EN of Arduino IDE
 * Say ‘Hi Telly’ or ‘Jarvis’ to wake up the UNIHIKER, and then say ‘Switch on’ or ‘Switch off’ to switch on and off the on-board LEDs.
 * @copyright   Copyright (c) 2021 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @license     The MIT License (MIT)
 * @author      
 * @version     V1.0
 * @date        2024-12-30
 * @url         
 */
#include "asr.h"
#include "unihiker_k10.h"

UNIHIKER_K10 k10;
ASR          asr;
uint8_t      screen_dir=2;
Music music;

void setup() {
    k10.begin();
    asr.asrInit(CONTINUOUS, EN_MODE, 5000);
    while(asr._asrState == 0){delay(50);}
    k10.initScreen(screen_dir);
    k10.creatCanvas();
    k10.initSDFile();
    asr.addASRCommand(0+1, "Light on");
    asr.addASRCommand(1+1, "Light off");
    asr.addASRCommand(2+1, "Display on");
    asr.addASRCommand(3+1, "Display off");
    k10.setScreenBackground(0x000000);
    k10.canvas->updateCanvas();
}
void loop() {
    if (asr.isWakeUp()) {
        music.playMusic(Melodies::BA_DING, OnceInBackground);
        k10.canvas->canvasText("Enter the Speech Recognition Mode, please say the command word...", 5, 30, 0x0000FF, k10.canvas->eCNAndENFont16, 50, true);
        k10.canvas->updateCanvas();
        asr._wakeUp = false;  //play the record only once.
    }else {
        k10.canvas->canvasText("Enter the sleep mode, please say the wake up word \"Hi Ashik\" or \"Jarvis\"", 5, 30, 0x0000FF, k10.canvas->eCNAndENFont16, 50, true);
        k10.canvas->updateCanvas();
    }
    if (asr.isDetectCmdID(0+1)) {
        k10.rgb->brightness(round(9));
        k10.rgb->write(-1, 0xFFFFFF);
    }else if (asr.isDetectCmdID(1+1)) {
        k10.rgb->brightness(round(0));
        k10.rgb->write(-1, 0xFFFFFF);
    }
    if (asr.isDetectCmdID(2+1)) {
        k10.setScreenBackground(0xFFFFFF);  //Set background color to white
    }else if (asr.isDetectCmdID(3+1)) {
        k10.setScreenBackground(0x000000);  //Set background color to black
    }
}