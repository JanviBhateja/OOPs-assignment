#include <iostream>
#include <string>
using namespace std;

class STRING {
    string s;

public:
    void input() {
        cin >> s;
    }

    bool operator==(STRING x) {
        return s == x.s;
    }

    STRING operator+(STRING x) {
        STRING temp;
        temp.s = s + x.s;
        return temp;
    }

    void display() {
        cout << s;
    }
};

int main() {
    STRING s1, s2, s3;

    s1.input();
    s2.input();

    if (s1 == s2)
        cout << "Equal" << endl;
    else
        cout << "Not Equal" << endl;

    s3 = s1 + s2;
    s3.display();

    return 0;
}