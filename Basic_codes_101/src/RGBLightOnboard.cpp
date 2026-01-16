#include "unihiker_k10.h"

volatile float mind_n_brightness;   // Variable to store brightness level

UNIHIKER_K10 k10;

void setup() {
    k10.begin();
    mind_n_brightness = 0;
    k10.rgb->brightness(round(mind_n_brightness));  //Set initial brightness to 0
    k10.rgb->write(-1, 0x0000FF);   //Set RGB lights to blue color
}
void loop() {
    while (!(mind_n_brightness==9)) {   //Increase brightness to maximum level
        k10.rgb->brightness(round(mind_n_brightness));  //Set brightness level to mind_n_brightness
        k10.rgb->write(-1, 0x0000FF);   //Set RGB lights to blue color
        delay(200);
        mind_n_brightness += 1;
    }
    while (!(mind_n_brightness==0)) {
        k10.rgb->brightness(round(mind_n_brightness));
        k10.rgb->write(-1, 0x0000FF);
        delay(200);
        mind_n_brightness -= 1;
    }
}