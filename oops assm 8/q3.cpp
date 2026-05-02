#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int roll;
    char name[20];

    void input() {
        cin >> roll >> name;
    }

    void display() {
        cout << roll << " " << name;
    }
};

int main() {
    Student s1, s2;

    s1.input();

    ofstream fout("student.dat", ios::binary);
    fout.write((char*)&s1, sizeof(s1));
    fout.close();

    ifstream fin("student.dat", ios::binary);
    fin.read((char*)&s2, sizeof(s2));
    fin.close();

    s2.display();

    return 0;
}