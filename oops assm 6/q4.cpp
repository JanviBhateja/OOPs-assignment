#include <iostream>
using namespace std;

class B;

class A {
    int x;
public:
    void input() { cin >> x; }
    friend int sum(A, B);
};

class B {
    int y;
public:
    void input() { cin >> y; }
    friend int sum(A, B);
};

int sum(A a, B b) {
    return a.x + b.y;
}

int main() {
    A a;
    B b;

    a.input();
    b.input();

    cout << sum(a, b);

    return 0;
}