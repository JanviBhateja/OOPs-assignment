#include <iostream>
using namespace std;

class Student {
    int roll;

public:
    void input() {
        cin >> roll;
    }

    void display() {
        cout << roll << endl;
    }
};

int main() {
    int *a = new int;
    float *b = new float;

    cin >> *a;
    cin >> *b;

    cout << *a << endl;
    cout << *b << endl;

    int *arr = new int[3];
    float *farr = new float[3];

    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 3; i++) {
        cin >> farr[i];
    }

    for (int i = 0; i < 3; i++) {
        cout << arr[i] << endl;
    }

    for (int i = 0; i < 3; i++) {
        cout << farr[i] << endl;
    }

    Student *s = new Student;
    s->input();
    s->display();

    Student *st = new Student[2];

    for (int i = 0; i < 2; i++) {
        st[i].input();
    }

    for (int i = 0; i < 2; i++) {
        st[i].display();
    }

    delete a;
    delete b;
    delete[] arr;
    delete[] farr;
    delete s;
    delete[] st;

    return 0;
}