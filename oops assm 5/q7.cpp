#include <iostream>
using namespace std;

class Speedometer {
protected:
    int speed;
public:
    void inputSpeed() {
        cin >> speed;
    }
};

class FuelGauge {
protected:
    int fuel;
public:
    void inputFuel() {
        cin >> fuel;
    }
};

class Thermometer {
protected:
    int temperature;
public:
    void inputTemperature() {
        cin >> temperature;
    }
};

class Dashboard : public Speedometer, public FuelGauge, public Thermometer {
public:
    void input() {
        inputSpeed();
        inputFuel();
        inputTemperature();
    }

    void display() {
        cout << speed << endl;
        cout << fuel << endl;
        cout << temperature << endl;
    }
};

int main() {
    Dashboard d;
    d.input();
    d.display();

    return 0;
}