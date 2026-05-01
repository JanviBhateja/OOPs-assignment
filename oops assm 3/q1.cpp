#include <iostream>
using namespace std;

class Student {
    int roll;

public:
    void setData(int roll) {
        this->roll = roll;
    }

    void display() {
        cout << roll;
    }
};

int main() {
    Student s;
    Student *p;

    p = &s;

    s.setData(10);
    s.display();

    cout << endl;

    p->setData(20);
    p->display();

    return 0;
}