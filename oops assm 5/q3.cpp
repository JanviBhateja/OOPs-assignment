#include <iostream>
using namespace std;

class Base {
public:
    int a;

protected:
    int b;

private:
    int c;
};

class Derived : public Base {
public:
    void show() {
        a = 10;
        b = 20;
        cout << a << endl;
        cout << b << endl;
    }
};

int main() {
    Derived d;
    d.show();
    d.a = 30;
    cout << d.a;

    return 0;
}