#include <iostream>
using namespace std;

class Test {
public:
    Test() {
        cout << "Object created" << endl;
    }
};

int main() {
    Test t;
    Test *p = new Test;

    delete p;

    return 0;
}