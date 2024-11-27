
#include "prelude.hpp"

Servo the_servo;

void setup() {
    the_servo.attach(12);
}

void loop() {
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