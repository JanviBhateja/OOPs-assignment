#include <iostream>
using namespace std;

int area(int side) {
    return side * side;
}

int area(int l, int b) {
    return l * b;
}

float area(float r) {
    return 3.14 * r * r;
}

float area(float b, float h) {
    return 0.5 * b * h;
}

int main() {
    cout << area(5) << endl;
    cout << area(4, 6) << endl;
    cout << area(3.5f) << endl;
    cout << area(4.0f, 5.0f);

    return 0;
}