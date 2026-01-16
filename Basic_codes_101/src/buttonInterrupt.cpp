// #include "unihiker_k10.h"

// void onButtonAPressed();    //Callback function for Button A press
// void onButtonBPressed();    //Callback function for Button B press
// void onButtonABPressed();   //Callback function for Button A+B press

// UNIHIKER_K10 k10;
// uint8_t      screen_dir=2;

// void onButtonAPressed() {
//     k10.canvas->canvasRectangle(10, 100, 110, 100, 0xFF6666, 0x0000FF, true);   //Draw rectangle
//     k10.canvas->updateCanvas();
// }
// void onButtonBPressed() {
//     k10.canvas->canvasCircle(180, 150, 50, 0xFF6666, 0x0000FF, true);       //Draw circle
//     k10.canvas->updateCanvas();
// }
// void onButtonABPressed() {
//     k10.canvas->canvasClear();      //Clear the canvas
//     k10.canvas->updateCanvas();
// }

// void setup() {
//     k10.begin();
//     k10.buttonA->setPressedCallback(onButtonAPressed);  //Set callback for Button A press
//     k10.initScreen(screen_dir);
//     k10.creatCanvas();
//     k10.buttonB->setPressedCallback(onButtonBPressed);  //Set callback for Button B press
//     k10.buttonAB->setPressedCallback(onButtonABPressed);  //Set callback for Button A+B press
// }
// void loop() {

// }