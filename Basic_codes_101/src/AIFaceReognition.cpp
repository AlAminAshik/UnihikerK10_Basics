#include "unihiker_k10.h"
#include "AIRecognition.h"

String ID;

void onButtonAPressed();    //Callback function for Button A press
void onButtonBPressed();    //Callback function for Button B press

UNIHIKER_K10  k10;
uint8_t screen_dir=2;
AIRecognition ai;

void setup() {
    k10.begin();
    k10.initScreen(screen_dir);
    ai.initAi();                    //Initialize AI
    k10.initBgCamerImage();         //Initialize the camera image
    k10.setBgCamerImage(false);     //Disable displaying the camera image on the screen
    k10.creatCanvas();
    ai.switchAiMode(ai.NoMode);     //Set AI mode to NoMode initially
    k10.buttonA->setPressedCallback(onButtonAPressed);  //Set callback for Button A press
    k10.buttonB->setPressedCallback(onButtonBPressed);  //Set callback for Button B press
    k10.setBgCamerImage(true);      //Enable displaying the camera image on the screen
    ai.switchAiMode(ai.Face);       //Switch AI mode to Face Recognition
}
void loop() {
    if (ai.isRecognized()) {        //If a face is recognized
        ID = ai.getRecognitionID(); //Get the recognized face ID
        k10.canvas->canvasText((String("Face ID: ") + String(ID)), 0, 0, 0x0000FF, k10.canvas->eCNAndENFont24, 50, true);   //Display the face ID on the canvas
        k10.canvas->canvasText(ID, 0, 40, 0x0000FF, k10.canvas->eCNAndENFont24, 50, true);  //Display only the ID on the canvas
        k10.canvas->updateCanvas();
    }
    delay(1000);
}

void onButtonAPressed() {
    k10.rgb->write(-1, 0x00FF00);   //Set RGB lights to green color
    ai.sendFaceCmd(ENROLL);         //Send command to enroll a new face
}
void onButtonBPressed() {
    k10.rgb->write(-1, 0x0000FF);   //Set RGB lights to blue color
    ai.sendFaceCmd(RECOGNIZE);      //Send command to recognize a face
}