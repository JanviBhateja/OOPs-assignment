#include <iostream>
using namespace std;

class Vehicle {
protected:
    string make, model;
    int year;
public:
    void inputVehicle() {
        cin >> make >> model >> year;
    }
};

class Truck : public Vehicle {
protected:
    int load_capacity;
public:
    void inputTruck() {
        inputVehicle();
        cin >> load_capacity;
    }
};

class RefrigeratedTruck : public Truck {
    int temperature_control;
public:
    void inputRefrigeratedTruck() {
        inputTruck();
        cin >> temperature_control;
    }

    void display() {
        cout << make << endl;
        cout << model << endl;
        cout << year << endl;
        cout << load_capacity << endl;
        cout << temperature_control << endl;
    }
};

int main() {
    RefrigeratedTruck r;
    r.inputRefrigeratedTruck();
    r.display();

    return 0;
}