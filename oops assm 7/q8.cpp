#include <iostream>
using namespace std;

class Array {
    int a[5];

public:
    void input() {
        for (int i = 0; i < 5; i++)
            cin >> a[i];
    }

    int operator[](int index) {
        if (index < 0 || index >= 5) {
            cout << "Index out of bounds";
            return -1;
        }
        return a[index];
    }
};

int main() {
    Array obj;
    int index;

    obj.input();
    cin >> index;

    cout << obj[index];

    return 0;
}