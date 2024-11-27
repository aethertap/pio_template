#if TESTING
#include<iostream>
using namespace std;

static const int LED_BUILTIN = 13;
static const int HIGH = 1;
static const int LOW = 0;
static const int INPUT = 0;
static const int OUTPUT = 1;

int pins[20];

void digitalWrite(int pin, int val) {
    cout << "Write " << val << " to pin " << pin << endl;
    pins[pin] = val;
}

int digitalRead(int pin) {
    cout << "Read pin " << pin << " value is " << pins[pin] << endl;
    return pins[pin];
}

void delay(int ms) {
    cout << "Delay for " << ms << " milliseconds" << endl;
}

void pinMode(int pin, int mode) {
    cout << "Set pinmode for pin " << pin << " to " << mode << endl;
}

#endif