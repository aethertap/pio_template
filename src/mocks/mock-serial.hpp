
#ifdef TESTING
#ifndef MOCK_SERIAL_HPP
#define MOCK_SERIAL_HPP
#include<stdio.h>
using namespace std;

class SerialSingleton {
    public:
    SerialSingleton() { }
    void begin(int baud_rate) {
        cout << "Set serial baud rate to "<< baud_rate << endl;
        this->baud_rate = baud_rate;
    }

    void print(int value) {
        cout << value;
    }
    void print(std::string s) {
        cout << s;
    }

    template<class T>
    void println(T output) {
        this->print(output);
        this->print("\n");
    }

    int baud_rate; 
};

static SerialSingleton Serial;

#endif
#endif