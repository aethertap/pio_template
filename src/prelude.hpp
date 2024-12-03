#if TESTING

#include "testing/mock-arduino.hpp"
#include "testing/mock-servo.hpp"
#include "testing/mock-serial.hpp"

#else

#include<Arduino.h>
#include<Servo.h>
#include<Serial.h>

#endif