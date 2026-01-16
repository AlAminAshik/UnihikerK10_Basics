// #include "unihiker_k10.h"

// volatile float accx, accy, moveX, moveY;

// UNIHIKER_K10 k10;
// uint8_t screen_dir=2;

// void setup() {
//   k10.begin();
//   k10.initScreen(screen_dir);
//   k10.creatCanvas();
//   k10.setScreenBackground(0xFFFFFF);
// }
// void loop() {
//   accx = (k10.getAccelerometerX()); //Get accelerometer X-axis data in g
//   accy = (k10.getAccelerometerY()); //Get accelerometer Y-axis data in g
//   moveX = (120 + (accx / 3));       //Calculate ball movement position based on accelerometer data X-axis
//   moveY = (160 + (accy / 3));       //Calculate ball movement position based on accelerometer data inverted Y-axis
//   k10.canvas->canvasCircle(moveX, moveY, 8, 0x00FF00, 0x00FF00, true);
//   k10.canvas->updateCanvas();
//   k10.canvas->canvasCircle(moveX, moveY, 9, 0xFFFFFF, 0xFFFFFF, true);
// }