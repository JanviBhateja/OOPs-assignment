#include <iostream>
using namespace std;

class Base {
public:
    void showBase() {
        cout << "Base class" << endl;
    }
};

class Derived : public Base {
public:
    void showDerived() {
        cout << "Derived class" << endl;
    }
};

int main() {
    Derived d;
    d.showBase();
    d.showDerived();

    return 0;
}