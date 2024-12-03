#if TESTING

#include "mocks/mock-arduino.hpp"
#include "mocks/mock-servo.hpp"
#include "mocks/mock-serial.hpp"

#else

#include<Arduino.h>
#include<Servo.h>
#include<Serial.h>

#endif