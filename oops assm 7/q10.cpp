#include <iostream>
using namespace std;

class Number {
    int x;

public:
    void input() {
        cin >> x;
    }

    void output() {
        cout << x;
    }
};

int main() {
    Number n;

    n.input();
    n.output();

    return 0;
}