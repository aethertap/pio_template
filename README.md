# PlatformIO Testing template

This is a very basic code skeleton for developing a project with Arduino UNO
that can run unit tests. Put your unit tests into the `test` directory, and
make sure they are in directories that have `test_` as the first part of the
name.

This has a mock-arduino.hpp and mock-servo.hpp, which have very dumb mocks for
those files in order to make it easier to test things that use them. Just make 
sure you include them for any test code you're writing.
