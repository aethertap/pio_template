
#ifdef TESTING

#include<stdio.h>
using namespace std;

static class Serial {
    public:
    Serial() { }
    void begin(int baud_rate) {
        this->baud_rate = baud_rate;
    }

    void print(const char* output) {
        cout << output;
    }

    void println(const char* output) {
        cout << output << endl;
    }

    int baud_rate; 
} Serial;

#endif