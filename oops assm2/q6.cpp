#include<iostream>
using namespace std;
int x=100;
class Example {
private:
    static int count;  

public:
static int count;
    int num;

    void setData(int n);
    void displayData();
};
int Example::count = 0;
void Example::setData(int n) {
    num = n;
    count++; // Accessing static variable
}

void Example::displayData() {
    cout << "Num = " << num << endl;
    cout << "Count = " << count << endl;
}

int main(){
    Example obj1, obj2;

    // (a) Class functions defined outside the class
    obj1.setData(10);
    obj2.setData(20);

    obj1.displayData();
    obj2.displayData();

    // (b) Accessing global variable when local variable has same name
    int x = 50; // local variable
    cout << "Local x = " << x << endl;
    cout << "Global x = " << ::x << endl; // Using scope resolution to access global

    // (c) Accessing static variable directly using class name
    cout << "Access static variable directly: " << Example::count << endl;

    // (d) Using std namespace with scope resolution operator
    std::cout << "Using scope resolution with cout and endl" << std::endl;
    return 0;
}