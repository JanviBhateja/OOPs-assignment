#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    void input() {
        cin >> length >> breadth;
    }

    void area() {
        cout << length * breadth << endl;
    }
};

int main() {
    Rectangle r[3];

    for (int i = 0; i < 3; i++) {
        r[i].input();
    }

    for (int i = 0; i < 3; i++) {
        r[i].area();
    }

    return 0;
}