#include "prelude.hpp"
#include <unity.h>

void setUp(){

}
void tearDown(){

}

void test_pinmode(){

}

void test_servo(){

}

void test_serial() {
    Serial.begin(12345);
    TEST_ASSERT_EQUAL(Serial.baud_rate, 12345);
    Serial.print("This is a test of the Serial broadcast system. Get some milk.");
    Serial.println(" And now, finally end the line. The next line says 78.");
    Serial.println(78);
    TEST_ASSERT_EQUAL(1,1);
}

void do_test()
{
  // NOTE!!! Wait for >2 secs
  // if board doesn't support software reset via Serial.DTR/RTS
  delay(2000);

  pinMode(LED_BUILTIN, OUTPUT);

  UNITY_BEGIN(); // IMPORTANT LINE!
  RUN_TEST(test_serial);
  RUN_TEST(test_servo);
  RUN_TEST(test_pinmode);
}

int main() {
    do_test();
}