#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int roll;

public:
    void input() {
        cin >> name >> roll;
    }

    void display() {
        cout << name << endl;
        cout << roll << endl;
    }
};

class Engineering : public Student {
public:
    void show() {
        cout << "Engineering Student" << endl;
    }
};

class Medicine : public Student {
public:
    void show() {
        cout << "Medicine Student" << endl;
    }
};

class Science : public Student {
public:
    void show() {
        cout << "Science Student" << endl;
    }
};

int main() {
    Engineering e;
    Medicine m;
    Science s;

    e.input();
    m.input();
    s.input();

    e.display();
    e.show();

    m.display();
    m.show();

    s.display();
    s.show();

    return 0;
}