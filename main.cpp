#include <iostream>
//#include <HID-Project.h>
#include "RotaryEncoder.h"
#include "Joystick.h"

rotaryEncoder rotEnc();
joystick joySti();
void setup() {
    //Serial.begin(9600);
    //Consumer.begin();

}

void loop() {
    rotEnc.checkStatus();
    joySti.checkStatus();
}
