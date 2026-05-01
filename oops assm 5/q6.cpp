#include <iostream>
#include <string>
using namespace std;

class Book {
protected:
    string title, author;
    float price;

public:
    void inputBook() {
        cin >> title >> author >> price;
    }

    void displayBook() {
        cout << title << endl;
        cout << author << endl;
        cout << price << endl;
    }
};

class Textbook : public Book {
    string subject;

public:
    void inputTextbook() {
        inputBook();
        cin >> subject;
    }

    void displayTextbook() {
        displayBook();
        cout << subject << endl;
    }
};

int main() {
    Textbook t;

    t.inputTextbook();
    t.displayTextbook();

    return 0;
}