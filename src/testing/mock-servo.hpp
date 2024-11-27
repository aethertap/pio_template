#if TESTING

#ifndef MOCK_SERVO_HPP
#define MOCK_SERVO_HPP

#include <stdio.h>
using namespace std;

class Servo {
    protected:
    int angle;
    int pin_id;

    public:
    Servo() {
        angle = 90;
        pin_id = 0;
    }

    void attach(int pin_id) {
        cout << "Attached servo to pin " << pin_id << endl;
        pin_id = pin_id;
    }

    void write(int angle) {
        cout << "Requested angle " << angle << endl;
        if(angle < 0 || angle >180) {
            cerr << "Servo Error: Angle on servo with pin " << pin_id << " was set to " << angle << " (out of bounds [0,180])"<< endl;
        }
    }
};

#endif
#endif
