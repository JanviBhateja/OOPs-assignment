#include <iostream>
using namespace std;

class A {
    int x;

public:
    void input() {
        cin >> x;
    }

    friend class B;
};

class B {
public:
    void display(A a) {
        cout << a.x;
    }
};

int main() {
    A a;
    B b;

    a.input();
    b.display(a);

    return 0;
}