// #include "unihiker_k10.h"

// UNIHIKER_K10 k10;
// uint8_t screen_dir=2;
// Music music;

// void setup() {
//     k10.begin();
//     k10.initScreen(screen_dir);
//     k10.creatCanvas();
//     k10.initSDFile();
//     k10.canvas->canvasText("Press A to record......", 5, 10, 0x0000FF, k10.canvas->eCNAndENFont16, 50, true);
//     k10.canvas->updateCanvas();
// }
// void loop() {
//     if ((k10.buttonA->isPressed())) {
//         k10.canvas->canvasText("Recording", 5, 10, 0x0000FF, k10.canvas->eCNAndENFont16, 50, true);
//         k10.canvas->updateCanvas();
//         music.recordSaveToTFCard("S:/sound.wav", 1.5);
//         k10.canvas->canvasText("Record complete", 5, 10, 0x0000FF, k10.canvas->eCNAndENFont16, 50, true);
//         k10.canvas->updateCanvas();
//     }
//     else if ((k10.buttonB->isPressed())) {
//         k10.canvas->canvasText("Playing......", 5, 10, 0x0000FF, k10.canvas->eCNAndENFont16, 50, true);
//         k10.canvas->updateCanvas();
//         music.playTFCardAudio("S:/sound.wav");
//         delay(1000);
//         k10.canvas->canvasText("Play complete", 0, 0, 0x0000FF, k10.canvas->eCNAndENFont16, 50, true);
//         k10.canvas->updateCanvas();
//     }
// }