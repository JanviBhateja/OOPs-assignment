#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
    virtual void display() = 0;
};

class Circle : public Shape {
    float r;

public:
    Circle(float x) {
        r = x;
    }

    void area() {
        cout << 3.14 * r * r << endl;
    }

    void display() {
        cout << "Circle" << endl;
    }
};

class Rectangle : public Shape {
    int l, b;

public:
    Rectangle(int x, int y) {
        l = x;
        b = y;
    }

    void area() {
        cout << l * b << endl;
    }

    void display() {
        cout << "Rectangle" << endl;
    }
};

class Triangle : public Shape {
    int b, h;

public:
    Triangle(int x, int y) {
        b = x;
        h = y;
    }

    void area() {
        cout << (b * h) / 2 << endl;
    }

    void display() {
        cout << "Triangle" << endl;
    }
};

int main() {
    Shape *s;

    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(4, 8);

    s = &c;
    s->display();
    s->area();

    s = &r;
    s->display();
    s->area();

    s = &t;
    s->display();
    s->area();

    return 0;
}