// #include "unihiker_k10.h"
// UNIHIKER_K10 k10;
// uint8_t      screen_dir=2;

// void setup() {
//     k10.begin();
//     k10.initScreen(screen_dir);
//     k10.creatCanvas();
//     k10.initSDFile();
// }
// void loop() {
//     if ((k10.isGesture(TiltForward))) { //Detect forward tilt gesture
//         k10.canvas->canvasDrawImage(0, 0, "S:/forward.png");
//         k10.canvas->canvasText("Forward", 1, 0x0000FF);    //Display text in blue color
//         k10.canvas->updateCanvas();
//     }
//     else if ((k10.isGesture(TiltBack))) {
//         k10.canvas->canvasDrawImage(0, 0, "S:/back.png");
//         k10.canvas->canvasText("Back", 1, 0x0000FF);    //Display text in blue color
//         k10.canvas->updateCanvas();
//     }
//     else if ((k10.isGesture(TiltLeft))) {
//         k10.canvas->canvasDrawImage(0, 0, "S:/left.png");
//         k10.canvas->canvasText("Left", 1, 0x0000FF);    //Display text in blue color
//         k10.canvas->updateCanvas();
//     }
//     else if ((k10.isGesture(TiltRight))) {
//         k10.canvas->canvasDrawImage(0, 0, "S:/right.png");
//         k10.canvas->canvasText("Right", 1, 0x0000FF);    //Display text in blue color
//         k10.canvas->updateCanvas();
//     }
//     k10.canvas->canvasRectangle(0, 0, 240, 320, 0xFFFFFF, 0xFFFFFF, true);  //Clear the canvas
//     k10.canvas->updateCanvas();
// }