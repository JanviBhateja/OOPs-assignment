#include <iostream>
using namespace std;

class Person {
protected:
    string name, address;
public:
    void inputPerson() {
        cin >> name >> address;
    }
};

class Staff : public Person {
protected:
    int employee_id;
    string department;
public:
    void inputStaff() {
        inputPerson();
        cin >> employee_id >> department;
    }
};

class Student : public Person {
protected:
    int student_id;
    string grade;
public:
    void inputStudent() {
        inputPerson();
        cin >> student_id >> grade;
    }
};

class TeachingAssistant : public Staff, public Student {
public:
    void inputTA() {
        Staff::inputStaff();
        cin >> student_id >> grade;
    }

    void display() {
        cout << Staff::name << endl;
        cout << Staff::address << endl;
        cout << employee_id << endl;
        cout << department << endl;
        cout << student_id << endl;
        cout << grade << endl;
    }
};

int main() {
    TeachingAssistant t;
    t.inputTA();
    t.display();

    return 0;
}