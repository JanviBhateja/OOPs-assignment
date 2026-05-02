#include <iostream>
#include <cmath>
using namespace std;

class Cartesian;

class Polar {
    float r, theta;

public:
    Polar(float a, float b) {
        r = a;
        theta = b;
    }

    float getR() {
        return r;
    }

    float getTheta() {
        return theta;
    }
};

class Cartesian {
    float x, y;

public:
    Cartesian() {
        x = 0;
        y = 0;
    }

    Cartesian(Polar p) {
        x = p.getR() * cos(p.getTheta());
        y = p.getR() * sin(p.getTheta());
    }

    void show() {
        cout << x << endl;
        cout << y;
    }
};

int main() {
    Polar p(10, 0.5);
    Cartesian c;

    c = p;

    c.show();

    return 0;
}