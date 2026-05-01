#include <iostream>
using namespace std;

class B;

class A {
    int x;

public:
    void input() {
        cin >> x;
    }

    friend int add(A, B);
};

class B {
    int y;

public:
    void input() {
        cin >> y;
    }

    friend int add(A, B);
};

int add(A a, B b) {
    return a.x + b.y;
}

int main() {
    A a;
    B b;

    a.input();
    b.input();

    cout << add(a, b);

    return 0;
}