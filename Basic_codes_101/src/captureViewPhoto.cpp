// #include "unihiker_k10.h"

// void onButtonAPressed();    //Callback function for Button A press
// void onButtonBPressed();    //Callback function for Button B press

// UNIHIKER_K10 k10;
// uint8_t screen_dir=2;

// void setup() {
//     k10.begin();
//     k10.initScreen(screen_dir);
//     k10.initBgCamerImage();         //Initialize the camera image
//     k10.setBgCamerImage(false);     //Disable displaying the camera image on the screen
//     k10.creatCanvas();              //Create a canvas for drawing
//     k10.buttonA->setPressedCallback(onButtonAPressed);  //Set callback for Button A press
//     k10.initSDFile();               //Initialize the SD card file system
//     k10.buttonB->setPressedCallback(onButtonBPressed);  //Set callback for Button B press
//     k10.setBgCamerImage(true);    //Enable displaying the camera image on the screen
// }
// void loop() {
// }

// void onButtonAPressed() {
//     k10.photoSaveToTFCard("S:/photo.bmp");  //Save photo to SD card when Button A is pressed
// }
// void onButtonBPressed() {
//     k10.canvas->canvasDrawImage(0, 0, "S:/photo.bmp");  //Display saved photo on canvas when Button B is pressed
//     k10.canvas->updateCanvas();  //Update the canvas to reflect changes
// }