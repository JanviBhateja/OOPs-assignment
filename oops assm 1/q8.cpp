#include <iostream>
using namespace std;

int main() {
    int days;
    cin >> days;

    if (days > 30)
        cout << "Membership Cancelled";
    else if (days <= 5)
        cout << days * 0.5;
    else if (days <= 10)
        cout << days * 1;
    else
        cout << days * 5;

    return 0;
}