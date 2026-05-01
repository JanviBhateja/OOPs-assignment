#include <iostream>
using namespace std;

// First namespace
namespace First {
    int value = 100;

    void display() {
        cout << "First namespace value: " << value << endl;
    }
}

// Second namespace
namespace Second {
    int value = 200;

    void display() {
        cout << "Second namespace value: " << value << endl;
    }
}

int main() {
    // Accessing variables and functions from First namespace
    First::display();
    cout << "Accessing variable from First namespace: " << First::value << endl;

    // Accessing variables and functions from Second namespace
    Second::display();
    cout << "Accessing variable from Second namespace: " << Second::value << endl;

    // Using both namespaces together
    cout << "\nDemonstrating that same names in different namespaces do not conflict:" << endl;
    cout << "First::value = " << First::value << ", Second::value = " << Second::value << endl;

    return 0;
}
