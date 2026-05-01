#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    Rectangle(int l = 0, int b = 0) {
        length = l;
        breadth = b;
    }

    ~Rectangle() {
        cout << "Destructor called" << endl;
    }

    void area() {
        cout << length * breadth << endl;
    }
};

int main() {
    Rectangle r[3] = {Rectangle(), Rectangle(5), Rectangle(4, 6)};

    for (int i = 0; i < 3; i++) {
        r[i].area();
    }

    return 0;
}