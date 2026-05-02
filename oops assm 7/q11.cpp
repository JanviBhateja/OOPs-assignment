#include <iostream>
using namespace std;

class Time {
    int hour, minute;

public:
    Time(int h, int m) {
        hour = h;
        minute = m;
    }

    operator float() {
        return hour + minute / 60.0;
    }
};

int main() {
    Time t(2, 30);
    float x;

    x = t;

    cout << x;

    return 0;
}