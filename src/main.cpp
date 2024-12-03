
#include "prelude.hpp"

Servo the_servo;

void setup() {
    Serial.begin(89999999);
    the_servo.attach(12);
}

void loop() {
    Serial.print(178);
    Serial.println("this is a string");
    the_servo.write(90);
}

#if TESTING

int main() {
    setup();
    for(int i=0; i<10; i++){
        loop();
    }
}

#endif