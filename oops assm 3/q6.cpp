#include <iostream>
using namespace std;

inline int cube(int n) {
    return n * n * n;
}

int main() {
    int n;
    cin >> n;
    cout << cube(n);
    return 0;
}