#include <iostream>
using namespace std;

class Time {
    int hour, minute;

public:
    Time() {
        hour = 0;
        minute = 0;
    }

    Time(float x) {
        hour = x;
        minute = (x - hour) * 60;
    }

    void display() {
        cout << hour << " hours " << minute << " minutes";
    }
};

int main() {
    float x;
    cin >> x;

    Time t;
    t = x;

    t.display();

    return 0;
}