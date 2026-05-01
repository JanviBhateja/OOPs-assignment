#include <iostream>
using namespace std;

class LibraryUser {
protected:
    string name, contact;
    int id;
public:
    void inputUser() {
        cin >> name >> id >> contact;
    }
};

class Student : public LibraryUser {
protected:
    string grade;
public:
    void inputStudent() {
        inputUser();
        cin >> grade;
    }

    void displayStudent() {
        cout << name << endl;
        cout << id << endl;
        cout << contact << endl;
        cout << grade << endl;
    }
};

class Teacher : public LibraryUser {
protected:
    string department;
public:
    void inputTeacher() {
        inputUser();
        cin >> department;
    }

    void displayTeacher() {
        cout << name << endl;
        cout << id << endl;
        cout << contact << endl;
        cout << department << endl;
    }
};

int main() {
    Student s;
    Teacher t;

    s.inputStudent();
    t.inputTeacher();

    s.displayStudent();
    t.displayTeacher();

    return 0;
}