#if TESTING

#ifndef SERVO_HPP
#define SERVO_HPP
#include<stdio>

using namespace std;

class Servo {
    protected:
    int angle;
    int pin_id;
    Servo() {
        angle = 90;
        pin_id = 0;
    }

    void attach(int pin_id) {
        pin_id = pin_id;
    }

    void write(int angle) {
        if(angle < 0 || angle >180) {
            cerr << "Servo Error: Angle on servo with pin " << pin_id << " was set to " << angle << " (out of bounds [0,180])"<< endl;
        }
    }
}

#endif
#endif