#include <iostream>
using namespace std;

class Base {
protected:
    int x;
};

class Derived : public Base {
public:
    void input() {
        cin >> x;
    }

    void display() {
        cout << x;
    }
};

int main() {
    Derived d;
    d.input();
    d.display();

    return 0;
}