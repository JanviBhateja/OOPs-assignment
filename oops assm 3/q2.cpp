#include <iostream>
using namespace std;

class B;

class A {
    int x;

public:
    void input() {
        cin >> x;
    }

    void display() {
        cout << x << endl;
    }

    friend void swapValues(A &, B &);
};

class B {
    int y;

public:
    void input() {
        cin >> y;
    }

    void display() {
        cout << y << endl;
    }

    friend void swapValues(A &, B &);
};

void swapValues(A &a, B &b) {
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
}

int main() {
    A a;
    B b;

    a.input();
    b.input();

    swapValues(a, b);

    a.display();
    b.display();

    return 0;
}