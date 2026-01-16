#include "unihiker_k10.h"

UNIHIKER_K10 k10;

void setup() {
    k10.begin();
    Serial.begin(9600);

    pinMode(P0, OUTPUT);
    pinMode(P1, INPUT);

    digitalWrite(P0, HIGH);
    analogWrite(P0, map(512, 0, 1023, 0, 255));
}

void loop() {
    Serial.println((digitalRead(P1)));
    Serial.println((analogRead(P1)));
}

/*for extended GPIO
#include "unihiker_k10.h"

UNIHIKER_K10 k10;

void setup() {
    k10.begin();
    Serial.begin(9600);
    digital_write(eP2, HIGH);
}
void loop() {
    Serial.println((digital_read(eP3)));
}
*/